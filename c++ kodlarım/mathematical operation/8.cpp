#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char** argv) {
	int a,b;
	cout<<"enter a and b :"<<endl;
	cin>>a>>b;
	int s1,s2,s3,s4,s5,s6,p,s;
	s1=a+b;
	s2=a-b;
	s3=a/b;
	s4=a%b;
	s5=a*b;
	s6=a+b*3;
	p=pow(a,b);
	s=sqrt(a);
	cout<<"sum of a and b:"<<s1<<endl;
	cout<<"substraction of a and b:"<<s2<<endl;
	cout<<"division of a and b:"<<s3<<endl;
	cout<<"reminder of a and b:"<<s4<<endl;
	cout<<"multiplacation of a and b:"<<s5<<endl;
	cout<<"result of a and b multpily by 3:"<<s6<<endl;
	cout<<"pow of a and b:"<<p<<endl;
	cout<<"square of a:"<<s<<endl;
	
	return 0;
}
