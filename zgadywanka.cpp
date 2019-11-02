#include <iostream>
using namespace std;
int main(){
	int i, j;
	cin >> i;
	do {
		cin >> j;
	}while(i != j);
	cout << "Brawo, wygrałeś!" << endl;
	return 0;
}
