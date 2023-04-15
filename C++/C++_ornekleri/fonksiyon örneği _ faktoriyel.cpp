#include <iostream>
#include <locale.h>
    using namespace std;
    
    
    void faktoriyel (int sayi)
    
    {
        int faktoriyel =1;
    	for (int i=2;i<=sayi;i++ )
    	{
    		faktoriyel *=i;
		}
		cout << " faktoriyel : " << faktoriyel << endl;
		
	}
     
        
    int main()
    {
    	setlocale (LC_ALL, "turkish");
    
    	int sayi;
    	cout << " bir sayi giriniz : ";
    	cin >>sayi;
    
    	faktoriyel(sayi);
    	
    	
    	
    	
    	
    	return 0; 
	}
