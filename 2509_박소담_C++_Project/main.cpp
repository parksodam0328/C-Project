#include <iostream>
#include <windows.h>
#include<conio.h>
using namespace std;

void gotoxy(int x, int y) {
	COORD pos;
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
void startMain(){
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "                               ■      ■   ■      ■      ■      ■         ■          ■■■■      ■    ■■■■" << endl;
	cout << "                               ■■  ■■    ■    ■       ■■  ■■        ■■        ■             ■    ■    ■" << endl;
	cout << "                               ■ ■■ ■     ■  ■        ■ ■■ ■       ■  ■      ■              ■    ■      " << endl;
	cout << "                               ■  ■  ■       ■          ■  ■  ■      ■■■■     ■    ■■■    ■    ■      " << endl;
	cout << "                               ■      ■       ■          ■      ■     ■      ■    ■      ■      ■    ■      " << endl;
	cout << "                               ■      ■       ■          ■      ■    ■        ■    ■     ■      ■    ■    ■" << endl;
	cout << "                               ■      ■       ■          ■      ■   ■          ■    ■■■■      ■    ■■■■" << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "                                                          ■■■■           ■       ■      ■" << endl;
	cout << "                                                          ■     ■         ■■       ■    ■" << endl;
	cout << "                                                          ■     ■        ■  ■       ■  ■" << endl;
	cout << "                                                          ■     ■       ■■■■        ■" << endl;
	cout << "                                                          ■     ■      ■      ■       ■" << endl;
	cout << "                                                          ■     ■     ■        ■      ■" << endl;
	cout << "                                                          ■■■■     ■          ■     ■" << endl;
}

void selectMenu(){

	startMain();
	gotoxy(70, 30);
	cout << "1. 생리일 확인하기" << endl;
	gotoxy(70, 33);
	cout << "2. 가임기 확인하기" << endl;
	gotoxy(70, 36);
	cout << "3. magic history" << endl; 
	gotoxy(70, 39);
	cout << "4. 설명보기" << endl;
	gotoxy(70, 42);
	cout << "5. 종료하기" << endl;
}

int main(void){

	system("mode con: cols=150 lines=50");
	unsigned char a = 0xa6;
	unsigned char b[12];
	for (int i = 1; i <= 11; i++){
		b[i] = 0xa0 + i;
		printf("%c%c", a, b[i]);
	}
	//selectMenu();
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	return 0;
}