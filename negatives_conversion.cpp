// This code takes positive values and stores the negative versions in another vector passed by reference
#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

void ComputeNegations(vector<double>& input, vector<double>& negated)
{
   for (int c = 0; c < input.size(); c++)
   {
      negated.push_back(0 - input[c]);
   }
}

int main() {
   int i;
	vector<double> inputVector;
	int size;
	double input;
	vector<double> negated;

	cin >> size;
	for (i = 0; i < size; ++i) {
		cin >> input;
		inputVector.push_back(input);
	}

   ComputeNegations(inputVector, negated);

	for (i = 0; i < negated.size(); ++i) {
		cout << fixed << setprecision(1) << negated.at(i) << endl;
	}

   return 0;
}
