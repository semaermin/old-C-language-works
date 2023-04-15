/*Furkan, bir romanýn her gün bir önceki gün okuduðu sayfadan 5 sayfa fazlasýný
okumaktadýr. Ýlk gün 10 sayfa okuyarak baþlayan Furkan' ýn 1.000 sayfalýk bir romaný kaç
günde bitireceðini bulan programý C dilinde kodlayýnýz.*/

#include<stdio.h>
#include<conio.h>


main(){
	
int sayfa=10, okunacak_sayfa=0, gun=0;
while(okunacak_sayfa<1000){
okunacak_sayfa += sayfa;
sayfa += 5;
gun ++;
	
}	
printf("%d gun içinde kitap bitmiþ olur",gun);
getch();
	
}

