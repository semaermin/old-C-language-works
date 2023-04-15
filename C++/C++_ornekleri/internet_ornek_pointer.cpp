#include <iostream>

using namespace std;

int main(){

  int sayilar[] = {55, 66, 77, 88, 99, 18};
  int *ptr = sayilar;

  for (int i = 0; i < sizeof(sayilar) / 4; i++){
    cout << "sayilar[" << i << "] = " << *(ptr + i) << endl;
  }

  return 0;
}

