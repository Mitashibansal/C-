#include <iostream>
using namespace std;
void q0(string s, int i);
void q1(string s, int i);
void q2(string s, int i);

void q0(string s, int i)
{
    cout<<"q0-";
    if(i==s.length())
    {
        cout<<"invalid string";
        return;
    }
    if(s[i]=='0')
    {
        q0(s,i+1);
    }
    else
    {
        q1(s,i+1);
    }
}

void q1(string s, int i)
{
    cout<<"q1-";
    if(i==s.length())
    {
        cout<<"valid string";
        return;
    }
    if(s[i]=='0')
    {
        q2(s,i+1);
    }
    else
    {
        q1(s,i+1);
    }
}

void q2(string s, int i)
{
    cout<<"q1-";
    if(i==s.length())
    {
        cout<<"valid string";
        return;
    }
    if(s[i]=='0')
    {
        cout<<"invalid string";
        return;
    }
    else
    {
        cout<<"invalid string";
        return;
    }
}
int main()
{
    string s;
    cout<<"Enter string: ";
    cin>>s;
    q0(s,0);
    return 0;
}