/*
06.��¥���ϱ� : mktime
*/
#include <stdio.h>
#include <time.h>

void main(void)
{
	time_t now;
	struct tm t;

	time(&now);

	// ���� ����Ͻ� ���ϱ�
	t = *localtime(&now);

	// 100�� ���ϱ�
	t.tm_mday += 100;   // 100�� ���ϰ�,
	mktime(&t);         // ����

	// 100�� ���� ��¥�� ���
	printf("%d�� %d��\n", (t.tm_mon + 1), t.tm_mday);
}