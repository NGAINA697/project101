//Assignment on classes and objects
#include <iostream>
using namespace std;
class cylinder{

public:
		double radius ,height ,PI;
		cylinder(){
			PI =3.14159265358979323846;
		}
		int volume (){
			return PI * radius * radius * height;
		}
		int surface_area (){
			return (2 * PI * radius * radius)+(2 * PI * radius * height);  
		}
};
int main()
{	cylinder r1;
	
		cout<<"enter radius" <<endl;
	cin>>r1.radius;
	
	cout<<"enter height" <<endl;
	cin>>r1.height;
	
	cout<<"The SurfaceArea is: "<<r1.surface_area()<<endl;
	cout<<"The volume is: "<<r1.volume()<<endl;
	
	

	
	return 0;
}