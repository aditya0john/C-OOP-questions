#include<iostream>
using namespace std;

class A
{
	public: int x;
	private: int y;
	protected: int z;
	
};

class B:public A
{
	public:int c;
};

int main()
{
	B obj;
	cout<<obj.x;/*here x is a publically derived variable so it can be accessed by outside world*/
	cout<<obj.y;/*here y is derived as private so it can not be accssed by outside world*/
	cout<<obj.z;/*here z is derived as protected so z can be accessed by parent and child class but not by main()*/
	cout<<obj.c;/*here c is public so it can be accessed by outside world also*/
}
