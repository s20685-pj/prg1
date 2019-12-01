
#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector < int > tab;
    for(int i=0; i<100; i++)
   {
       int element;
       cin >> element;
       if (element==0)
   {
       break;
   }
   else
   {
       tab.push_back(element);
    }
   }
   for (int i=0;i<tab.size();i++){
       cout<<tab[ i ]<<' ';
       }


    return 0;
}
