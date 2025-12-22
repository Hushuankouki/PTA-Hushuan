//编写计算斐波那契（Fibonacci）数列的第n项函数fib（n）(n < 40)。
//	数列描述：
//	f1 = f2 == 1;
//fn = fn - 1 + fn - 2(n >= 3)。
//
//输入格式 :
//输入整数 n 的值（0 < n < 40)。
//
//	输出格式 :
//输出fib(n)的值。
//
//输入样例 :
//7
//
//输出样例 :
//13

#include <stdio.h>
int fib(int n)
{
    if (n == 1 || n == 2)
        return 1;
    else
        return fib(n - 1) + fib(n - 2);
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", fib(n));
    return 0;
}