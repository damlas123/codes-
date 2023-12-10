#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	const float PI=3.14;
	int r,a,v;
	cout<<"enter the radius:"<<endl;
	cin>>r;
	a=(4*r*r*PI);
	v=(4*r*r*r*PI);
	cout<<"the area of sphere:"<<a<<endl;
	cout<<"the volume of sphere:"<<v<<endl;
	return 0;
}
