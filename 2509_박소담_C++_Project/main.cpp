#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int x, int y) {
	COORD pos;
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

int main(void){
	system("mode con: cols=100 lines=40");
	
	for (int i = 3; i < 9; i++){
		gotoxy(30, i);
		cout << "бс" << endl;
	}

	for (int i = 3; i < 9; i++){
		gotoxy(42, i);
		cout << "бс" << endl;
	}

	for (int i = 3; i < 9; i++){
		gotoxy(47, i);
		cout << "бс" << endl;
	}

	for (int i = 3; i < 9; i++){
		gotoxy(47, i);
		cout << "бс" << endl;
	}
 

	return 0;
}



