#include<bits/stdc++.h>
using namespace std;
int main()
{
    int year;
    cout<<"entet the year ";
    cin>>year;
    if (year % 4==0)
    {
        if (year%100==0 and year%400!=0)
        cout<<"Not a leap year";
        else
        cout<<"It is  a leap year";
    }
}
