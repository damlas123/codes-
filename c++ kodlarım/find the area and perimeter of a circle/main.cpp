#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	const float PI=3.14;
	int r;
	cout<<"enter the radius:"<<endl;
	cin>>r;
	float a,p;
	p=2*r*PI;
	a=PI*r*r;
	cout<<"the area of this circle:"<<a<<endl;
	cout<<"the perimeter of this circle:"<<p<<endl;
	return 0;
}
