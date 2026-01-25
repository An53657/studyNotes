# include <stdio.h>

int main() {
    //定义float double 数据类型变量
    float a = 3.14F;
    //如果要保留小数在%后面.2
    printf("%.2f\n" , a);

    double b = 3.14578;
    printf("%lf\n" , b);

    //利用sizeof测量每一种数据类型占用的字节
    printf("%zu" , sizeof(a));
    return 0;
}