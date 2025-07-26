#include<iostream>
#include<vector>
using namespace std;

bool isValid(int mid,int arr[],int n,int m){
    if(m>n){
        return false;
    }
    int painter=1, woods=0;
    for(int i=0;i<n;i++){
        if(arr[i]>mid){
            return false;
        }else{
            if(woods+arr[i]<=mid){
                woods+=arr[i];
            }else{
                painter++;
                woods=arr[i];
            }
        }
    }
    if(painter==m){
        return true;
    }else{
        return false;
    }

}
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n]={40,90,45,20};
    int sum=0;
    for(int i=0;i<n;i++){
        // cin>>arr[i];
        sum+=arr[i];
    }
    int min=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }

    }
    int st=min;
    int end=sum;
    int ans=-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(isValid(mid,arr,n,m)){
            ans=mid;
            end=mid-1;
        }else{
            st=mid+1;
        }
    }
    cout<<ans;
    
}