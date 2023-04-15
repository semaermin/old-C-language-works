#include <iostream>
#include <locale.h>
using namespace std;
//En ve boy parametrelerine göre, '*' simgeleriyle içi dolu dikdörtgen çizen bir fonksiyon yazýnýz


int main ()
{ 
setlocale (LC_ALL ," turkish");
	int kenar;
	cout << " dörtgenin bir kenarý kaç '*' olsun = " << endl;
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
