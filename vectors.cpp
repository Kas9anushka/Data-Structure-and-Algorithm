#include<iostream>
#include<vector>
using namespace std;

int main(){


    // initiallizations 

     //  vector<char>vec={'a','b','c'}; // initiallization of vector
   //   vector<int>v(4,0);  // vector of size 4 and 0 at all places
   
   vector<int>vec;

    // vector functions

   
    cout<<"size before : "<<vec.size()<<endl;    // size
     
    
    vec.push_back(10);
     vec.push_back(34);
     vec.push_back(45);
     vec.push_back(78);
     vec.push_back(12);
     
     
     for(int val:vec){   // for each value loop = in this loop at each iteration we have directly value instead index.
        cout<<val<<endl;
    }
    
    
    cout<<"size after push_back(x) : "<<vec.size()<<endl;    // size
    cout<<"vector capacity : "<<vec.capacity()<<endl; // doubles the size of array everytime when no space to push_back
    
    vec.pop_back();
    
    
    for(int val:vec){   // for each value loop = in this loop at each iteration we have directly value instead index.
        cout<<val<<endl;
    }
    
    
    cout<<"size after pop_back() : "<<vec.size()<<endl;   // size
    cout<<"front value : "<<vec.front()<<endl;
    cout<<"back value : "<<vec.back()<<endl;   
    cout<<"gives index value : "<<vec.at(1)<<endl;    





}
