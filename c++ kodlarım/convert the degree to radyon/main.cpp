#include <iostream>
using namespace std;
#define PI 3.14

int main(int argc, char** argv) {
	int d,r,g;
	cout<<"enter degree:"<<endl;
	cin>>d;
	r=d*PI/180;
	g=d*PI/200;
	cout<<"the radyan of this degree:"<<r<<endl;
	cout<<"the gradyan of this degree:"<<g<<endl;
	return 0;
}
