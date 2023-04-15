#include <iostream>
#include <locale.h>

using namespace std;
int kare(int i)
{
	
    int kare;
	kare = i*i;
	cout << "sayılarınızın kareleri " ;
	return kare;
}
int main ()
{
	setlocale (LC_ALL, "turkish");
	
	//n1-n2 arasındaki sayıların karesini bulunduran fonksiyon yazın...
	
	int a, b;
	cout << " Hangi sayılar arası kareleri almak istiyorsunuz? "<< endl;
	cin >>a >> b;
	

while(a<b){

	for( a;a<=b;a++)
	{   
		cout << kare (a) <<endl;
	}
}	
	
	return 0;
}
