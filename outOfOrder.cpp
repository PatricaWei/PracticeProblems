#include <iostream>
using namespace std;

int outOfOrder(double numbers[], int size)
{
   for(int i=0; i < size-1; i++)
   {
      if(numbers[i] > numbers[i+1])
         return i;
   }
   return -1;
}

int main()
{
   double a[10] = {1.2, 2.1, 3.3, 2.5, 4.5, 7.9, 5.4, 8.7, 9.9, 1.0};
   int size = sizeof(a) / sizeof(a[0]);
   int result = outOfOrder(a,size);

   cout << result << endl;

   return 0;
}
