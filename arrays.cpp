#include<iostream>
using namespace std;

// find the largest number from the array


int largest(int sz, int array[]){
    int val=array[0];
    for(int i=0;i<sz;i++){
        if(array[i]>=val){
            val=array[i];
        }
    }
    return val;
}


// finfd the smallest number in array

int smallest(int sz, int array[]){
    int val=array[0];
    for(int i=0;i<sz;i++){
        if(array[i]<=val){
            val=array[i];
        }
    }
    return val;
}


 // linear search algorithm


 int search(int x, int sz, int array[]){
    for(int i=0;i<sz;i++){
        if(array[i]==x){
            return i; // FOUND
        }

    } 
    return -1;  //NOT FOUND
}



// REVERSE AN ARRAY WITHOUT CREATING ANY NEW ARRAY

int reverse(int sz, int array[]){
    int temp;
    for(int i=0;i<sz/2;i++){
        temp=array[i];
        array[i]=array[sz-1-i];
        array[sz-1-i]=temp;

    }
    
}


int main(){
    int sz, x;
    cin>>sz;
    int array[sz];
    for(int i=0;i<sz;i++){
        cin>>array[i];
    }
    cout<<"enter the number to search: "<<endl;
    cin>>x;
    cout<<"largest number of array : "<<largest(sz,array)<<endl;
    cout<<"smallest number of array : "<<smallest(sz, array)<<endl;
    cout<<"linear search algorithm : "<< search(x,sz,array)<<endl;
    reverse(sz, array);

    for(int i=0;i<sz;i++){
        cout<<array[i]<<" "; //reversed array
    }

}