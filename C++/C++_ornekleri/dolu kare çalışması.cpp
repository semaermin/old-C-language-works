#include <iostream>
#include <locale.h>
using namespace std;
//En ve boy parametrelerine g�re, '*' simgeleriyle i�i dolu dikd�rtgen �izen bir fonksiyon yaz�n�z


int main ()
{ 
setlocale (LC_ALL ," turkish");
	int kenar;
	cout << " d�rtgenin bir kenar� ka� '*' olsun = " << endl;
	cin >> kenar;

	int satir ,sutun ;

	for (sutun =1; sutun <= kenar ; sutun++)
	{
		for (satir = 1;satir<= kenar ; satir++)
	 {
	 	cout << "*";
		}
		cout << "\n";
		
}
	return 0;

}
