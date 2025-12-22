//计算组合数。C(n, m), 表示从n个数中选择m个的组合数。
//计算公式如下：
//若：m = 0，C(n, m) = 1
//否则， 若 n = 1，C(n, m) = 1
//否则，若m = n，C(n, m) = 1
//否则 C(n, m) = C(n - 1, m - 1) + C(n - 1, m).
//
//函数接口定义：
//在这里描述函数接口。例如：
//int fun(int n, int m)；
//
//其中 n 和 m 都是用户传入的参数(0 <= m <= n <= 20)。
//
//裁判测试程序样例：
//
//#include <stdio.h>
//#include <stdlib.h>
//int fun(int n, int m);
//
//int main()
//{
//    int t, n, m, i;
//    scanf("%d", &t);
//    for (i = 1; i <= t; i++)
//    {
//        scanf("%d %d", &n, &m);
//        printf("%d\n", fun(n, m));
//    }
//    return 0;
//}

/* 请在这里填写答案 */
//
//输入样例：
//在这里给出一组输入。例如：
//3
//2 1
//3 2
//4 0
//
//输出样例：
//在这里给出相应的输出。例如：
//2
//3
//1

int fun(int n, int m)
{
    if (m == 0)
        return 1;
    else if (n == 1)
        return 1;
    else if (n == m)
        return 1;
    else
        return fun(n - 1, m - 1) + fun(n - 1, m);
}