#include <iostream>
#include <locale.h>
using namespace std;
    
int main(){
int sayi, sayici1, sayici2, number;
cout <<"sayiyi giriniz:\n";
cin>>sayi;
number = sayi;
if(sayi % 2 == 0){
cout<<"tek sayi giriniz";
}
else{
for(sayici1=1 ; sayici1 <= number ; sayici1++){
    for(sayici2=1 ; sayici2 <= number ; sayici2++){
        if(sayici2 == sayici1)
cout<<"x";
else if(sayici2 == sayi)
cout<<"x";
else
cout<<" ";
}
sayi--;
cout<<"\n";
}
}
return 0;
}
