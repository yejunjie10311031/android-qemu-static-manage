#include <iostream>
#include <string.h>
#include "libs/a.h"
using namespace std;
int main()
{
	char input1[128];
	cout << "这是用于安卓上的静态编译的qemu的管理程序。请输入选项：" << endl;
	cout << "a. qemu版本管理"<<endl;
	cout << "b. qemu配置" << endl;
	cout << "c. 运行qemu" << endl;
	cout << "输入exit可退出" << endl;
	while(true)
	{
	    cout << "input:";
	    cin >> input1;
    	while (strcmp(input1,"exit") != 0)
    	    {
    	        if (strcmp(input1,"a") == 0)
    	        {
    	            qm qm1;
    	            qm1.qemumanager();
    	            break;
    	        }
    	        else if (strcmp(input1,"b") == 0)
    	        {
    	            cout << "b";
    	        }
    	        else
                {
                    cout << "请输入正确的选项" << endl;
                }
    	    }
    	if (strcmp(input1,"exit") == 0)
    	    {
    	        break;
    	    }
	}
	cout << "程序已结束" << endl;
	return 0;
}
