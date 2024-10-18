// C++ Classes and objects
#include <iostream>
using namespace std;


class rectangle{
//private:
public:
	double length ,width;
	
	int area (){
		return length* width;
	}
	double perimeter(){
		return 2*(length + width);
	}
};

int main()
{//creating an object(r1,r2)
	rectangle r1,r2;
	r1.length = 10;
	r1.width =20;
	
	cout<<"The Area is: "<<r1.area()<<endl;
	cout<<"The perimeter is: "<<r1.perimeter()<<endl;
	
	
	r2.length = 30;
	r2.width =40;
	
	cout<<"The Area is: "<<r2.area()<<endl;
	cout<<"The perimeter is: "<<r2.perimeter()<<endl;
	
	return 0;
}
