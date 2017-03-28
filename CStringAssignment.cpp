#include <iostream>
using namespace std;

int main()
{
   const int SIZE = 20;

   char ourString[SIZE];

   int index = 0;

   while((ourString[index] != '\0') && (index < SIZE))
   {
      ourString[index] = 'X';
      index++;
   }

   /*
    * Trying to figure out how to print out the contents of the char array
    */
   for(int i=0; i < SIZE; i++)
   {
      cout << ourString[i];
   }
   cout << endl;
   return 0;
}
