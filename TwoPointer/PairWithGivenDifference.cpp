/*
Given an one-dimensional unsorted array A containing N integers.
You are also given an integer B, find if there exists a pair of elements in the array whose difference is B.
Return 1 if any such pair exists else return 0.
Problem Constraints: 1 <= N <= 105 , -103 <= A[i] <= 103 , -105 <= B <= 105
-->Input Format
First argument is an integer array A of size N.
Second argument is an integer B.
-->Output Format
Return 1 if any such pair exists else return 0.

Input 1:
 A = [5, 10, 3, 2, 50, 80]
 B = 78
Output 1: 1
Input 2:
 A = [-10, 20]
 B = 30
Output 2: 1
 
 */

#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> &A, int B) {
    set<int> st;
    for(int i=0;i<A.size();i++){
        if(st.find(A[i]-B)!=st.end()){
            return 1;
        }
        st.insert(A[i]);
    }
    return 0;
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
  bool res = solve(A,B);
  if(res){
    cout<<"There exists a pair with given difference"<<endl;
  }
  else{
    cout<<"There is no pair with given difference"<<endl;
  }
  return 0;
}
