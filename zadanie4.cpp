
#include <iostream>
using namespace std;
int main(){
        int i, j;
        cin >> i;
        cout << "Zgadnij liczbe" << endl;   
     do {

        cin >> j;
        if (i < j) 
        {
        cout << " Liczba jest zbyt duża"<<  endl;
        }
        if (i > j)
        {
        cout << "Liczba jest zbyt mała" << endl;
        }
	if (j == 0) 
		{
		cout << "Liczba prawidłowa to: ";
		cout << i << endl; 
		return 0;
		}
        }while(i != j);
        cout << "Brawo, wygrałeś!" << endl;
        return 0;
}


