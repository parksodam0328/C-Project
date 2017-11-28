#include <iostream>
#include <windows.h>
#include <time.h>
#include<conio.h>
#include<math.h>
using namespace std;

void select_menu(char n); // 메뉴 선택하는 함수
void physiology_day(); // 생리일 달력으로 보여주는 함수
int menstrual_cycle(int y, int m, int d); // 생리주기 알려주는 함수
void find(int day, int *year, int *month, int *day2); //생리주기 더한 날짜
void fertility_day(); // 가임기 보여주는 함수
void physiology_history(); // 생리 history 보여주기
void how_to(); // 사용방법
void draw_check01(); // 달력 틀1 만드는 함수
void calendar(int y, int m, int d);
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
	cout << "3. 설명보기" << endl;
	gotoxy(70, 39);
	cout << "4. 종료하기" << endl;
}

int main(void){
	system("mode con: cols=150 lines=50");
	char n;
	system("cls");
	selectMenu();
	cout << "번호를 선택하세요.(1 ~ 4) >> ";
	cin >> n;
	select_menu(n);
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	return 0;
}

void select_menu(char n){
	switch (n){
	case '1':
		physiology_day(); break;

	case '2': //fertility_day(); 
		break;

	case '3': how_to(); break;
		
	case '4':	system("cls");
		char choice;
		cout << "                         ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■                        " << endl;
		cout << "		         ■                                                            ■ " << endl;
		cout << "			 ■                                                            ■ " << endl;
		cout << "		         ■                                                            ■ " << endl;
		cout << "			 ■                                                            ■ " << endl;
		cout << "                         ■                                                            ■" << endl;
		cout << "                         ■                                                            ■" << endl;
		cout << "                         ■                                                            ■" << endl;
		cout << "                         ■                         MY MAGIC DAY                       ■" << endl;
		cout << "			 ■                                                            ■ " << endl;
		cout << "			 ■                                                            ■ " << endl;
		cout << "			 ■                                                            ■ " << endl;
		cout << "			 ■                                                            ■ " << endl;
		cout << "                         ■		      프로그램을 종료합니다.                   ■" << endl;
		cout << "                         ■                                                            ■" << endl;
		cout << "                         ■			                                       ■" << endl;
		cout << "                         ■                                                            ■" << endl;
		cout << "                         ■                                                            ■" << endl;
		cout << "                         ■                                                            ■" << endl;
		cout << "                         ■                                                            ■" << endl;
		cout << "                         ■                                                            ■" << endl;
		cout << "                         ■                                                            ■" << endl;
		cout << "                         ■                                                            ■" << endl;
		cout << "                         ■                                                            ■" << endl;
		cout << "                         ■                                                            ■" << endl;
		cout << "                         ■                                                            ■" << endl;
		cout << "                         ■                                                            ■" << endl;
		cout << "                         ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■                        " << endl;

		cout << "                                         프로그램을 종료하시겠습니까? (y/n) ";
		cin >> choice;
		choice = toupper(choice);
		if (choice == 'Y'){
			cout << "감사합니다. 프로그램을 종료했습니다." << endl;
			exit(1);
		}
		else{}
		break;
	default:
		cout << "숫자 범위에서 벗어나셨습니다 프로그램을 종료합니다." << endl;
		exit(1);

	}
}

