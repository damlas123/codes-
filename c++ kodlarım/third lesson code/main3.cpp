#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	setlocale(LC_ALL,"Turkish");// t�rk�e dil deste�i verir 
    string text="bili�im d�nyas�"; // c++ dilindeki char veri tipi d���nda string veri tipi c�mleleri ve bir karakterden fazla olan karekterleri tutar.
    cout << text<<endl;
    char k1='A';
    cout<<int(k1)<<endl;
    cout<<k1<<endl;
    char k2='ABC'; //string veri tipi kullsanmad���ldan dolay� sadece son karakteri yazar 
    cout<<k2<<endl;
	return 0;
}
