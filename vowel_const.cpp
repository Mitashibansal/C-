#include<bits/stdc++.h>
using namespace std;
int main()
{
    char c,a,b;
    cout<<"enter the character";
    cin>>c;
    a = (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
    b = (c=='A' || c=='E' || c=='I' || c=='O' || c=='U');
    if(a||b)
    cout<<"vowel";
    else if (isalpha(c)) 
    cout<<"consonant";
    else
    cout<<"not an alphabet";
    return 0;
}