/*
06.날짜더하기 : mktime
*/
#include <stdio.h>
#include <time.h>

void main(void)
{
	time_t now;
	struct tm t;

	time(&now);

	// 현재 년월일시 구하기
	t = *localtime(&now);

	// 100일 더하기
	t.tm_mday += 100;   // 100을 더하고,
	mktime(&t);         // 재계산

	// 100일 뒤의 날짜만 출력
	printf("%d월 %d일\n", (t.tm_mon + 1), t.tm_mday);
}