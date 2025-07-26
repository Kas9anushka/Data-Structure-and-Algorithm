#include<iostream>
#include<algorithm>
using namespace std;

bool(isValid(int arr[],int mid,int n,int m)){
    int cows=1;int lastPos=arr[0];
    if(m<2){
        return false;
    }
   for (int i = 1; i < n; i++) {
        if (arr[i] - lastPos >= mid) {
            cows++;
            lastPos = arr[i];
        }
        if (m == cows) {
            return true;
        }
    }
    return false;
}
int main(){
    int n,m;
    // cin>>n>>m;
    n=5;m=3;
    int arr[n]={1,2,8,4,9};
    int sum=0;
    for(int i=0;i<n;i++){
        // cin>>arr[i];
        //sum+=arr[i];
    }
    sort(arr,arr+n);
    int st=1;
    int end=arr[n-1]-arr[0];
    int ans=-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(isValid(arr,mid,n,m)){
            ans=mid;
            st=mid+1;
        }else{
            end=mid-1;
        }
    }
    cout<<ans;
}