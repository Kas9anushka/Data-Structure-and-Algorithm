#include<iostream>
#include<string>
using namespace std;
int main(){
    char str[10];
    cout<<"enter char array:";
    cin.getline(str,10); // getiing chracter array input


    char str1[100];
    cout<<"enter char array:";
    cin.getline(str1,100,'$');
    cout<<"output:"<<str<<endl;
    cout<<"delimiter to $ "<<str1<<endl; // not print things after a $ is inputed
    
    //length of string
    int len=0; int i=0;
    while(str[i]!='\0'){
        len++;
        i++;
    }
    cout<<len<<endl;

    //print each charactr in shar array
    for(i=0;i<len;i++){
        cout<<str[i]<<" ";
    }
    cout<<endl;
    

    cin.ignore(1000,'\n'); // after using char input , can't take sting input it create buffer
                  // to remove we add one line, or ignore;

    //concatenation

    string a,b;
    getline(cin,a);  //string input
    getline(cin,b);
    string str2=a+b;
    cout<<"concatenation: "<<str2<<endl;
    cout<<"are they equal: "<<(a==b)<<endl;
    cout<<"length of string: "<<str2.length()<<endl;

    //printing each character of string
    cout<<"each character of string"<<endl;
    for(char ch:str2){
        cout<<ch<<" ";
    }
    cout<<endl;

    // reverse a string
    char temp='a';
    int n=str2.length();
    for(int i=0;i<n/2;i++){
        temp=str2[i];
        str2[i]=str2[n-1-i];
        str2[n-1-i]=temp;

    }
    cout<<"reverse string : "<<str2<<endl;
    return 0;
}