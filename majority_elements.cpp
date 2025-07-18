#include<iostream>
#include<climits>
using namespace std;

int main(){


    // brute force approach O(N^2)

    int array[]={1,2,3,3,3,1,3,3};
    int x=sizeof(array)/4;
    int out;

    for(int i=0; i<x;i++){
        int count=1;
        for(int j=i+1; j<x;j++){
            if(array[i]==array[j]){
                count++;
            }
        }
        if(count>x/2){
            out=array[i];
    }

    }
    cout<<"brute force : "<<out<<endl;;


    // MOORES'S VOTING ALGORITHM O(N)
    // if same element next to index than freq ++ else freq-- and at the end in ans the mj will be stored.

    int freq=0;
    int ans=0;
    for(int i=0;i<x;i++){
        if(freq==0){
            ans=array[i];
        }
        if(ans=array[i]){
            freq++;
        }else{
            freq--;
        }

    }
    cout<<"moore's voting algorithm for majority elements : "<<ans;



}