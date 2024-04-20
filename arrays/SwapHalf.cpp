#include<iostream>
using namespace std;
int main() {
    int n,temp,i,mid,j;
    cout<<"\nEnter the size of array:";
    cin>>n;
    int Ar[n];
    cout<<"\nEnter array elements:";
    for(i=0;i<n;i++)
    {
    	cin>>Ar[i];
	}
	mid=n/2;
	if(n%2==0)
	{
		j=mid;
	}
	else
	{
		j=mid+1;
	}
	for(i=0;i<mid;i++,j++)
	{
		temp=Ar[i];
		Ar[i]=Ar[j];
		Ar[j]=temp;
	}
	cout<<"\nChanged Array is:";
	for(i=0;i<n;i++)
	{
		cout<<Ar[i]<<" ";
	}
	return 0;
}

