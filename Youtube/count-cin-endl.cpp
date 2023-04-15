#include <iostream>
using namespace std;


//using std::cout
//using std::cin;
//using std::endl;   gibi parametreleri kullanmama gerek yok cünkü namespace hepini kapýyor, herhangi bir parametreyi kullansan da kullanmasan da onemli olmuyor..

int main(int argc, char** argv) {
	//ORNEK1
	//\n kullanmak alt satira gecer:
	//\t bir tane tab boslugu birakir.
	cout <<"metinsel ifadeler yazmada kullanilir.\n\nalt satira gecen ifade\t\t\t buda bosluk birakilmis ifadedir." <<"\ncout hala devam ediyor.";
	
	
	//ORNEK2
	// << ile gonderiyoruz nereye >>cin e. buyuktur kucuktur olayi kisaca boyledir.
	int sayi1=10,sayi2=15,sayi3=20,sayi4;
	cout <<"\n\n\nburaya bir sayi giriniz:";
	cin >> sayi4;
	cout <<"\nsayi1:" << sayi1 <<"\nsayi2:" << sayi2 <<"\nsayi3:" << sayi3 << "\nsayi4:" << sayi4 ;
	
	
	//ORNEK3
	//Alttaki 3 satýrda ayný seyi ifade eder.
	cout <<"\nbu bir metindir." << endl << "bu da satir atlamis bir metindir.";
	cout <<"\nbu bir metindir." << "\n" << "bu da satir atlamis bir metindir.";
	cout <<"\nbu bir metindir." << '\n' << "bu da satir atlamis bir metindir.";
	//ORNEK4
	// TIRNAK ÝSARETÝNÝ NASIL KULLANIYORUM.----- \"-----
	cout <<"metin yaziyoruz.\" ";
	return 0;
}
