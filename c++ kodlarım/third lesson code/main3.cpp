#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	setlocale(LC_ALL,"Turkish");// türkçe dil desteði verir 
    string text="biliþim dünyasý"; // c++ dilindeki char veri tipi dýþýnda string veri tipi cümleleri ve bir karakterden fazla olan karekterleri tutar.
    cout << text<<endl;
    char k1='A';
    cout<<int(k1)<<endl;
    cout<<k1<<endl;
    char k2='ABC'; //string veri tipi kullsanmadýðýldan dolayý sadece son karakteri yazar 
    cout<<k2<<endl;
	return 0;
}
