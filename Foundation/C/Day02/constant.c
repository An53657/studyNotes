#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    //输出一个整型
    // printf("%d" , 12);

    //输出实型
    // printf("%f" , 3.14);

    //输出字符型
    // printf("%c" , 'A');

    //输出字符串
    // printf("%s" , "HelloWorld");

    // printf("我的学校名字为：%s" , "XXX");

    printf("我是%s,\n今年%d岁了" , "王一以"  , 18);
    return 0;
}