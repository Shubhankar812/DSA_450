#include <bits/stdc++.h>
using namespace std;

string reverseWord(string str){
    
  //Your code here
  
  int left = 0, right = str.length()-1;
  
  while(left <= right) 
  {
      char ch = str[left];
      str[left]  = str[right];
      str[right] = ch;
      
      left++;
      right--;
  }
  return str;
}

int main()
{
    string s = "Geeks";
    string ans = reverseWord(s);

    cout<<ans<<endl;
}