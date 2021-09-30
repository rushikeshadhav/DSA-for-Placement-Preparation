/*
Given a string A consisting of lowercase characters.
You have to find the number of substrings in A which starts with vowel and end with consonants or vice-versa.
Return the count of substring modulo 109 + 7.

Input 1:  A = "aba"
Output 1: 2
Explanation 1:  Substrings of S are : [a, ab, aba, b, ba, a]Out of these only 'ab' and 'ba' satisfy the condition for special Substring. So the answer is 2.

Input 2: "a"
Output 2 : 0
Explanation 2: No possible substring that start with vowel and end with consonant or vice-versa.
*/
#include<bits/stdc++.h>
using namespace std;

int mod = 1e9+7;

int solve(string A) {
    long long int consonants = 0, vowels = 0;
    for(long long int i = 0; i<A.length(); i++){
        if(A[i] == 'a' || A[i] == 'e' || A[i] == 'i' || A[i] == 'o' || A[i] == 'u'){
            vowels = (vowels+1)%mod;
        }
        else{
            consonants = (consonants+1)%mod;
        }
    }
    long long int ans = (consonants*vowels)%mod;
    return (int)ans;
}

int main(){
  string A;
  cin>>A;
  int res = solve(A);
  cout<<"The numbr of strings that can be formed are "<<res<<endl;
  return 0;
}
