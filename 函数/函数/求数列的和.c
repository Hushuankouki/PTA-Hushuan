//数列的定义如下： 数列的第一项为n，以后各项为前一项的平方根，求数列的前m项的和。
//提示：因为自定义函数中用到数学函数，因此本题目的提交答案需要包括头文件在内的主函数和自定义函数。
//
//函数接口定义：
//double s(double n, int m);
//
//其中 n 和 m 都是用户传入的参数。 n 的值不超过double的范围； m 的值不超过int的范围。函数须返回数列前m项的和。
//
//提示：本题需要在自定义函数中使用sqrt()数学函数，因此在填写答案时需要提交完整的程序，既题目已经给定的代码部分和需要填写的答案部分。
//
//裁判测试程序样例：
//#include <stdio.h>
//#include <math.h>
//
//double s(double n, int m);
//
//int main()
//{
//    int a, b, m, i;
//    double sum, n;
//    while (scanf("%lf %d", &n, &m) != EOF)
//    {
//        sum = s(n, m);
//        printf("%.2lf\n", sum);
//    }
//
//    return 0;
//}
//
//
/* 请在这里填写答案 */
//
//输入样例：
//81 4
//2 2
//
//输出样例：
//94.73
//3.41

#include <stdio.h>
#include <math.h>
double s(double n, int m)
{
    double sum = 0;
    double num = n;
    for (int i = 1; i <= m; i++) {
        sum += num;
        num = sqrt(num);
    }
    return sum;
}

int main()
{
    int a, b, m, i;
    double sum, n;
    while (scanf("%lf %d", &n, &m) != EOF)
    {
        sum = s(n, m);
        printf("%.2lf\n", sum);
    }
    return 0;
}