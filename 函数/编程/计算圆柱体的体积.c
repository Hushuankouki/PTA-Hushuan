//输入圆柱的高和半径，求圆柱体积，volume = π×r
//2
//×h 。要求定义和调用函数cylinder(r, h)计算圆柱体的体积。
//
//输入格式 :
//输入在一行中给出2个实数，分别为半径r和高h。
//
//输出格式 :
//在一行中以“Volume = 值”的形式输出圆柱体的体积，结果保留三位小数。
//
//输入样例 :
//3.0 10
//
//输出样例 :
//Volume = 282.743

#include <stdio.h>
double cylinder(double r, int h)
{
    double pi = 3.1415926;
    return pi * r * r * h;
}
int main()
{
    int h;
    double r;
    scanf("%lf %d", &r, &h);
    printf("Volume = %.3lf", cylinder(r, h));
    return 0;
}