/*Klavyeden girilen bir sayıdan sonraki ilk 5 asal sayıyı bulan ve ekranda gösteren*/
#include <iostream>
using namespace std;
int main(){
int sayi =0 , durum=1 ;
cout << "lütfen bir sayi giriniz : " << endl ;
cin >> sayi;

  for (int i = 2; i < sayi; i++){

    if (sayi % i == 0){
      cout << "Asal sayi degildir.";
      durum = 0;
      break;
    }

  }

  if (durum){
    cout << "Asal sayidir.";
for (int j = sayi; sayi< j;j--){
sayi;

}


  }

  return 0;
}

