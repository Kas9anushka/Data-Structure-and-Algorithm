#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void dnf_sorting(vector<int>&arr){
    int n=arr.size();
    int low=0;int mid=0; int high=n-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[mid],arr[low]);
            mid++;
            low++;
        }else if(arr[mid]==1){
        mid++;
        }else if(arr[mid]==2){
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}


int main(){
    vector<int>arr={0,0,1,2,1,2,1,0,1,2,0,1,0,1,2};

    dnf_sorting(arr);
    // brute force approach

    //sort(arr.begin(),arr.end());
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}