#include <iostream>
using namespace std;

int main(int argc, char** argv) {
/*	float s,s2;
	char op;
	cout<<"enter which operation you want to use:"<<endl;
	cin>>op;
	cout<<"enter first  number:"<<endl;
	cin>>s;
	cout<<"enter second number:"<<endl;
	cin>>s2;
	switch(op){
		case '+':cout<<s<<"+"<<s2<<"="<<s+s2<<endl;break;
		case '-':cout<<s<<"-"<<s2<<"="<<s-s2<<endl;break;
		case '*':cout<<s<<"*"<<s2<<"="<<s*s2<<endl;break;
		case '/':cout<<s<<"/"<<s2<<"="<<s/s2<<endl;break;
	}*/
	int d;
	cout<<"enter your grade:"<<endl;
	cin>>d;
	switch(d){
		case 85 ... 100 :{
		cout<<"A";break;}
		case 70 ... 84: {cout<<"B";
			break;
		}
		case 60 ... 69:{cout<<"C";
			break;
		}
		case 50 ... 59:{cout<<"D";
			break;
		}
		case 0 ... 49:{
			cout<<"F";
			break;
		}
		deafult:cout<<"there is no grade like that";break;
			}
	return 0;
}
