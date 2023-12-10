#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int v,p;
	cout<<"enter the price of product:"<<endl;
	cin>>p;
	v=p*18/100;
	p=p+v;
	cout<<"the total price of this product is:"<<p<<endl;
	return 0;
}
