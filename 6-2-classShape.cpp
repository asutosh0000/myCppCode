#include <iostream>
using namespace std;
class shape
{
protected:
	int noOfPoint;

public:
	void input()
	{
		cout<<"Enter the no ";
		cin>>noOfPoint;
	}
};
class typeOfShape : public shape
{
	int num = 0;

public:
	typeOfShape()
	{
		input();
		num = noOfPoint;
	}
	void display()
	{
		switch (num)
		{
		case 1:
			cout << "This is a point" << endl;
			break;
		case 2:
			cout << "This is a line" << endl;
			break;
		case 3:
			cout << "This is a triangle" << endl;
			break;
		case 4:
			cout << "This is a rectangle" << endl;
			break;

		default:
			cout << "This is a polygon" << endl;
			break;
		}
	}
};
int main(int argc, char const *argv[])
{
	typeOfShape A;
	A.display();
	return 0;
}
