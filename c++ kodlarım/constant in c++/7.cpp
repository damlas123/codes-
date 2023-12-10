#include <iostream>
using namespace std;
//#define PI 3.14


int main(int argc, char** argv) {
	const float PI=3.14; // burada deðiþkenin türünü belirlemek zorundasýn unutmaaa
	float area,r;
	cout<<"enter raidus:";
	cin>>r;
	area=r*r*PI;
	cout<<"area is :"<<area;
	return 0;
}