void draw_check01() // 달력 틀 만드는 함수
{
	int i, j, cnt = 0;
	unsigned char a = 0xa6;
	unsigned char b[12];

	const char *week[7] = { "일", "월", "화", "수", "목", "금", "토" };

	for (int i = 0; i < 7; i++){
		gotoxy(i * 18 + 19, 5);
		printf("%s", week[i]);
	}
	for (i = 1; i <= 11; i++) 
		b[i] = 0xa0 + i;
	gotoxy(10, 8);
	printf("%c%c", a, b[3]);
	
	for (int k = 0; k < 7; k++){ // 제일 윗 단 만들기
		for (i = 0; i < 9 - 1; i++)
			
			printf("%c%c", a, b[1]);
		
		if (cnt == 6){
			printf("%c%c", a, b[4]);
		} else printf("%c%c", a, b[8]); cnt++;
	}

	for (int i = 0; i < 8; i++){
		printf("\n");
		gotoxy(10, 9);
		printf("%c%c", a, b[2]);
		for (j = 0; j < 8 - 1; j++){
			gotoxy(i * 17 + 10, 9 + j);
			printf("%c%c", a, b[2]);
		}
	}
	cnt = 0;
	gotoxy(10, 16);
	printf("%c%c", a, b[7]);
	for (int k = 0; k < 7; k++){
		for (i = 0; i < 9 - 1; i++)
			printf("%c%c", a, b[1]);
		if (cnt == 6){
			printf("%c%c", a, b[9]);
		}
		else {
			printf("%c%c", a, b[11]);
		} cnt++;
	} 
	for (int i = 0; i < 8; i++){
		printf("\n");
		gotoxy(10, 9);
		printf("%c%c", a, b[2]);
		for (j = 0; j < 8 - 1; j++){
			gotoxy(i * 17 + 10, 17 + j);
			printf("%c%c", a, b[2]);
		}
	}
	cnt = 0;
	gotoxy(10, 24);
	printf("%c%c", a, b[7]);
	for (int k = 0; k < 7; k++){
		for (i = 0; i < 9 - 1; i++)
			printf("%c%c", a, b[1]);
		if (cnt == 6){
			printf("%c%c", a, b[9]);
		}
		else printf("%c%c", a, b[11]); cnt++;
	}
	for (int i = 0; i < 8; i++){
		printf("\n");
		gotoxy(10, 25);
		printf("%c%c", a, b[2]);
		for (j = 0; j < 8 - 1; j++){
			gotoxy(i * 17 + 10, 25 + j);
			printf("%c%c", a, b[2]);
		}
	}
	cnt = 0;
	gotoxy(10, 32);
	printf("%c%c", a, b[7]);
	for (int k = 0; k < 7; k++){
		for (i = 0; i < 9 - 1; i++)
			printf("%c%c", a, b[1]);
		if (cnt == 6){
			printf("%c%c", a, b[9]);
		}
		else printf("%c%c", a, b[11]); cnt++;
	}
	for (int i = 0; i < 8; i++){
		printf("\n");
		gotoxy(10, 33);
		printf("%c%c", a, b[2]);
		for (j = 0; j < 8 - 1; j++){
			gotoxy(i * 17 + 10, 33 + j);
			printf("%c%c", a, b[2]);
		}
	}
	cnt = 0;
	gotoxy(10, 40);
	printf("%c%c", a, b[7]);
	for (int k = 0; k < 7; k++){
		for (i = 0; i < 9 - 1; i++)
			printf("%c%c", a, b[1]);
		if (cnt == 6){
			printf("%c%c", a, b[9]);
		}
		else printf("%c%c", a, b[11]); cnt++;
	}
	for (int i = 0; i < 8; i++){
		printf("\n");
		gotoxy(10, 41);
		printf("%c%c", a, b[2]);
		for (j = 0; j < 8 - 1; j++){
			gotoxy(i * 17 + 10, 41 + j);
			printf("%c%c", a, b[2]);
		}
	}
	printf("\n");
	cnt = 0;
	gotoxy(10, 48);
	printf("%c%c", a, b[6]);
	for (int k = 0; k < 7; k++){
		for (i = 0; i < 9 - 1; i++)
			printf("%c%c", a, b[1]);
		if (cnt == 6){
			printf("%c%c", a, b[5]);
		}
		else printf("%c%c", a, b[10]); cnt++;
	}

}


void physiology_day(){
	system("cls");

	int y1, m1, d1, y2, m2, d2;
	int i = 0;
	int day;
	cout << endl;
	cout << "저번 생리일 입력 (입력예시 2017 10 31) : ";
		cin >> y1;//년 입력
		cin >> m1;//월
		cin >> d1;//일

	
	cout << "이번 생리일 입력 (입력예시 2017 11 21) : ";
		
		
		cin >> y2;
		cin >> m2;
		cin >> d2;
		day = menstrual_cycle(y2, m2, d2) - menstrual_cycle(y1, m1, d1);
		cout << "당신의 생리주기 : " << day <<"일"<<endl;
		//find(day, &y2, &m2, &d2);
		calendar(y2, m2, d2);
		draw_check01();
		

	
}

