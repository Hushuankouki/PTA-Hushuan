//给出两个数 n, m。求
//组合数A和组合数B
//
//计算公式：
//
//输入数据有多组（数据组数不超过 250），到 EOF 结束。
//
//对于每组数据，输入两个用空格隔开的整数 n, m(0 <= m <= n <= 20) 。
//对于每组数据输出一行，用空格隔开。
//
//提醒：因为n!和 m!数据较大，定义数据类型应用 long long int，输出格式 % lld
//
//函数接口定义：
//long long int f(long long int n);
//
//其中 n 是用户传入的参数。函数须返回n！的值。
//
//裁判测试程序样例：
//#include <stdio.h>
//long long int f(long long int n);
//int main()
//{
//    long long int n, m, i;
//    while (~scanf("%lld %lld", &n, &m))
//    {
//        long long int a, c;
//        a = f(n) / f(n - m);
//        c = f(n) / f(n - m) / f(m);
//        printf("%lld %lld\n", a, c);
//    }
//    return 0;
//}
//
/* 请在这里填写答案 */
//
//输入样例：
//在这里给出一组输入。例如：
//1 1
//5 3
//4 3
//
//输出样例：
//在这里给出相应的输出。例如：
//1 1
//60 10
//24 4


long long int f(long long int n)
{
    long long int i, result = 1;
    for (i = 1; i <= n; i++)
    {
        result *= i;
    }
    return result;
}