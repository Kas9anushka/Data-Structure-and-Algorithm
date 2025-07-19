#include<iostream>
#include<vector>
using namespace std;

int maxprofit(vector<int>&array){
    int maxprofit=0;
    int bestbuy=array[0];
    int n=array.size();
    for(int i=1;i<n;i++){
        if(bestbuy<array[i]){
            maxprofit=max(maxprofit, array[i]-bestbuy);
        }
        bestbuy=min(bestbuy, array[i]);
    }
    return maxprofit;

}

int main(){
    vector<int>array={7,1,5,3,6,4};
    int profit=maxprofit(array);
    cout<<"max profit on selling is : "<<profit;
}