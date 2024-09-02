#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    char ch,q;
    cin>>a>>ch>>b>>q>>c;
    if(ch=='-') 
    {
        if(a-b==c) cout<<"Yes"<<endl;
        else cout<<a-b<<endl;
    }
    else if(ch=='+')
    {
        if(a+b==c) cout<<"Yes"<<endl;
        else cout<<a+b<<endl;
    }
        
    else{
        if(a*b==c) cout<<"Yes"<<endl;
        else cout<<a*b<<endl;
    }
}