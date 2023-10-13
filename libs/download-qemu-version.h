#include <iostream>
#include <cstdlib>
using namespace std;
class downloadqemu
{
public:
void download()
{
cout << "请输入要下载的qemu版本：";
char input3[128];
cin >> input3;
char download_ip[256] = "https://github.com/yejunjie10311031/android-qemu-static-manage/releases/download/main/qemu-";
char tmp[32]=".zip";
strcat(download_ip,input3);
strcat(download_ip,tmp);
cout << download_ip;
char shell1[512]="wget ";
char shell2[512]="mkdir ./qemu/qemu-";
char shell3[512]="cd ./qemu/qemu-";
char shell4[512]="unzip qemu-";
strcat(shell1,download_ip);
strcat(shell2,input3);
strcat(shell3,input3);
strcat(shell4,input3);
strcat(shell4,tmp);
system(shell1);
system(shell2);
system(shell3);
system(shell4);
}
};
