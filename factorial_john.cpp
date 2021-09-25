#include<iostream>
using namespace std;
void fact(int *);
void main()
{
    int n; 
    cout<<"enter your number : ";
    cin>>n;
    fact();
    cout<<"\nFACTORIAL IS "<<n;
}

void fact(int *a)
{
   while(a>1)
   {a=a*a--;}
}