//输入一个正整数n（1 <= n <= 10), 再输入n* n的矩阵，要求求该矩阵的下三角元素之和。
//
//函数接口定义：
//int  f(int (*p)[10], int n)；
//
//其中 p 和 n 都是用户传入的参数。 p 的值为地址； n 是[1, 10]区间内的个位数。函数需要返回求和后的数据。
//
//裁判测试程序样例：
//#include<stdio.h>
//int  f(int (*p)[10], int n)；
//
//int main()
//{
//    int n, i, j, sum;
//    int a[10][10];
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            scanf("%d", &a[i][j]);
//        }
//    }
//    sum = f(a, n);
//    printf("%d", sum);
//    return 0;
//}

/* 请在这里填写答案 */
//
//输入样例：
//5
//1 2 3 4 5
//2 3 4 5 6
//3 4 5 6 7
//4 5 6 7 8
//5 6 7 8 9
//
//输出样例：
//75

int f(int (*p)[10], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            sum += p[i][j];
        }
    }
    return sum;
}