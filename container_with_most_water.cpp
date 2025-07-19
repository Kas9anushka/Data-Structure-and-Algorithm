#include<iostream>
#include<vector>
using namespace std;


// optimal approach- 2 pointer approach

int container(vector<int>&vec){
    int n=vec.size();
    int lp=0; 
    int rp=n-1;
    int maxwater=0;
    while(lp<rp){
        int h=min(vec[lp], vec[rp]);
        int w=rp-lp;
        int area=h*w;
        maxwater=max(maxwater, area);

        vec[lp]<vec[rp]?lp++:rp--;
    }
    return maxwater;
}



// not so optimal approach

int mostwater(vector<int>&vec){
    int n=vec.size();
    int height;
    int width;
    int maxarea=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            height=min(vec[i],vec[j]);
            width=j-i;
           int  area=height*width;
            maxarea=max(maxarea, area);
        }
    }
    return maxarea;

}

int main(){
    vector<int>vec={1,8,6,2,5,4,8,3,7};
    int val=container(vec);
    int result=mostwater(vec);
    cout<<"optimized approach : "<<val<<endl;
    cout<<"max water stored are : "<<result;
    
}