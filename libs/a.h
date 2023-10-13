#include <iostream>
#include "show-qemu-version.h"
#include "download-qemu-version.h"
using namespace std;
class qm
{
public:
void qemumanager()
{
    cout << "请输入选项,输入exit退出" << endl ;
    cout << "a. 查看现有qemu版本"<<endl;
	cout << "b. 下载qemu版本" << endl;
	cout << "c. 删除qemu版本" << endl;
	cout << "输入exit可退出" << endl;
	char input2[128];
	while(true)
	{
	    cout << "input:";
	    cin >> input2;
    	while (strcmp(input2,"exit") != 0)
    	    {
    	        if (strcmp(input2,"a") == 0)
    	        {
    	            showv showv1;
    	            showv1.show();
    	            break;
    	        }
    	        else if (strcmp(input2,"b") == 0)
    	        {
    	            downloadqemu downloadqemu1;
    	            downloadqemu1.download();
    	        }
    	        else
                {
                    cout << "请输入正确的选项" << endl;
                }
                break;
    	    }
    	    if (strcmp(input2,"exit") == 0)
    	    {
    	        break;
    	    }
	}
}
};
