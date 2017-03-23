#include <iostream>
#include <string>
#include <sstream>
using namespace std;

void fillAndPrintArray()
{
   const int ARRAY_SIZE = 20;
   int numbers[ARRAY_SIZE];

   string userInputStr;
   int userInput;

   for(int i=0; i < ARRAY_SIZE; i++)
   {
      cout << "Give me a number to store: ";
      getline(cin, userInputStr);
      istringstream(userInputStr) >> userInput;
      numbers[i] = userInput;
   }

   for(int i=0; i < ARRAY_SIZE; i++)
   {
      cout << numbers[i] << endl;
   }

}

int main()
{
   fillAndPrintArray();
}
