#include <iostream>
using namespace std;

void welcome()
{
	cout << "Welcome to the game!" << endl;
}

void printNumber(int number)
{
	cout << "The number is: " << number << endl;
} 

int add(int a, int b)
{
	int result = a + b;
	return result;
}

int main()
{

	welcome();

	printNumber(5);

	int c = add(3, 4);

	printNumber(c); 

	char myCharacter;
	myCharacter = 'y';

	int myInt;
	myInt = 13;

	cout << myCharacter << endl;
	cout << myInt << endl;

	myCharacter = 'n';
	myInt = 12;

	cout << myCharacter << endl;
	cout << myInt << endl;

	system("pause");
}