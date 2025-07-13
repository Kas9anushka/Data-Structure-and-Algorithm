#include<iostream>
using namespace std;


// convert decimal to binary


int binary(int x){
    int value=0;
    int pow=1; // 10^0=1
    while(x!=0){
        int remainder=x%2;
        x=x/2;
        value+=pow*remainder;
        pow=pow*10;

    }
    return value;
}


// convert decimal to binary
int decimal(int x){
    int value=0;
     int pow=1; // 2^0=1
    while(x>0){
       
        int rem=x%10;
        value+=rem*pow;
        x=x/10;
        pow=pow*2;

    }
    return value;
}



// finding 2's complement of the number




int complement(signed int x){
    if(x<0){
        cout<<"number is negative"<<endl;
    }else{
        cout<<"number is positive"<<endl;
    }
    int value=0;
    int pow=1;
    //1's complement;
    while(x>0){
        int rem=x%10;
        if(rem==0){
            rem=1;
        }else{
            rem=0;

        }
        value+=rem*pow;
        x=x/10;
        pow*=10;

    }
    //2's
    value=value+1;
    return value;

}




int main(){
    cout<<"binary converted value is : "<<binary(5)<<endl;
    cout<<"decimal converted value is : "<<decimal(101)<<endl;
    cout<<"calculated 2's complement is : "<<complement(1011)<<endl;

}