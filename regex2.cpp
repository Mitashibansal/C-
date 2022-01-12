#include <bits/stdc++.h>
using namespace std;

void q2(string s, int i)
{
    if(i==s.length()){
    cout<<"Valid String";
    return;
    }
    
    if(s[i]=='c')
    q2(s,i+1);
    else
    cout<<"Invalid String";
    return;
}

void q1(string s, int i)
{
    if(i==s.length())
    {
        cout<<"Invalid String\n";
        return;
    }
    
    if(s[i]=='a' || s[i]=='b')
    {
        q1(s,i+1);
    }
    
    if(s[i]=='c' || s[i]=='d')
    {
        q2(s,i+1);
    }
}

void q0(string s, int i)
{
    if(i==s.length() || s[i]=='b' || s[i]=='d')
    {
        cout<<"Invalid String";
        return;
    }
    
    if(s[i]=='c')
    {
        q2(s,i+1);
    }
    
    if(s[i]=='a')
    {
        q1(s,i+1);
    }
}

int main()
{
    string s;
    cout<<"Enter the string: ";
    cin>>s;
    
    q0(s,0);
}