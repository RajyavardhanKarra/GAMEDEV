#include <iostream>
using namespace std;

char getYesNo();

void printResponse(char response);

void welcome();

void askYesOrNoQuestions();

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
	askYesOrNoQuestions();
	/*printNumber(5);

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
	cout << myInt << endl;*/

	system("pause");
}

void welcome()
{
	cout << "Welcome to the game!" << endl;
}

char getYesNo()
{
	char response;
	cout << "Do you want to continue? (y/n): ";
	cin >> response;
	return response;
}

void printResponse(char response)
{
	if (response == 'y' || response == 'Y')
	{
		cout << "You chose yes!" << endl;
	}
	else if (response == 'n' || response == 'N')
	{
		cout << "You chose no!" << endl;
	}
	else
	{
		cout << "Invalid response!" << endl;
	}
}

void askYesOrNoQuestions()
{
	welcome();

	char answer = getYesNo();

	printResponse(answer);
}