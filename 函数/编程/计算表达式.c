//计算下列表达式值：
//?(x, n) = √n + √(n? 1) + √(n? 2) + √... + √1 + x
//
//输入格式 :
//输入x和n的值，其中x为非负实数，n为正整数。
//
//输出格式 :
//输出f(x, n)，保留2位小数。
//
//输入样例 :
//3 2
//
//输出样例 :
//2.00

#include <stdio.h>
#include <math.h>
double f(double x, int n)
{
    if (n == 1)
        return sqrt(1 + x);
    else
        return sqrt(n + f(x, n - 1));
}
int main()
{
    int n;
    double x;
    scanf("%lf %d", &x, &n);
    printf("%.2lf", f(x, n));
    return 0;
}