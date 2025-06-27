#include<iostream>
using namespace std;
int main(){


    // find lowercase and uppercase character

    char x='w';
    cout<<"enter any character : ";
    //cin>>x;
    if(x>65 && x<91){
        cout<<x<<" is uppeercase. "<<endl;
    
    }else{
        cout<< x << " is lowercase. "<<endl;
    }
   

    // loops :: print number form 1 to 5
    int n=5; int i=1;
    while(i<=n){
        cout<< i<< endl;
        i++;
    }


    // sum of all odd numbers 
    int sum=0;i=1;
    while(i<=n){
        if(i%2!=0){
            sum+=i;
        }
        i++;
    }
    cout<<" sum of odd numbers are : "<<sum<<endl;

    // pattern

    for(int i=0; i<6;i++){
        for(int j=0; j<10;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;

}