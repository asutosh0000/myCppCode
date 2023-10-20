#include <iostream>
using namespace std;
class circle{
	private:
	int xCoordinate, yCoordinate, rad;
	public:
		circle(int x, int y, int r){
			xCoordinate = x;
			yCoordinate =y;
			rad = r;
		}
		void display(){
			cout<<"The x-coordinate of the centre is "<<xCoordinate<<endl;
			cout<<"The y-coordinate of the centre is "<<yCoordinate<<endl;
			cout<<"The radius of the circle is "<<rad<<endl;
		}
		friend void compare(circle c1, circle c2);
};

void compare(circle c1, circle c2){
	if(c1.xCoordinate == c2.xCoordinate && c1.yCoordinate == c2.yCoordinate && c1.rad == c2.rad){
		cout<<"The two circles are alike"<<endl;
	}
	else{
		cout<<"The two circles are differe"<<endl;
	}
}
int main(){
	circle c1(0,0,5), c2(0,0,5);
	c1.display();
	c2.display();
	compare(c1,c2);
	return 0;
}
