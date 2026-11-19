#include <iostream>
#include <vector>
using namespace std;
// This function adds the elements and returns true if the sum is less than x, false otherwise
bool CheckSum(vector<int> input, int x)
{
   int sum = 0;
   for (int c = 0; c < input.size(); c++)
   {
      sum += input[c];
   }
   if (sum <= x)
      return true;
   return false;
}

int main() {
   vector<int> inputVector;
   int size;
   int input;
   int i;
   int x;
   bool result;

   // Read the vector's size, and then the vector's elements
   cin >> size;
   for (i = 0; i < size; ++i) {
      cin >> input;
      inputVector.push_back(input);
   }

   cin >> x;

   result = CheckSum(inputVector, x);

   if (result) {
		cout << "True, the sum of all the elements is less than or equal to " << x << "." << endl;
	}
	else {
		cout << "False, the sum of all the elements is not less than or equal to " << x << "." << endl;
	}

   return 0;
}
