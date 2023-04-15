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
cout << "kenar uzunluðunu giriniz : " << endl;
cin >> kenar;

cout << "kenarý girmiþ olduðunuz karenin alaný = " << alan (kenar);





	return 0;

}
