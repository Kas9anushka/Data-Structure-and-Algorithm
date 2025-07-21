#include<iostream>
#include<vector>
using namespace std;

int peak(vector<int>&arr,int n){
    int st=1; int end=n-2; // our answer can never be at st and end, to avoid out of bound .
    while(st<=end){
        int mid=st+(end-st)/2;
        if(arr[mid-1]<arr[mid]&& arr[mid]>arr[mid+1]){
            return mid;
        }
        else if(arr[mid-1]<arr[mid]){// we will search on right side
            st=mid+1;

        }else{
            end=mid-1;
        }
    }
    return -1;
}

int main(){
    vector<int>arr={2,3,4,6,8,9,7,5,1};
    int n=arr.size();
    cout<<"index of peak element is : "<<peak(arr,n)<<endl;
}