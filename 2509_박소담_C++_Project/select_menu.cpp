#include <iostream>
#include <windows.h>

using namespace std;


void select_menu(int n); // �޴� �����ϴ� �Լ�
void physiology_day(); // ������ �����ִ� �Լ�
void fertility_day(); // ���ӱ� �����ִ� �Լ�
void physiology_history(); // ���� history �����ֱ�
void how_to(); // �����
void draw_check01(); // �޷� Ʋ1 ����� �Լ�
void calendar(int y, int m);

int main(void){
	system("mode con: cols=150 lines=50");
	int n=0;
	system("cls");
	cout << "��ȣ�� �����ϼ���. >> ";
	cin >> n;
	//select_menu(n);
	draw_check01();

	return 0;
}

void select_menu(int n){
	switch (n){
	case 1:// system("cls");
		physiology_day();
		//draw_check01(30, 51);

	case 2: system("cls");
		//fertility_day();

	case 3: system("cls");
		//physiology_history();
		
	case 4: system("cls");
		//how_to();

	
	}
}

void draw_check01() // �޷� Ʋ ����� �Լ�
{
	int i, j, cnt = 0;
	unsigned char a = 0xa6;
	unsigned char b[12];

	for (i = 1; i <= 11; i++) 
		b[i] = 0xa0 + i;

	printf("%c%c", a, b[3]);
	
	for (int k = 0; k < 7; k++){ // ���� �� �� �����
		for (i = 0; i < 9 - 1; i++)
			printf("%c%c", a, b[1]);
		
		if (cnt == 6){
			printf("%c%c", a, b[4]);
		} else printf("%c%c", a, b[8]); cnt++;
	}

	for (int i = 0; i < 6; i++){
		printf("\n");
		printf("%c%c", a, b[2]);
		for (j = 0; j < 8 - 1; j++){
			printf("                ");
			printf("%c%c", a, b[2]);
		}
	}
	cnt = 0;
	printf("\n%c%c", a, b[7]);
	for (int k = 0; k < 7; k++){
		for (i = 0; i < 9 - 1; i++)
			printf("%c%c", a, b[1]);
		if (cnt == 6){
			printf("%c%c", a, b[9]);
		} else printf("%c%c", a, b[11]); cnt++;
	} 
	for (int i = 0; i < 6; i++){
		printf("\n");
		printf("%c%c", a, b[2]);
		for (j = 0; j < 8 - 1; j++){
			printf("                ");
			printf("%c%c", a, b[2]);
		}
	}
	cnt = 0;
	printf("\n%c%c", a, b[7]);
	for (int k = 0; k < 7; k++){
		for (i = 0; i < 9 - 1; i++)
			printf("%c%c", a, b[1]);
		if (cnt == 6){
			printf("%c%c", a, b[9]);
		}
		else printf("%c%c", a, b[11]); cnt++;
	}
	for (int i = 0; i < 6; i++){
		printf("\n");
		printf("%c%c", a, b[2]);
		for (j = 0; j < 8 - 1; j++){
			printf("                ");
			printf("%c%c", a, b[2]);
		}
	}
	cnt = 0;
	printf("\n%c%c", a, b[7]);
	for (int k = 0; k < 7; k++){
		for (i = 0; i < 9 - 1; i++)
			printf("%c%c", a, b[1]);
		if (cnt == 6){
			printf("%c%c", a, b[9]);
		}
		else printf("%c%c", a, b[11]); cnt++;
	}
	for (int i = 0; i < 6; i++){
		printf("\n");
		printf("%c%c", a, b[2]);
		for (j = 0; j < 8 - 1; j++){
			printf("                ");
			printf("%c%c", a, b[2]);
		}
	}
	cnt = 0;
	printf("\n%c%c", a, b[7]);
	for (int k = 0; k < 7; k++){
		for (i = 0; i < 9 - 1; i++)
			printf("%c%c", a, b[1]);
		if (cnt == 6){
			printf("%c%c", a, b[9]);
		}
		else printf("%c%c", a, b[11]); cnt++;
	}
	for (int i = 0; i < 6; i++){
		printf("\n");
		printf("%c%c", a, b[2]);
		for (j = 0; j < 8 - 1; j++){
			printf("                ");
			printf("%c%c", a, b[2]);
		}
	}
	printf("\n");
	cnt = 0;
	printf("%c%c", a, b[6]);
	for (int k = 0; k < 7; k++){
		for (i = 0; i < 9 - 1; i++)
			printf("%c%c", a, b[1]);

		if (cnt == 6){
			printf("%c%c", a, b[5]);
		}
		else printf("%c%c", a, b[10]); cnt++;
	}
	/*for (i = 0; i < 10 - 1; i++)
	{
		printf("%c%c", a, b[2]);
		for (j = 0; j < 9 - 1; j++){
			printf("       ");
			printf("%c%c", a, b[2]);
		}
		printf("  ");
		printf("%c%c", a, b[2]);
		printf("\n");
		printf("%c%c", a, b[7]);
		for (int z = 0; z < 10 - 1; z++){
			printf("%c%c", a, b[1]);
			printf("%c%c", a, b[11]);
		}
		printf("%c%c", a, b[1]);
		printf("%c%c", a, b[9]);
		printf("\n");
	}
	printf("%c%c", a, b[2]);
	for (j = 0; j < 10; j++){
		printf("  ");
		printf("%c%c", a, b[2]);
	}
	printf("  ");
	printf("\n");
	printf("%c%c", a, b[6]);
	for (i = 0; i < 10 - 1; i++){
		printf("%c%c", a, b[1]);
		printf("%c%c", a, b[10]);
	}
	printf("%c%c", a, b[1]);
	printf("%c%c", a, b[5]);
	printf("\n");*/

	int y = 0, m = 0;

	cout << "�⵵�� ���� �Է����ּ���. (�Է� ���� 20xx 3��) >> ";
	cin >> y;
	cin >> m;
	calendar(y, m);
	

}

void physiology_day(){
	draw_check01();
}

void calendar(int y, int m){
	int last_day[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };


}