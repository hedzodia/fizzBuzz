#include <iostream>
#include <string>

using namespace std;

int main() {	
	int endNumber = 0;
	cout << "enter name of end of fizzbuzz :";
	cin >> endNumber;
	while (!cin.good())
	{
		cin.clear();
		cin.ignore(INT_MAX, '\n'); 
		cout << "enter NUMBER!";
	}

	for (int i = 1; i < endNumber+1; i++)
	{
		string toDisplay = ""; 		
		if ((i % 3 == 0) && (i % 5 == 0))	{toDisplay += "FIZZBUZZ(" + to_string(i) + ")";}
		else if (i%5 == 0){toDisplay += "BUZZ(" + to_string(i) + ")";}
		else if (i % 3 == 0){toDisplay += "FIZZ(" + to_string(i) +")";}
		else {toDisplay = to_string(i);}
		cout << toDisplay << endl;		
	}
}