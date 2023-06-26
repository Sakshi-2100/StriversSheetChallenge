#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.
   vector<vector<int>>ans;
   unordered_map<int,int>mp;
   for(auto ele : arr){
      int count = mp[s-ele];
      vector<int>temp(2);
      temp[0]=min(ele,s-ele);
      temp[1]=max(ele,s-ele);
      while(count--){
         ans.push_back(temp);
      }
      mp[ele]++;
   }
   sort(ans.begin(),ans.end());
   return ans;
}