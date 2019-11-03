#include <iostream>
using namespace std;
int main()
{
    string a="";
    string left="";
    string right="";
    cin >>a ;
    //normalization
    for(int i=0; i<a.length(); i++)
    {
        if(a[i]<96)
        {
            a[i]=a[i]+32;
        }
    }
    for(int i=0; i<a.length(); i++)
    {
        left+=a[i];
    }
    for(int i=a.length()-1; i>=0; i--)
    {
        right+=a[i];
    }
    if(left==right)
    {
        cout << "1"<<endl;
    }
    else
    {
        cout << "0"<<endl;
    }
    return 1;
}

