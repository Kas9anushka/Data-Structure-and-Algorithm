#include<iostream>
#include<vector>

using namespace std;

void next(vector<int>&arr, int n){
     int i=n-2; int pivot=-1;
    while(i>=0){
        if(arr[i]<arr[i+1]){
            pivot=i;
            break;

        }
        i--;
    }
    if(pivot==-1){
        i=0; int j=n-1;
        while(j>=i){
            swap(arr[i],arr[j]);
            j--;
            i++;
        }
    return;
    }
    for(i=n-1;i>pivot;i--){
        if(arr[i]>arr[pivot]){
            swap(arr[pivot],arr[i]);
            break;
        }
    }
    // reverse the leftout array
    i=pivot+1; int j=n-1;
    while(j>=i){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }


 }
int main(){
    vector<int>arr={7,8,3,4,5};
    int n=arr.size();
    next(arr,n);
    for(int val: arr){
        cout<<val<<" ";
    }

    // can you an stl..next_permutation as well
    
   
}