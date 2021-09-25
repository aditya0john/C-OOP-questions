
#include <iostream>

using namespace std;
void area(float *);
void area(float *,float *);
int area(float *);

int main()
{
    float r,l,b,r1;
    cout<<"enter side of square : ";
    cin>>r;
    cout<<"enter length :\n breath : ";
    cin>>l>>b;
    cout<<"enter radius : ";
    cin>>r1;
    area(&r);
    area(&l,&b);
    area(&r1);
    cout<<"SQUARE : "<<r<<"\n"<<"RECTANGLE : "<<l<<"\n"<<"CIRCLE : "<<r1;
}

void area(float *a)
{
    a=a*a;
}

void area(float *a,float *b)
{
    a=a*b;
}

int area(float *a)
{
    a=3.14*a*a;
}
