#include <stdio.h>
#include <windows.h>

int main () {
    
    SetConsoleOutputCP(CP_UTF8);
    // printf("HelloWorld!!");
    //打印int
    int a = 202;
    printf("%d\n" , a);

    //利用sizeof(测量大小)
    //格式sizeof(变量名/数据类型)
    printf("%zu" ,sizeof(short));

    return 0;
}