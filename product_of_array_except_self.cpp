#include<iostream>
#include<vector>
using namespace std;

// brute force 


// vector<int> product(vector<int>&vec){
//     int n=vec.size();
//     vector<int>ans(n,1);
//     for(int i=0; i<n;i++){
//         int mul=1;
//         for(int j=0;j<n;j++){
//             if(i!=j){
//                  mul*=vec[j];
//             }
//             }
//             ans[i]=mul;
//     }
//     return ans;

// }



// optimal approach for time complexity and space complexity

vector<int> product(vector<int>&vec){
    int n=vec.size();
    vector<int>ans(n,1);
    for(int i=1;i<n;i++){
        ans[i]=vec[i-1]*ans[i-1];
    }
    int sufix=1;
    for(int i=n-2;i>=0;i--){
        sufix=sufix*vec[i+1];
        ans[i]=ans[i]*sufix;
    }
    return ans;
}


int main(){
    vector<int>vec={1,2,3,4};

    vector<int>ans=product(vec);

    for(auto val:ans){
        cout<<val<<" ";
    }
    
}