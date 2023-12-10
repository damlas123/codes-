#include <iostream>
#include<math.h>

using namespace std;

int main(int argc, char** argv) {
	int a,b,h;
	cout<<"enter the lenght of a line:"<<endl;
	cin>>a;
	cout<<"enter the lenght of another line:"<<endl;
	cin>>b;
	h=sqrt(a*a+b*b);
	cout<<"the lenght of hypotenus is :"<<h<<endl;
		return 0;
}
