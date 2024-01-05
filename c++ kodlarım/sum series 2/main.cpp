#include <iostream>
#include<cmath>
using namespace std;
int main(int argc, char** argv) {
	double sum=0;
	int n,k=1,a,f=1;
	cout<<"enter last value:"<<endl;
	cin>>n;
	for(k=1;k<=n;k++)
	{
		a=2*k;
		while(a>0){
			f*=a;
			a--;
			if(a==1){
				sum+=pow(5,k)/double(f);
				f=1;
			}
		}
	}
	cout<<"the sum:"<<sum;
	return 0;
}
