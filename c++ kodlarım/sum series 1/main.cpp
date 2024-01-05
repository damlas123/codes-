#include <iostream>
#include<cmath>
using namespace std;

int main(int argc, char** argv) {
	double n,k=1,sum=0;
	cout<<"enter last value:"<<endl;
	cin>>n;
	while(k<=n){
		sum=sum+(k+1)/pow(3,k);
		k++;
	}
	cout<<"sum:"<<sum<<endl;	
	return 0;
}
