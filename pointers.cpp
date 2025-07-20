#include<iostream>
using namespace std;
void changex(int *ptr){
    *ptr=20;
}

// pass by reference using alias

void change(int &x){
    x=30;

}

int main(){
    int a=5;
    int* ptr=&a;
    int** parentptr=&ptr;

    cout<<*ptr<<endl;
    cout<<**parentptr<<endl;
    cout<<ptr<<endl;
    cout<<*parentptr<<endl;

    // pass by reference

    int x=10;
    cout<<"without changing the value of x : "<<x<<endl;
    changex(&x);
    cout<<"after passing by reference : "<<x<<endl;
    change(x);
    cout<<"usig alias : "<<x<<endl;
    return 0;
    
}