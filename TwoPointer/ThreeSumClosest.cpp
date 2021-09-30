/*
Given an array S of n integers, find three integers in S such that the sum is closest to a given number, target.
Return the sum of the three integers.

Assume that there will only be one solution

Example:
given array S = {-1 2 1 -4},
and target = 1.

The sum that is closest to the target is 2. (-1 + 2 + 1 = 2)

*/


#include<bits/stdc++.h>
using namespace std;

int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        
        int diff = INT_MAX, ans;
        
        for(int i=0; i<nums.size(); i++)
        {
            int left = i+1, right = nums.size()-1;
            
            while(left <right)
            {
                if( abs(target - (nums[i] + nums[left] + nums[right])) < diff )
                {
                    diff = abs(target - (nums[i] + nums[left] + nums[right]));
                    ans = (nums[i] + nums[left] + nums[right]);
                }
                
                if(nums[i] + nums[left] + nums[right] < target)
                    left++;
                else
                    right--;
            }
        }
        
        return ans;
    
    }
    
int main(){
  int N;
  cin>>N;
  vector<int> A;
  for(int i=0;i<N;i++){
    int x;
    cin>>x;
    A.push_back(x);
   }
   int B;
   cin>>B;
   int res = threeSumClosest(A,B);
   cout<<"The possible closest sum of three numbers to "<<B<<" is "<<res<<endl;
   return 0;
  }
