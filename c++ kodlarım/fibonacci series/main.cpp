#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char** argv) {
/*	int a,b,c,sum=0,i;
	cout<<"enter how many number do you want to see:"<<endl;
	cin>>c;
	a=1;
	b=1;
	if(c>2){
		cout<<a<<endl;
		cout<<b<<endl;
		for(i=2;i<c;i++){
			sum=a+b;
			cout<<sum<<endl;
			a=b;
			b=sum;
		}
	}
	else if(i==2){
		cout<<a<<endl;
		cout<<b<<endl;
	}
	else{
		cout<<a<<endl;
	}*/
	//perfect number
/*	int b,i,sum=0;
	cout<<"enter number:"<<endl;
	cin>>b;
	for(i=1;i<=b/2;i++){
		if(b%i==0){
			sum=sum+i;
		}
	}
	if(sum==b){
		cout<<b<<" is perfect number"<<endl;
	}
	else{
		cout<<b<<" is not perfect number"<<endl;
	}*/
	//prime number find
	/*int a,i,pri=0;
	cout<<"enter number:"<<endl;
	cin>>a;
	for(i=2;i<=a/2;i++){
		if(a%i==0){
			pri=1;
		}
	}
	if(pri==0){
		cout<<a<<" is prime number"<<endl;
	}
	else{
		cout<<a<<" is not prime number"<<endl;
	}*/
	//iç içe döngüler
	/*int i,j;
	char ad[]="kalamam";
	for(i=0;i<strlen(ad);i++){
		for(j=0;j<=i;j++){
			cout<<ad[j];
		}
		cout<<endl;
	}*/
/*	int i,j,s;
	cout<<"how many row do you want to create:"<<endl;
	cin>>s;
	for(i=0;i<=s;i++){
		for(j=0;j<i;j++){
			cout<<"*";
		}
		cout<<endl;
	}*/
/*	int i,j;
	for(i=1;i<=10;i++){
		for(j=1;j<=10;j++){
			cout<<j<<"*"<<i<<"="<<i*j<<"\t";
		}cout<<endl;
	}
	*/
	return 0;
}
