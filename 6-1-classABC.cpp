#include <iostream>
using namespace std;
class A
{
protected:
	int x;

public:
	void getX(int num)
	{
		//  cout<<"Enter the element ";
		//  cin>>x;
		x = num;
	}
};
class B : public A
{
protected:
	int y;

public:
	void getY(int num)
	{
		y = num;
	}
};
class C : public B
{
protected:
	int z;

public:
	void getZ(int num)
	{
		z = num;
	}
	int add()
	{
		return x + y + z;
	}
	float avg()
	{
		return (float)(x + y + z) / 3;
	}
};

int main()
{
	int element;
	C c;
	cout << "Input the value of the X: ";
	cin >> element;
	c.getX(element);
	cout << "Input the value of the Y: ";
	cin >> element;
	c.getY(element);
	cout << "Input the value of the Z: ";
	cin >> element;
	c.getZ(element);
	cout << "The addition of x, y and z is: " << c.add() << endl;
	cout << "The avg of x, y and z is: " << c.avg() << endl;
	return 0;
}
