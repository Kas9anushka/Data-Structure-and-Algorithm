#include<iostream>
#include<climits>
#include<vector>
using namespace std;

int main(){


    // brute force  O(n^2)



    vector<int>vec;
    int n=5;
    int array[5]={2,3,7,8,11}; // will be given sorted to this problem, otherwise sort it first for optimized

    int target=9;

    for(int i=0; i<n;i++){
        for(int j=i+1; j<n;j++){
            if(array[i]+array[j]==target){

            // return the index of numbers

               vec.push_back(i);
               vec.push_back(j);

            }
        }
    }
    for(int val:vec){  
        cout<<val<<" ";
    }


    // optimized approach O(n)

    cout<<"\n\noptimized approach \n"<<endl;

    int i=0; 
    int j=n-1;
    int pair_sum=0;
    while(i<j){
        pair_sum=array[i]+array[j];

        if(pair_sum>target){
            j--;

        }else if(pair_sum<target){
            i++;
        }else if(pair_sum==target){
            cout<<i<<" "<<j<<endl;
            break;
         }

            
        }

}