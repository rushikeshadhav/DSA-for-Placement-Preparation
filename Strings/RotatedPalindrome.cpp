/*
Check if a string is a rotated palindrome or not

1) CBAABCD is a rotated palindrome as it is rotation of palindrome ABCDCBA.
2) BAABCC is a rotated palindrome as it is rotation of palindrome ABCCBA.

*/

#include <bits/stdc++.h>
using namespace std;
 
// Expand in both directions of `low` and `high` to find
// palindrome of length `k`
bool expand(string str, int low, int high, int k)
{
    
    while (low >= 0 && high < str.length() && (str[low] == str[high]))
    {
        // return true palindrome of length `k` is found
            if (high - low + 1 == k) {
                return true;
            }
 
        // Expand in both directions
        low--, high++;
    }
 
    // return false if palindrome of length `k` is not found
    return false;
}
 
// Function to check if a palindromic substring of length `k` exists or not
bool longestPalindromicSubstring(string str, int k)
{
    for (int i = 0; i < str.length() - 1; i++)
    {
        // check if odd or even length palindrome of length `k` exists,
        // which have `str[i]` as its midpoint
        if (expand(str, i, i, k) || expand(str, i, i + 1, k)) {
            return true;
        }
    }
 
    return false;
}
 
// Function to check if a given string is a rotated palindrome or not
bool isRotatedPalindrome(string str)
{
    // length of the given string
    int n = str.length();
 
    // return true if the longest palindromic substring of length `n`
    // exists in the string `str + str`
    return longestPalindromicSubstring(str + str, n);
}
 
int main()
{
   
    string str = "ABCCBA";
 
    // rotate it by 2 units
    rotate(str.begin(), str.begin() + 2, str.end());
 
    if (isRotatedPalindrome(str)) {
        cout << "The string is a rotated palindrome";
    }
    else {
        cout << "The string is not a rotated palindrome";
    }
 
    return 0;
}


