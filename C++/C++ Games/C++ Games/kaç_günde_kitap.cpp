/*Furkan, bir roman�n her g�n bir �nceki g�n okudu�u sayfadan 5 sayfa fazlas�n�
okumaktad�r. �lk g�n 10 sayfa okuyarak ba�layan Furkan' �n 1.000 sayfal�k bir roman� ka�
g�nde bitirece�ini bulan program� C dilinde kodlay�n�z.*/

#include<stdio.h>
#include<conio.h>


main(){
	
int sayfa=10, okunacak_sayfa=0, gun=0;
while(okunacak_sayfa<1000){
okunacak_sayfa += sayfa;
sayfa += 5;
gun ++;
	
}	
printf("%d gun i�inde kitap bitmi� olur",gun);
getch();
	
}

