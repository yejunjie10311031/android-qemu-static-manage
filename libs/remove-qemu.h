#include <iostream>
#include <cstdlib>
using namespace std;
class removeqemu
{
    public:
    void removeq()
    {
        cout << "请输入要删除的qemu版本：";
        char input4[128];
        cin >> input4;
        char shell[512]="rm -rf ./qemu/qemu-";
        strcat(shell,input4);
        system(shell);
        cout << "删除成功" << endl;
    }
};