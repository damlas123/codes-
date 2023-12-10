#include <iostream>
#include <locale>
#include <cstdlib>
using namespace std;
int main(int argc, char** argv) {
/*	int rn,t,ts=0;
	srand(time(NULL));
	rn=rand()%100+1;
	cout<<rn;
	while(1){
		cout<<"enter your precise:"<<endl;
		cin>>t;
		ts=ts+1;
		if(t>rn){
			cout<<"enter smaller number:"<<endl;
		}
		else if (t<rn){
			cout<<"enter higher number"<<endl;
		}
		else{
			cout<<"congrulatians you find number "<<ts<<". trying"<<endl;
			break;
		}
	}*/
/*	int i=2,n;
	cout<<"enter number:";
	cin>>n;
	while(n>1){
		if(n%i==0){
			cout<<i<<endl;
			while(n%i==0){
				n=n/i;
			}
		}
		i++;
	}
	*/ int i,ps=0,pc,pco=2,n;
	cout<<"enter number:"<<endl;
	cin>>n;
	while(ps<=n){
		pc=0;
		for(i=2;i<=pco/2;i++){
			if(pco%i==0){
				pc=1;
				break;
			}
		if(pc==0){
			ps++;
		}
		}
		pco++;
	}
	
	return 0;
}
