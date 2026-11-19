// This program uses vectors to check if a string contains characters that DO NOT match the given character
// The characters that do not match are placed into a vector which is passed by reference
#include <iostream>
#include <vector>
#include <string>
using namespace std;

void PickValues(string input, char x, vector<char>& results)
{
   for (int c = 0; c < input.length(); c++)
   {
      if (input.at(c) != x)
      {
         results.push_back(input.at(c));
      }
   }
}

int main() {
   string inputString;
   int i;
   char x;
   vector<char> results;
   
   cin >> inputString;
   cin >> x;

   PickValues(inputString, x, results);

   for (i = 0; i < results.size(); ++i) {
      cout << results.at(i) << endl;
   }

   return 0;
}
