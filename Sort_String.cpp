#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;
 int main()
 {
   int n,count[26]={0};
   cin>>n;
   for(int i=0;i<n;i++)
   {
    char ch;
    cin>>ch;
   count[ch-'a']++;
   }
   for(int i=0;i<26;i++)
   {
    if(count[i]>0) {
      for(int j=0;j<count[i];j++) {
        char c=i+'a';
     cout<<c;
      }
      }
    
   }
    return 0;
 }