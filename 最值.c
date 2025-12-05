//有一个长度为n的整数序列，其中最小值和最大值不会出现在序列的第一和最后一个位置。
//请写一个程序，把序列中的最小值与第一个数交换，最大值与最后一个数交换。输出转换好的序列。
//
//输入格式 :
//输入包括两行。
//第一行为正整数n（1≤n≤10）。
//第二行为n个正整数组成的序列。
//
//输出格式 :
//输出转换好的序列。数据之间用空格隔开。
// 
//输入样例:
//6
//2 3 8 1 4 5
//输出样例:
//1 3 5 2 4 8

#include <stdio.h>
int x[15];
int main()
{
    int n;
    scanf("%d\n", &n);
    scanf("%d", &x[0]);
    int max = 0;
    int min = 0;
    //打擂 取min和max的位置
    for (int i = 1; i < n; i++) {
        scanf("%d", &x[i]);
        if (x[max] < x[i])
            max = i;
        if (x[min] > x[i])
            min = i;
    }
    //交换 第一位和min
    int m = x[0];
    x[0] = x[min];
    x[min] = m;
    //如果max在第一位，那么max被交换 重新找max的位置
    if (max == 0)
        max = min;
    //交换 最后一位和max
    int mm = x[n - 1];
    x[n - 1] = x[max];
    x[max] = mm;
    for (int i = 0; i < n; i++) {
        printf("%d", x[i]);
        if (i < n - 1)
            printf(" ");
    }
    return 0;
}