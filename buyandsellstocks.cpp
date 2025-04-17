#include<bits/stdc++.h>
using namespace std;
int sellstock(int arr[],int size){
    int maxprofit=0;
    int bestbuy=arr[0];
    for (int i = 1;i<size;i++){
        if(arr[i]>bestbuy){
            maxprofit=max(maxprofit,arr[i]-bestbuy);
        }
        bestbuy= min(bestbuy,arr[i]);
  
  }
  return maxprofit;
}
int main(){
    int arr[5]={7,1,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int profit = sellstock(arr,n);
    cout<<"the maximum profit is "<< profit <<endl;
}