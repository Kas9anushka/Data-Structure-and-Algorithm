#include<iostream>
#include<vector>
using namespace std;

int main(){


    vector<int>vec={1,2,3,4,5,4,3,2,1};
    
    // by taking xor of same number we get zero hence 4^1^1= 4 because 1^1=0;

    int ans=0;

    for(int val:vec){
        ans=ans^val;

    }
    cout<<"unique number is : "<<ans<<endl;


}