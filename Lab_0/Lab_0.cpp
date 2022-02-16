#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int MAX_ARRAY = 10;

void drawAhorizontalLine(int numb);
void drawAverticalLine(int numb1);
void drawAsquare(int numb2);
void draw_rectangle(int numb3, int numb4);
void shapeLen(int randArray[MAX_ARRAY]);
void shapeTy(int randArray1[MAX_ARRAY]);
void shapeCh(char randArray2[MAX_ARRAY]);

int main() {

	srand(time(NULL));

	int randArray[MAX_ARRAY], num1 = 0, num2, num3, num4, num5, num6;

	cout << "Welcome there!" << endl;
	//creating do while loop to do the project till user enters 5
	do {
		cout << "\nSelect the input" << endl;
		cout << "1. Draw a horizontal line:" << endl;
		cout << "2. Draw a vertical line:" << endl;
		cout << "3. Draw a square:" << endl;
		cout << "4. Draw a rectangle:" << endl;
		cout << "5. Quit" << endl;

		cin >> num1;
		//switching the input
		switch (num1) {
		case 1:
			cout << "Enter the number of stars:";
			cin >> num2;
			drawAhorizontalLine(num2);
			break;

		case 2:
			cout << "Enter the number of stars:";
			cin >> num3;
			drawAverticalLine(num3);
			break;

		case 3:
			cout << "Enter parameter:";
			cin >> num4;
			drawAsquare(num4);
			break;

		case 4:
			cout << "Enter first parameter:" << endl;
			cin >> num5;
			cout << "Enter second parameter" << endl;
			cin >> num6;
			draw_rectangle(num5, num6);
			break;

		case 5:
			exit(1);
			break;
		}
	} while (num1 != 5);
}

void drawAhorizontalLine(int numb) {
	//creating a loop which take numb1 as a parameter of amount of *
	for (int i = 0; i < numb; i++) {
		cout << "*";
	}
}

void drawAverticalLine(int numb1) {
	//creating a loop which take numb1 as a parameter of amount of *
	for (int i = 0; i < numb1; i++) {
		cout << "@\n";
	}
}

void drawAsquare(int numb2) {
	//draw the top wall
	for (int column = 0; column < numb2; ++column)
	{
		cout << "$";
	}

	cout << "\n";
	//draw the sides.
	for (int row = 0; row < numb2; ++row)
	{
		cout << "$";
		//second wall
		for (int column = 0; column < numb2 - 2; ++column)
		{
			cout << " ";
		}
		cout << "$\n";
	}

	//draw bottom wall 
	for (int column = 0; column < numb2; ++column)
	{
		cout << "$";
	}
	//stop printing
	cout << "\n";
}

void draw_rectangle(int numb3, int numb4) {
	//using for loop for the height
	for (int i = 0; i < numb3; i++) {
		//using for loop for the weight
		for (int y = 0; y < numb4; y++) {
			cout << "^ ";
		}
		cout << endl;
	}
}

void shapeTy(int randArray[MAX_ARRAY]) {
	//putting random numbers
	for (int i = 0; i < MAX_ARRAY; i++) {
		randArray[i] = rand() % 4 + 1;
	}
	//showing all the numbers
	for (int i = 0;i < MAX_ARRAY;i++) {
		cout << "Elements no " << i + 1 << ":" << randArray[i] << endl;
	}
}

void shapeLen(int randArray1[MAX_ARRAY]) {
	//putting random numbers
	for (int i = 0; i < MAX_ARRAY; i++) {
		randArray1[i] = rand() % 20 + 1;
	}
	//showing all the numbers
	for (int i = 0;i < MAX_ARRAY;i++) {
		cout << "Elements no " << i + 1 << ":" << randArray1[i] << endl;
	}
	//showing the size of array
	cout << sizeof(randArray1);
}

void shapeCh(char randArray2[MAX_ARRAY]) {
	//creating array with letters
	char alphabets[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
	
	//initializing the integer
	int i = 0;
	
	//setting the while loop
	while (i < MAX_ARRAY) {
		//generating letters between 0 and 25
		int temp = rand() % 26;
		
		//push result to array
		randArray2[i] = alphabets[temp];
		
		//continuing while loop
		i++;
	}
	
	//for loop to output the array
	for (i = 0; i < MAX_ARRAY; i++) {
		cout << randArray2[i];
	}
}

