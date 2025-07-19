#include<iostream>
using namespace std;
    int main(){
        double x;
        long int n; // pow(x^n)
        cin>>x;
        cin>>n;
        if(n<0){
            x=(1/x);
            n=-n;

        }
        double ans=1.0;
        while(n!=0){
            if(n%2==1){
                ans=ans*x;

            }
            x=x*x;
            n=n/2;

        }
        cout<<"exponential value is : "<<ans;

}