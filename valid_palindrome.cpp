#include<iostream>
using namespace std;

bool alphanumeric(char ch){
    if((ch>='0' && ch<='9')|| tolower(ch)>='a' && tolower(ch)<='z'){
        return true;
    }
    return false;
}

int main(){
    string str="ac$3d9?c&a";
    int n=str.length();

    int st=0; int end=n-1;
    while(st<end){
        if(!alphanumeric(str[st])){
            st++; continue;

        }
        if(!alphanumeric(str[end])){
            end--; continue;
        }
        if(tolower(str[st])!=tolower(str[end])){
            cout<<"not palindrome"<<endl;
            return false;

        }
        st++; end--;
    }
    cout<<"is palindrome"<<endl;
    return true;

}