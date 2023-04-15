#include<stdio.h>

int main(){
	printf("KARENIN ALANINI HESAPLAYAN PROGRAM\n\n");
	
	int kareninkenari;
	int alan,cevre;
	
	printf("Karenin bir kenarinin olcusunu giriniz: \n");
	scanf("%d", &kareninkenari);
	
	alan = kareninkenari ** 2;
	cevre = kareninkenari * 4;
	printf("Karenin alani: %d \n", alan);
	printf("Karenin cevresi: %d \n", cevre);
	
	return 0;
}
