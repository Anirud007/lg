#include<iostream>
using namespace std;
int main()
{
    int i,j,temp;
    // cout<<"\nEnter the size of array:";
    // cin>>n;
    int Ar[4] = {1,2,10,3};
    // cout<<"\nEnter the array elements:";
    // for(i=0;i<n;i++)
    // {
    //     cin>>Ar[i];
    // }
    for(i=0;i<4-1;i++)
    {
        for(j=0;j<4-1-i;j++)
        {
            if(Ar[j]>Ar[j+1])
            {
                temp=Ar[j];
                Ar[j]=Ar[j+1];
                Ar[j+1]=temp;
            }
        }
    }
    cout<<"\nThe sorted Array:";
    for(i=0;i<4;i++)
    {
        cout<<Ar[i]<<" ";
    }
    return 0;
}