#include <iostream>

using namespace std;

int aFonksiyonu(int deger){
  deger = 1229;
}

int bFonksiyonu(int *deger){
  *deger = 1229;
}

int main(){

  int sayi = 20;

  aFonksiyonu(sayi);
  cout << sayi << endl;

  bFonksiyonu(&sayi);
  cout << sayi << endl;

  return 0;
}

