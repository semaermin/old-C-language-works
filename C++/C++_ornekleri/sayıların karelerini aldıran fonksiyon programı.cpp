#include <iostream>
#include <locale.h>

using namespace std;
int kare(int i)
{
	
    int kare;
	kare = i*i;
	cout << "say�lar�n�z�n kareleri " ;
	return kare;
}
int main ()
{
	setlocale (LC_ALL, "turkish");
	
	//n1-n2 aras�ndaki say�lar�n karesini bulunduran fonksiyon yaz�n...
	
	int a, b;
	cout << " Hangi say�lar aras� kareleri almak istiyorsunuz? "<< endl;
	cin >>a >> b;
	

while(a<b){

	for( a;a<=b;a++)
	{   
		cout << kare (a) <<endl;
	}
}	
	
	return 0;
}
