#include <iostream>

using namespace std;

int main()
{
    string a="";
    cin >>a ;
    for(unsigned int i=0; i<a.length(); i++)

        if(a[i]>96)
        {
            cout<<a[i];
        }
        else{
            cout << (char)(a[i]+32);
        }
    return 1;
}
