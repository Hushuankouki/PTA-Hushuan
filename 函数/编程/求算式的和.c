//定义函数main()，输入正整数n，计算并输出下列算式的值。要求调用函数f(n)计算n* (n + 1)…(2n - 1)，函数返回值类型是double。
//s = 1 + 1 / 2 * 3 + 1 / 2 * 3 * 4 + … + 1 / n * (n + 1) * … * (2n - 1)
//
//输入格式:
//输入在一行中给出一个正整数n。
//
//输出格式 :
//在一行中按照“sum = S”的格式输出部分和的值S，精确到小数点后六位，请注意等号的左右各有一个空格。题目保证计算结果不超过双精度范围。
//
//输入样例 :
//3
//
//输出样例 :
//sum = 1.183333

#include <stdio.h>
double f(int n)
{
    double sum = 1.0;
    int k = n;
    for (int i = 0; i < n; i++) {
        sum *= k;
        k++;
    }
    return sum;
}
int main()
{
    int n;
    double S = 0.0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        S += 1 / f(i);
    }
    printf("sum = %.6lf", S);
    return 0;
}