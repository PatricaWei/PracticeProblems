#include <iostream>
using namespace std;

void oneMore(int nums[], int arraySize)
{
   for(int i=0; i < arraySize; i++)
   {
      nums[i] += 1;
   }

   for(int i=0; i < arraySize; i++)
   {
      cout << nums[i] << endl;
   }
}

int main()
{
   int numberss[] = {0,1,2,3,4,5,6,7,8,9,10};
   int arraySizeNum = 11;
   oneMore(numberss, arraySizeNum);

   return 0;
}
