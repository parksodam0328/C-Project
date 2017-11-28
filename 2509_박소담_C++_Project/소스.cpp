// ����ڰ� ������ �ð����� �ʴ����� �������ִ� �Լ�.
time_t ConvertSecondTime(int parm_year, int parm_month, int parm_day)
{
	struct tm base_time;

	base_time.tm_sec = 0;
	base_time.tm_min = 0;
	base_time.tm_hour = 0;
	base_time.tm_mday = parm_day;
	base_time.tm_mon = parm_month - 1;
	base_time.tm_year = parm_year - 1900; // 1900����� �����ð������� �ʴ����� ����ϱ� ����...
	base_time.tm_isdst = 0;

	// �ʴ��� ������ �����ؼ� ��ȯ�Ѵ�.
	return mktime(&base_time);
}

void main()
{
	int year = 0, month = 0, day = 0;
	cout << "�Է� ��: 2007 5 29" << endl << endl;
	cout << "���� ��¥�� �Է��ϼ��� : " << endl;
	scanf("%d %d %d", &year, &month, &day);
	int interval_time = ConvertSecondTime(year, month, day);
	interval_time += 100 * 3600 * 24;

	// �� ���� �ð� ������ �ٽ� ����Ϸ� ȯ���Ѵ�.
	struct tm *newtime = gmtime((long *)&interval_time);
	cout << "=============================" << endl;
	cout << "100���� " << newtime->tm_year + 1900 << "��" << newtime->tm_mon + 1 << "��" <<
		newtime->tm_mday << "��" << endl;
	getch();

}