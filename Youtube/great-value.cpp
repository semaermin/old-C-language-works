#include <iostream>

using namespace std;
 int main ()
 {
 	//(a>b) ? a : b;
 	
 	int a,b,c,d;
 	a=10;
 	b=7;
 	c=5;
 	
 	//ORNEK1: ? 'EGER' ANLAMI TASIR. D DOGRUYSA C'YE ESÝT. D DEGÝLSE B'YE ESÝTTÝR.
 	d=(a>b) ? c : b;
 	cout << "d'nin degeri = "<< d << endl;
 	
 	//ORNEK2: C'YE A EKLEMEK DEMEK.
 	c += a;
 	cout << "c'nin degeri = "<< c << endl;
 	
 	//ORNEK3: A'YA SAYI EKLEDIK.
 	a = a + 40;
 	cout << "a'nýn degeri = "<< a;
 	
 	
 	
 	//----------------------------------------------------------------
 	//BAÞKA BÝR ÖRNEKK
 	
 		int sayi;
	 cout << " bir  sayi giriniz: ";
	 cin >> sayi;
	 
	 if(sayi > 100)
	 {
	 	cout << "sayi 100den buyuktur.";
	 }
	else if(sayi == 100)
	{
		cout << "sayi 100e esittir.";
	}
	else
	{
		cout << " sayi 100den kucuktur.";
	  
 	
 }
