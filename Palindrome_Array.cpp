#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n;
 cin>>n;
 int arr[n];
 for(int i=0;i<n;i++) cin>>arr[i];
 int i=0,j=n-1,test=1;
 while(i<j)
 {
    if(arr[i]!=arr[j])
    {
      test=0;
       break;
    }
    i++;
    j--;
 }  
 if(test==0) cout<<"NO"<<endl;
 else cout<<"YES"<<endl;
 return 0;
}