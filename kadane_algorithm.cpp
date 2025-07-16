#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main(){

    int array[7]={3,-4,5,4,-1,7,-8};
     int n=7;

    // MAXIMUM SUBARRAY OF AN ARRAY

    for(int st=0; st<n;st++){
        for(int end=st; end<n; end++){
            for(int i=st; i<=end;i++){
                cout<<array[i];
            }
            cout<<" ";
        }
        cout<<endl;
    
    }



    // maximum subarray sum O(n^2)


    int max_sum=INT_MIN;


     for(int st=0; st<n;st++){
        int curr_sum=0;
        for(int end=st; end<n; end++){
            curr_sum+=array[end];
            max_sum=max(max_sum,curr_sum);
        }
    
    }
    cout<<"maximum sum is : "<<max_sum<<endl;


    // kadane's algorithm O(n)

    max_sum=INT_MIN;

    int curr_sum=0;
    for(int i=0;i<n;i++){
        curr_sum+=array[i];
        max_sum=max(max_sum, curr_sum);
        if(curr_sum<0){
            curr_sum=0;
        } 
       }
       cout<<"maximum sum kadane's algorithm is : "<<max_sum<<endl;




}