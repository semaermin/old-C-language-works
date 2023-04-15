#include <iostream>
using namespace std;
 int main()
 {
 	//1.sekilde tanimlama
 	// degiskenin tipi degiskenin ismi = degiskenin degeri
 	//+,-,/,*,% operatorleri var
 	
 	int a=5,b=4,sonuc;
 
 	sonuc=a+b;
 	
 	
 	cout << "sonucun degeri:"<<sonuc<< endl <<endl;
 	
 	// int ile double arasýndaki farki ondalik sayilarla gösterdik.
 	
 	 double sayi;
 	 int sayi2=10.65;
 	 sayi=12.35;
 	 cout <<"double degiskeniyle ondalik sayi="<<  sayi<< endl;
 	 cout <<"int degiskeniyle onladik sayi="<<sayi2<<endl;
 	 
 	//long degiskeni:vilgulden sonrasini almaz.
 	
 	  long x;
 	  x=140000.547;
 	  cout <<"long degiskeniyle:"<< x<<endl;;
 	  
    // double long degiskeni:vilguli yuvarlar.
    
    double long y;
    y = 150000.876;
    cout <<"double long degiskeniyle:"<<y<<endl;
    
    //string degiskeni
    
    string ad="sema",soyad="bilgisayar";
    cout<<ad<<endl<<soyad<<endl<<endl;
    
    
    string AD,SOYAD;
    cout<<"ADINI GIRIRINIZ:"<<endl;
    cin>>AD;
    cout<<"SOYADINI GIRINIZ:"<<endl;
    cin>>SOYAD;
    cout<<"SAYIN"<<endl<<AD<<endl<<SOYAD<<"\n\nPROGRAMIMIZA HOSGELDINIZ.";
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 }
