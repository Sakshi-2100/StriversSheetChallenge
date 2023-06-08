#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
    */
    long long temp_sum=0, max_sum=0;
    for(int i=0;i<n;i++){
        temp_sum+=arr[i];
        max_sum = max(max_sum,temp_sum);
        if(temp_sum<0)
            temp_sum=0;
    }
    return max_sum;
}