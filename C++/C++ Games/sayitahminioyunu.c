#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	
	srand(time(NULL));
	int rasgelesayi = (rand()%10)+1;
	int tahmin, kacdefa = 1;
	
	printf("Sayi Tahmini Oyunu \n\n");
	printf("%d\n", rasgelesayi);
	printf("Lutfen tahmininizi giriniz: \n");
	scanf("%d", &tahmin);
	
	while(rasgelesayi != tahmin){
		kacdefa++;
		if(tahmin > rasgelesayi)
		{
			printf("Tahmini dusurun! \n");
			scanf("%d", &tahmin);
		} 
		else if(tahmin < rasgelesayi)
		{
			printf("Tahmini artirin! \n");
			scanf("%d", &tahmin);
		}
	}
	printf("%d defa deneyerek, dogru cevabi buldunuz.", kacdefa);
	return 0;
}
