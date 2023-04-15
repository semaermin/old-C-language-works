#include <iostream>
using namespace std;
int main ()
{
	//kullanici adý = user45 sifresi = 1234asd
	
	double para = 1000,secim,cevir;
	string ad,sifre;
	
	cout <<" BANKAMIZA HOSGELDINIZ\n\n************************************" << endl;
	cout <<"\nKullanici Adinizi Giriniz = " ;
	cin >> ad;
	cout <<"\nSifrenizi Giriniz = " ;
	cin >> sifre;
	
	if (ad == "user45" && sifre == "1234asd")
	{
		cout <<"\n--------GIRIS BASARILI--------\n";
		cout << "Toplam paraniz = \"" << para << "\" TL \n";
		cout <<" ISLEM SECINIZ\n";
		cout <<"\n1-TL'yi Dolar'a cevir.\n2-TL'yi Euro'a cevir.\n3-Hesabindeki paraniz.\n4-CIKIS YAP.\n"; 
		
		 while(secim <1 || secim > 4)
		 {
		 	cout << "Lutfen 1-4 arasi sayi girisi yapiniz." << endl;
		 	cout << "\nseciniz : ";
		 	cin >> secim;
		 }
	    if(secim == 1)
		 {
		 	cevir = para/7.7;
		 	cout << "TL'niz \"" << cevir << "\" dolara'a cevrildi.";
		 }
		else if(secim == 2)
		 {
		 	cevir = para/8.8;
		 	cout << "TL'niz \"" << cevir << "\" euro'a cevrildi.";
		 } 
		else if(secim == 3)
		 {
		 	cevir = para*1;
		 	cout << "Hesabinizda \"" << cevir << "\" kadar para bulunmaktadir";
		 }
		else if(secim == 4)
		   {
		   	cout << "HESABINIZDAN CIKIS YAPILIYOR...";
		   }
		  
		   
	}
	else
	{
		cout <<"--------KULLANICI VE YA SIFRE HATALI---------";
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
