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
	cout << "                               ��      ��   ��      ��      ��      ��         ��          �����      ��    �����" << endl;
	cout << "                               ���  ���    ��    ��       ���  ���        ���        ��             ��    ��    ��" << endl;
	cout << "                               �� ��� ��     ��  ��        �� ��� ��       ��  ��      ��              ��    ��" << endl;
	cout << "                               ��  ��  ��       ��          ��  ��  ��      �����     ��    ����    ��    ��" << endl;
	cout << "                               ��      ��       ��          ��      ��     ��      ��    ��      ��      ��    ��" << endl;
	cout << "                               ��      ��       ��          ��      ��    ��        ��    ��     ��      ��    ��    �� " << endl;
	cout << "                               ��      ��       ��          ��      ��   ��          ��    �����      ��    �����" << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "                                                          �����           ��       ��      ��" << endl;
	cout << "                                                          ��     ��         ���       ��    ��" << endl;
	cout << "                                                          ��     ��        ��  ��       ��  ��" << endl;
	cout << "                                                          ��     ��       �����        ��" << endl;
	cout << "                                                          ��     ��      ��      ��       ��" << endl;
	cout << "                                                          ��     ��     ��        ��      ��" << endl;
	cout << "                                                          �����     ��          ��     ��" << endl;
}

void selectMenu(){
	
	startMain();
	gotoxy(70, 33);
	cout << "1. ������ Ȯ���ϱ�" << endl;
	gotoxy(70, 36);
	cout << "2. ���ӱ� Ȯ���ϱ�" << endl;
	gotoxy(70, 39);
	cout << "3. �����" << endl;
	gotoxy(70, 42);
	cout << "4. �����ϱ�" << endl;
}

int main(void){
	system("mode con: cols=150 lines=50");
	
	selectMenu();
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	return 0;
}



