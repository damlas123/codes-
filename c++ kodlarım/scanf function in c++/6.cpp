#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	char k;
	char text[50];
	int n1;
	float n2;
	double n3;
	cout<<"enter a texture:";
	cin>>k;
	cout<<"enter a text:";
	cin>>text;
	cout<<"enter a number :";
	cin>>n1;
	cout<<"enter a number in float variable:";
	cin>>n2;
	cout<<"enter a number in double variable:";
	cin>>n3;
	cout<<k<<endl;
	cout<<text<<endl;
	cout<<n1<<endl;
	cout<<n2<<endl;
	cout<<n3<<endl;
	cout<<&n1;
	
	return 0;
}
