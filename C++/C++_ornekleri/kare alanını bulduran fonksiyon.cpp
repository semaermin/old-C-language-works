#include <iostream>
#include <locale.h>
using namespace std;

int alan (int a)
{
	return a*a;
}


int main ()
{ 
setlocale (LC_ALL ," turkish");


int kenar ;
cout << "kenar uzunlu�unu giriniz : " << endl;
cin >> kenar;

cout << "kenar� girmi� oldu�unuz karenin alan� = " << alan (kenar);





	return 0;

}
