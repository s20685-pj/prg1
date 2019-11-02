<<<<<<< HEAD
 #include<iostream>
using namespace std;
int main()
{
cout<<"Enter size of  Daimond:  ";

    int size;
  cin>>size;

    int z=1;
  for ( int i=0; i<=size; i++)
  {
    for (int j=size; j>i; j--)
    {
      cout<<" "; // printing space here
    }

    cout<<"*";  // printing asterisk here

    if ( i>0)
    {
      for ( int k=1; k<=z; k++)
      {
        cout<<" ";
      }
      z+=2;
      cout<<"*";
    }
    cout<<endl; // end line similar  to \n
  }

  z-=4;

  for (int i=0; i<=size-1; i++)
  {
    for (int j=0; j<=i; j++)
    {
      cout<<" ";
    }

    cout<<"*";

    for (int k=1; k<=z; k++)
    {
      cout<<" ";
    }
    z-=2;

    if (i!=size-1)
    {
      cout<<"*";
    }
    cout<<endl;
  }
return 0;
}
=======
#include <iostream>

using namespace std;

int main()
{
int x=0;
cin >> x;
for (int i =0; i<x+1; i++)
{
  for (int j=0 ; j<x-i; j++)
  {
    cout << " ";
}
}
return 0;
}
>>>>>>> 8bb5a4c7ba565afdba040692df9a8f769b6ab201
