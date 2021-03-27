#include<Windows.h>
int main()
{
	Sleep(500);
	system("del BiliBiliDownloader.exe");
	system("ren version1.exe BiliBiliDownloader.exe");
	system("start BiliBiliDownloader.exe");
	return 0;
}
