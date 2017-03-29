#include <iostream>
using namespace std;

void assignVariables()
{
   int *p1, *p2;
   p1 = new int;
   p2 = new int;

   *p1 = 10;
   *p2 = 20;

   cout << *p1 << " " << *p2 << endl;
   p1 = p2;
   cout << *p1 << " " << *p2 << endl;
   *p1 = 30;
   cout << *p1 << " " << *p2 << endl;
}
/*------------ RUN -----------------
 10 20
 20 20
 30 30
 -----------------------------------*/

void assignPointers()
{
   int *p1, *p2;
   p1 = new int;
   p2 = new int;

   *p1 = 10;
   *p2 = 20;

   cout << *p1 << " " << *p2 << endl;
   *p1 = *p2;
   cout << *p1 << " " << *p2 << endl;
   *p1 = 30;
   cout << *p1 << " " << *p2 << endl;
}
/*------------ RUN -----------------
10 20
20 20
30 20
 -----------------------------------*/


int main()
{
   assignPointers();
   cout << endl;
   assignVariables();
}
