#include<iostream>
#include<vector>
using namespace std;
int binarysearch (vector<int>arr, int target){
    int n=arr.size();
    int st=0; int end=n-1;
    while(end>=st){
       //int  mid=(st+end)/2; 
       // contrant of st and end might be int max so, to overcome the int overflow we use differnet formula

       //optimized way

       int mid=st+(end-st)/2;
       
        if(target>arr[mid]){
            st=mid+1;
        }else if(target<arr[mid]){
            end=mid-1;
        }else if(target==arr[mid]){
            return mid;

        }
    }
    return -1;
}
int main(){
   // vector<int>arr={-1,0,2,4,6,8,12}; // odd
   vector<int>arr={-1,0,2,6,8,12}; // even
    int target;
    cin>>target;
    int index=binarysearch(arr, target);
    cout<<" index of an targeted number is : "<<index<<endl;


}