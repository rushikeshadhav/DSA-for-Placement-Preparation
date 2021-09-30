/*
Given a binary array A and a number B, we need to find length of the longest subsegment of ‘1’s possible by changing at most B ‘0’s.
-->Input 1:
 A = [1, 0, 0, 1, 1, 0, 1]
 B = 1
 Output 1: 4
 Explanation 1:  Here, we should only change 1 zero(0). Maximum possible length we can get is by changing the 3rd zero in the array,
 we get a[] = {1, 0, 0, 1, 1, 1, 1}
-->Input 2:
 A = [1, 0, 0, 1, 0, 1, 0, 1, 0, 1]
 B = 2
 Output 2: 5
 Explanation 2:  Here, we can change only 2 zeros. Maximum possible length we can get is by changing the 3rd and 4th (or) 4th and 5th zeros.
 */

#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> &A, int B) {
    int n=A.size();
    if(n==0) return 0;
    
    int i=0,j=0,maxOnes=0;

    while(i<n-maxOnes)
    {
        j=i;
        int count=B;
        
        while((count || A[j]==1) && j<n)
        {
            if(A[j]==0) count--;
            j++;
        }
        maxOnes=max(maxOnes,j-i);
        i++;
    }
    return maxOnes;
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
   cout<<"The maximum length of subarray with consecutive 1s after flipping "<<B<<" zeros are "<<res<<endl;
   return 0;
  }
