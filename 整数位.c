//输入一个不多于5位的正整数，要求：
//（1）求出它是几位数；
//（2）分别输出每一位数字；
//（3）按逆序输出各位数字。
//
//输入格式 :
//输入一个不多于5位的正整数。
//
//输出格式 :
//输出数据有3行，第一行为正整数位数，第二行为各位数字，第三行为逆序的各位数字。
//
//输入样例 :
//123
//
//输出样例 :
//3
//1 2 3
//3 2 1

#include <stdio.h>
int a[10];
int main()
{
    int x, i;
    scanf("%d", &x);
    //保留原数值
    int y = x;
    i = 0;
    //求位数
    while (y > 0) {
        i++;
        y /= 10;
    }
    //保存每一位数（逆序）
    for (int ii = 0; ii < i; ii++) {
        int z = x % 10;
        a[ii] = z;
        x /= 10;
    }
    //输出位数
    printf("%d\n", i);
    //输出各位数字
    for (int ii = i - 1; ii >= 0; ii--) {
        printf("%d", a[ii]);
        if (ii > 0)
            printf(" ");
    }
    printf("\n");
    //输出逆序的各位数字
    for (int ii = 0; ii < i; ii++) {
        printf("%d", a[ii]);
        if (ii < i - 1)
            printf(" ");
    }
    return 0;
}