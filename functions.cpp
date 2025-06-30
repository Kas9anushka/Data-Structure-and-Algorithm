#include<iostream>
using namespace std;

//calculate n factorial
    int fact(int a){
        int x=1;
        for(int i=1;i<=a;i++){
            x=x*i;
        }
        return x;
    }   


int main(){

    cout<<"factorial of a number : "<<fact(6)<<endl;
return 0;
}