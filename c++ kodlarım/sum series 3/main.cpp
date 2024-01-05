#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	int i,k,s=0,t=0,n;
	cout<<"enter last value:"<<endl;
	cin>>n;
	for(i=1;i<=n;i++){
		t=0;
		for(k=1;k<=i;k++){
			t+=k;
			s+=k;
			cout<<k;
			if(k<i){
				cout<<" + ";
			}
		}
		cout<<" = "<<t<<endl;
	}
	cout<<"the total sum is:"<<s;
	return 0;
}
