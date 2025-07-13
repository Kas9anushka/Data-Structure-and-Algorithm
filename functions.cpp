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


// calculate sum of digit 
int sum(int a){
     int add=0;
    while(a!=0){
    int x=a%10;
    add+=x;
    a=a/10;

    }
    return add;
    

}


// calculate bionomial coeffient for nCr given n and r

int bio(int n, int r){
    int x=fact(n);
    int y=fact(r);
    int z=fact(n-r);
    int value=x/(y*z);

    return value;
}

// check the number is prime or not

void prime(int x){
    int fact=0;
    for(int i=2;i<=x/2;i++){
        if(x%i==0){
            fact++;
        }

    }
    if(fact==0){
        cout<<"number is prime"<<endl;
    }else{
        cout<<"number is not prime"<<endl;
    }
}



int main(){

    cout<<"factorial of a number : "<<fact(6)<<endl;
    cout<<"sum of digit : "<< sum(789)<<endl;
    cout<<"bionomial coeffient of a number : "<<bio(3,2)<<endl;
    prime(8); // don't cout the void function.
return 0;
}