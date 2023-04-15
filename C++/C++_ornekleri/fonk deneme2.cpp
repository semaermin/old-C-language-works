#include <iostream>
#include <locale.h>
using namespace std;
        // Verilen iki sayýnýn okekini bulan fonksiyon

int okek_bul( int sayi_1, int sayi_2 )
{
int okek = 1;
int bolen = 2;

while( sayi_1 > 1 || sayi_2 > 1 ) {

// Sayilardan her ikiside, bolen
// degiskenine bolunuyorsa

if( sayi_1 % bolen == 0 && sayi_2 % bolen == 0 ) {

okek *= bolen;
sayi_1 /= bolen;
sayi_2 /= bolen;
}

// Sayilardan ilki, bolen
// degiskenine bolunuyorsa

else if( sayi_1 % bolen == 0 ) {
okek *= bolen;
sayi_1 /= bolen;
}

// Sayilardan ikincisi, bolen
// degiskenine bolunuyorsa

else if( sayi_2 % bolen == 0 ) {
okek *= bolen;
sayi_2 /= bolen;
}
else {
bolen++;
}

}

return okek;

}
