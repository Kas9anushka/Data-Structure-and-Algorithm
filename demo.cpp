#include<iostream>
using namespace std;
int main(){

    // sum of n numbers


    int n=5;
    int sum=0;
    for(int i=0;i<=n;i++){
        sum+=i;

    }
    cout<<sum<<endl;


    // prime number


    int x=9;
    int count=0;
    for(int i=2;i<=x;i++){
        if(x%i==0){
            count++;
        }
    }
    if(count==1){
        cout<<"its a prime number"<<endl;
    }else{
        cout<<"its a composit number"<<endl;
    }
    

    // simple interest


    float p,r,t;
    p=1000; r=7.5, t=2.5;
    float si=p*r*t/100;
    cout<<si<<endl;


    //calculte max of 2 numbers


    int a=10, b=20;
    if(a>b){
        cout<<a<<" is greater number"<<endl;
    }else{
        cout<<b<<" is greater number"<<endl;
    }

    
    // factorial of n

    int fact=1;
    for(int i=1; i<=n;i++){
        fact*=i;
    }
    cout<<fact<<" is factorial of "<<n<<endl;
    return 0;


}