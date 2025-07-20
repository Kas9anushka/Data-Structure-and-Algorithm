#include<iostream>
#include<vector>
using namespace std;

int main(){
    //vector<int>arr={7,8,0,1,2,3,4,5,6};
    vector<int>arr={3,4,5,6,7,8,0,1,2};
    int n=arr.size();
    int target;
    cin>>target;
    int st=0;int end=n-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(arr[mid]==target){
            cout<< mid;
            return 0;
        }
        if(arr[st]<arr[mid]){// left is sorted
            if(arr[st]<=target&& arr[mid]>=target){
                end=mid-1;
            }else{
                st=mid+1;
            }
        }else{// right is sorted
            if(arr[mid]<=target&&arr[end]>=target){
                st=mid+1;
            }else{
                end=mid-1;
            }
        }
    }
    return -1;
}