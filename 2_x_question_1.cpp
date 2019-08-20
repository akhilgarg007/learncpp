//https://www.learncpp.com/cpp-tutorial/chapter-2-summary-and-quiz/ Question 1
#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <vector>
#include <utility>
using namespace std;

int readnumber() {
	int input;
	cout << "Enter Number: ";
	cin >> input;
	return input;
}

void writeAnswer(int x) {
	cout << "The sum of the numbers is: " << x << endl;
}


int main() {
	//readnumber
	int input1 = readnumber();
	//readnumber
	int input2 = readnumber();
	//add numbers
	int output = input1 + input2;
	//write answer
	writeAnswer(output);
}
