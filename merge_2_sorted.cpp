#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>a={5,6,12,23,67};
    vector<int>b={2,4,6};
    int m=a.size();
    int n=b.size();
    int i=m-1;
    int j=n-1;
    int index=n+m-1;
    a.resize(m+n);
    while(i>=0 && j>=0){
        if(a[i]>=b[j]){
            a[index]=a[i];
            index--;
            i--;

        }else{
            a[index]=b[j];
            index--;
            j--;

        }

    }
    while(j>=0){
        a[index]=b[j];
        index--;
        j--;

    }
    for(int val:a){
        cout<<val<<" ";
    }

}