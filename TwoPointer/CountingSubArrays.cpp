/*
Given an array A of N non-negative numbers and you are also given non-negative number B.
You need to find the number of subarrays in A having sum less than B. We may assume that there is no overflow.
-->Input 1:
 A = [2, 5, 6]
 B = 10
Output 1: 4
Explanation 1:  The subarrays with sum less than B are {2}, {5}, {6} and {2, 5}

-->Input 2:
 A = [1, 11, 2, 3, 15]
 B = 10
 Output 2: 4
 Explanation 2:  The subarrays with sum less than B are {1}, {2}, {3} and {2, 3}

#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> &A, int B) {
    int n = A.size();
    int ans = 0, sum = 0;
    int start = 0, end = 0;
    while(end < n)
    {
        if(sum + A[end] < B)
        {   //2 5 6--->10
            sum += A[end];
            ans += (end - start+1);
            end++;
            
        }
        else
        {
            sum -= A[start];
            start++;
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
   int res = solve(A,B);
   cout<<"The number of sub-arrays with sum less than "<<B<<" are "<<res<<endl;
   return 0;
  }
    
