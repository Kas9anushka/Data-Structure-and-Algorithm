#include<iostream>
using namespace std;
int main(){
    string str="abshabdabdbabab";
    string part="ab";
    while(str.length()>0 && str.find(part)<str.length()){
        str.erase(str.find(part), part.length());

    }
    cout<<"leftout string: "<<str;
    return 0;
}


// str.find(part)== give the first index where the part has been found in the string

// str.erase(....)== will erase from the index it was found and till the length of part