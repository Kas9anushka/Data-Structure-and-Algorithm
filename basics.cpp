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
    cout<<endl;


    // sum of all odd numbers 



    int sum=0;i=1;
    while(i<=n){
        if(i%2!=0){
            sum+=i;
        }
        i++;
    }
    cout<<" sum of odd numbers are : "<<sum<<endl;
    cout<<endl;



    // pattern


    for(int i=1; i<=3;i++){
        char ch='A';
        for(int j=1; j<=3;j++){
            cout<<ch;
            ch+=1;
        }
        cout<<endl;
    }
    cout<<endl;


    // pattern 2 


    int num=1;
    int p=3;
    for (int i=0;i<p;i++){
        for(int j=0;j<p;j++){
            cout<<num<<" ";
            num++;

        }
        cout<<endl;
    }
    cout<<endl;


    // triangle pattern 


    p=5;
    for(int i=0; i<p;i++){
        for(int j=0;j<i+1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<endl;

    // pattern 4


    for(int i=0; i<p;i++){
        num=1;
        for(int j=0;j<i+1;j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    cout<<endl;


    // reverse triangle pattern
    

    for(int i=0; i<p; i++){
        num=i+1;
        for(int j=0; j<i+1; j++){
            cout<<num<<" ";
            num--;

        }
        cout<<endl;
    }
    cout<<endl;


    // flyold's triangle pattern

    num=1;
    for(int i=0;i<p;i++){
        for(int j=0;j<i+1;j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    cout<<endl;



    // inverted triangle pattern


    for(int i=0;i<p;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=0;j<p-i;j++){
            cout<<(i+1)<<" ";
        }
        cout<<endl;
    }
    cout<<endl;



// pyramid pattern
for(int i=0;i<p;i++){
    num=i;
    for(int j=0;j<p-i-1;j++){
        cout<<" ";
    }
    for(int j=0;j<i+1;j++){
        cout<<j+1;
    }
    for(int j=0;j<i;j++){
        cout<<num;
        num--;
    }
    cout<<endl;

}
cout<<endl;


// hollow diamond pattern
// p=4;
// for(int i=0;i<p-(p-1);i++){
//     for(int j=0;j<p-i-1;j++){
//         cout<<" ";
//     }
//     for(int j=0;j<)
//     cout<<endl;
// }


    return 0;

}