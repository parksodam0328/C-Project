// 사용자가 지정한 시간값을 초단위로 변경해주는 함수.
time_t ConvertSecondTime(int parm_year, int parm_month, int parm_day)
{
	struct tm base_time;

	base_time.tm_sec = 0;
	base_time.tm_min = 0;
	base_time.tm_hour = 0;
	base_time.tm_mday = parm_day;
	base_time.tm_mon = parm_month - 1;
	base_time.tm_year = parm_year - 1900; // 1900년부터 지정시간까지를 초단위로 계산하기 때문...
	base_time.tm_isdst = 0;

	// 초단위 값으로 변경해서 반환한다.
	return mktime(&base_time);
}

void main()
{
	int year = 0, month = 0, day = 0;
	cout << "입력 예: 2007 5 29" << endl << endl;
	cout << "오늘 날짜를 입력하세요 : " << endl;
	scanf("%d %d %d", &year, &month, &day);
	int interval_time = ConvertSecondTime(year, month, day);
	interval_time += 100 * 3600 * 24;

	// 초 단위 시간 정보를 다시 년월일로 환산한다.
	struct tm *newtime = gmtime((long *)&interval_time);
	cout << "=============================" << endl;
	cout << "100일은 " << newtime->tm_year + 1900 << "년" << newtime->tm_mon + 1 << "월" <<
		newtime->tm_mday << "일" << endl;
	getch();

}