#include <iostream>
using namespace std;

void mySwap(double &a, double &b)
{
   double temp;
   temp = a;
   a = b;
   b = temp;
}

bool floatLargestToTop(double data[], int top)
{
   bool changed = false;

   for(int k=0; k < top; k++)
   {
      if(data[k] > data[k+1])
      {
         mySwap(data[k], data[k+1]);
         changed = true;
      }
   }
   return changed;
}

void arraySort(double array[], int arraySize)
{
   int everShrinkingTop;

   for(everShrinkingTop = arraySize-1; everShrinkingTop >0; everShrinkingTop--)
   {
      if(!floatLargestToTop(array, everShrinkingTop))
         return;
   }
}

int main()
{
   double numbers[] =
   {10.2, 56.9, -33, 12, 0, 2, 4.8, 199.9, 73, -91.2};

   int arraySize = sizeof(numbers)/sizeof(numbers[0]);

   arraySort(numbers, arraySize);

   for(int i=0; i < arraySize; i++)
   {
      cout << numbers[i] << " ";
   }

   cout << endl;
}
