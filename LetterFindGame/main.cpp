#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;

int check = 0; 
string newRound = ""; 
int rows = 15; 
int columns = 13;
int alphebetTotal = 26;
char alphebet[] = "ABCdEFGHIJKLMNOPQRSTUVWXYZ";
char lookAlike[] = "480b3E8FlGR1WM0ROP8FOWMKV2";
int colNum = 0;
int rowNum = 0;
 
char A = 'A';

int lookAlikePositionK = rand() % rows;  // making both POS in range of row or colum allowing me to output a lookalike every time. 
int lookAlikePositionL = rand() % columns;



void drawBoard() {
	srand(time(0));
	int number = rand() % 26;

	for (int k = 0; k < rows; k++) { 
		if (number == 0) {  // Fixing no letters printing to board; 
			number == number + 1;
		}
		cout << endl;
		for (int l = 0; l < columns; l++) {
			if (k == lookAlikePositionK && l == lookAlikePositionL) {
				cout << " " << lookAlike[number];
			}
			else {
				cout << " " << alphebet[number];
			}
		}
	}
}


int main() {
	while (true) {
		drawBoard();

		cout << endl << "Row: ";
		cin >> rowNum;
		rowNum = rowNum - 1;

		cout << endl << endl << "Column: ";
		cin >> colNum;
		colNum = colNum - 1;

		if (rowNum == lookAlikePositionK && colNum == lookAlikePositionL) {
			cout << "Correct" << endl << endl; 
		}
		else {
			cout << "Incorrect";
			cout << endl << endl << endl; 
		}
		cout << "New Round? y/n: "; 
		cin >> newRound; 
		system("CLS");

		for (int i = 0; i < 26; i++) {
			if (rowNum == alphebet[i]) {
				cout << "CANT INPUT LETTERS IDIOT"; 
				break; 
			}
		}

		if (newRound == "n") {
			system("CLS");
			cout << endl << "Thanks For Playing (Really Rage Quit??)" << endl << endl; 
			break; 
		}
		else {
			continue; 
		} 
	}
	return 0; 
}




