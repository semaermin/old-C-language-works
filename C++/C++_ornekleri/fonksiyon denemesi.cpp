#include <iostream>
#include <locale.h>
using namespace std;
     
    int gonder(int sayi1 ,int sayi2)
   {
   	int i;
    int max = (sayi1 > sayi2) ? sayi2 : sayi1;
    if (sayi1 % i == 0 && sayi2 % i == 0)
    return i;
   	
   }

int main()
{
	setlocale (LC_ALL, "turkish");
	
	int a=20,b=10;
	
	cout <<"sayilar = " << gonder(a,b);
	
	
	
	
	
	
	
	
	
	return 0;
}