void calendar(int year, int month, int d){
	int day[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int days = 0;
	int first_date = 0;
	
	days = (year - 1) * 365 + (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400;
	
	for (int i = 0; i < month - 1; i++){
		if (i == 1){
			if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
				day[1] = 29;
			else
				day[1] = 28;
		}
		days += day[i];
	}
	first_date = days % 7;
	int x = 0;
	int y = 10;
	int cnt = 0;
	for (int j = 1; j < day[month - 1]; j++){
			if (cnt==7){
				x =0;
				y+=8;
				cnt = 0;
			}
			gotoxy(((x++)*17)+24, y);
			cout << j;
			cnt++;
	}
}

int menstrual_cycle(int y, int m, int d){
	int months[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int i;
	int total = 0;
	total = (y - 1) * 365L + (y - 1) / 4 - (y - 1) / 100 + (y - 1) / 400;
	if (!(y % 4) && y % 100 || !(y % 400))
		months[1]++;
	for (i = 0; i<m - 1; i++)
		total += months[i];
	total += d;
	return total;
}

void find(int days, int *year, int *month, int *day)
{
#define COUNT_DAYS(YEAR)   ( ((y2)-1)*365 + COUNT_LEAPS(YEAR) )
	*year = 1900;
	*month = 1;
	*day = 1;

	while (days >= 365){
		(*year)++;
		days -= 365;
	}
	while (days >= 30){
		(*month)++;
		days -= 30;
	}
	*day += days;
}

void fertility_day() {
	system("cls");
	cout << "                         ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■                        " << endl;
	cout << "		         ■                                                            ■ " << endl;
	cout << "			 ■                                                            ■ " << endl;
	cout << "		         ■                                                            ■ " << endl;
	cout << "			 ■                                                            ■ " << endl;
	cout << "                         ■                                                            ■" << endl;
	cout << "                         ■                                                            ■" << endl;
	cout << "                         ■                                                            ■" << endl;
	cout << "                         ■                         MY MAGIC DAY                       ■" << endl;
	cout << "			 ■                                                            ■ " << endl;
	cout << "			 ■                                                            ■ " << endl;
	cout << "			 ■                                                            ■ " << endl;
	cout << "			 ■                                                            ■ " << endl;
	cout << "                         ■		      서비스를 준비 중입니다.                  ■" << endl;
	cout << "                         ■                                                            ■" << endl;
	cout << "                         ■			                                       ■" << endl;
	cout << "                         ■                                                            ■" << endl;
	cout << "                         ■                                                            ■" << endl;
	cout << "                         ■                                                            ■" << endl;
	cout << "                         ■                                                            ■" << endl;
	cout << "                         ■                                                            ■" << endl;
	cout << "                         ■                                                            ■" << endl;
	cout << "                         ■                                                            ■" << endl;
	cout << "                         ■                                                            ■" << endl;
	cout << "                         ■                                                            ■" << endl;
	cout << "                         ■                                                            ■" << endl;
	cout << "                         ■                                                            ■" << endl;
	cout << "                         ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■                        " << endl;
}

void how_to() {
	system("cls");
	char choice;
	cout << "                         ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■ " << endl;
	cout << "		         ■                                                            ■ " << endl;
	cout << "			 ■                                                            ■ " << endl;
	cout << "		         ■                                                            ■ " << endl;
	cout << "			 ■                                                            ■ " << endl;
	cout << "                         ■                                                            ■" << endl;
	cout << "                         ■                                                            ■" << endl;
	cout << "                         ■                   MY MAGIC DAY 사용 방법                   ■" << endl;
	cout << "			 ■                                                            ■ " << endl;
	cout << "			 ■                                                            ■ " << endl;
	cout << "			 ■                                                            ■ " << endl;
	cout << "			 ■                                                            ■ " << endl;
	cout << "                         ■             1. 메인 화면에서 메뉴를 선택한다.              ■" << endl;
	cout << "                         ■                                                            ■" << endl;
	cout << "                         ■          2. 해당 메뉴에서 입력해야할 값을 입력한다.        ■" << endl;
	cout << "                         ■                                                            ■" << endl;
	cout << "                         ■        3. 입력을 마치면 정보를 담은 달력이 출력된다.       ■" << endl;
	cout << "                         ■                                                            ■" << endl;
	cout << "                         ■                                                            ■" << endl;
	cout << "                         ■                                                            ■" << endl;
	cout << "                         ■                                                            ■" << endl;
	cout << "                         ■                                                            ■" << endl;
	cout << "                         ■                                                            ■" << endl;
	cout << "                         ■                                                            ■" << endl;
	cout << "                         ■                                                            ■" << endl;
	cout << "                         ■                                                            ■" << endl;
	cout << "                         ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■                        " << endl;

	cout << "                                                                         " << endl;
	cout << "                                                                         " << endl;
	cout << "                                              종료하시겠습니까? (y/n) ";
	cin >> choice;
	choice = toupper(choice);
	if (choice == 'Y'){
		system("cls");
		exit(1);
	}
	

}