#include<iostream>
using namespace std;
void calavrg(int B[], int n);
int main()
{   
    int n;
    cout<<"Enter the number of processes ";
    cin>>n;
    int A[25],i=0;
	for (  i=0; i<n; i++)
	{
	cout<<"Enter process burst time for each process "<<i+1;
	cin>>A[i];
    }
    cout<<"Display of processes and their process time in unsorted order \n";
	for (i=0; i<n; i++)
	{
		cout<<i+1<<" "<<A[i]<<"\n";
	}
    
    int j,temp=0,iMin=0;
    //sorting in ascending order
    for (i=0; i<n-1; i++)
	{   iMin=i;
		for (j=i+1;j<n; j++)
		{
			if (A[j]<A[iMin])
			iMin=j;
		}
		temp=A[i];
		A[i]=A[iMin];
		A[iMin]=temp;
	}
	
	cout<<"Display of processes and their process time in ascending order \n";
	for (i=0; i<n; i++)
	{
		cout<<i+1<<" "<<A[i]<<"\n";
	}
	
	int B[25];
	cout<<"Waiting time of each prcoess \n";
	B[0]=0;
	for (i=1; i<n; i++)
	{
		B[i]=A[i-1]+B[i-1];
	}
	for (i=0; i<n; i++)
	{
		cout<<i+1<<" "<<B[i]<<"\n";
	}
	
	calavrg(B,n);
}
   void calavrg(int B[], int n)
	{
	int sum=0, avg=0,i=0;
	
	for (i=0; i<n; i++)
	{
		sum=sum+ B[i];
	}
	avg=sum/n;
	cout<<"Average turn around time: "<<avg;
    }