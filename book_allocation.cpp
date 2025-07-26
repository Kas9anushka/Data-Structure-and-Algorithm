#include<iostream>
#include<vector>
#include<climits>
using namespace std;

bool isValid(int arr[],int n, int m, int mid){
    int stu=1, pages=0;
    for(int i=0;i<n;i++){
        if(arr[i]>mid){
            return false;
        }
        if(pages+arr[i]<=mid){
            pages+=arr[i];
        }else {
            stu++;
            pages=arr[i];
        }
    }
    if(stu>m){
        return false;
    }else{
        return true;
    }
}
int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    int arr[n];
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }

    if(m>n){
        return -1;
    }
    // binary search on ppssible array
    int st=0;
    int end=sum;
    int ans=-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(isValid(arr,n,m, mid)){
            ans=mid;
            end=mid-1;
        }else{
            st=mid+1;
        }
    }
    cout<<ans;
}