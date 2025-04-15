
#include <bits/stdc++.h>
using namespace std;
int maxSubarraySum3(int arr[],int n){
    int maxi =arr[0];
    for(int i = 0;i<n;i++){
        for(int j =1;j<n;j++){
            int sum =0;
            // yaha isliye rakha hai taki new subarray mei purana sum add na ho
            for(int k =i;k<=j;k++){
                  sum =sum+arr[k];
                  maxi =max(maxi,sum);
            }
        }
    }
    return maxi;
}

int maxSubarraySum2(int arr[], int n) {
    int maxi = INT_MIN; // maximum sum
    for (int i = 0; i < n; i++) {
        int sum =0 ;
        for (int j = i; j < n; j++) {            
                sum += arr[j];            
            maxi = max(maxi, sum);
        }
    }

    return maxi;
}
// kadane algorithm
int maxSubarraySum1(int arr[],int n){
    int sum =0;
  int  maxi =arr[0];
    for (int i = 0;i<n;i++){
        sum =sum+arr[i];
        maxi =max(sum,maxi);
        if (sum<0)
            sum =0;
    }
    return maxi;
}

int main()
{
    int arr[] = { -2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int maxSum2 = maxSubarraySum2(arr, n);
    int maxSum1 =maxSubarraySum1(arr,n);
    int maxSum3 =maxSubarraySum3(arr,n);
    cout << "The maximum subarray sum is: " << maxSum2 << endl;
    cout<< "the maximum subarray sum is "<<maxSum1<<endl;
cout<<"the maximum subarray sum is "<<maxSum3<<endl;
    return 0;
}

