/*
Given a string, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.

Example:

"A man, a plan, a canal: Panama" is a palindrome.

"race a car" is not a palindrome.

Return 0 / 1 ( 0 for false, 1 for true ) for this problem
*/

#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string A) {
    vector<char> ans;
    for(int i=0;i<A.length();i++){
        if((A[i]>=('A') && A[i]<='Z')||(A[i]>='a'&&A[i]<='z')||(A[i]>='0'&&A[i]<='9')){
            ans.push_back(tolower(A[i]));
        }
    }
    int i=0 , j=ans.size()-1;
    while(i<=j){
        if(ans[i]!=ans[j]){
            return false;
            break;
        }
        i++;
        j--;
    }
    return true;
}

int main(){
  string A;
  getline(cin,A);
  bool res = isPalindrome(A);
  if(res){
    cout<<"The given string "<<A<<" is palindrome"<<endl;
  }
  else{
    cout<<"The given string "<<A<<" is not a palindrome"<<endl;
  }
  return 0;
}
  
