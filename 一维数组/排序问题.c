//输入10个整数，将它们从小到大排序后输出，并给出现在每个元素在原来序列中的位置。
//
//输入格式 :
//输入数据有一行，包含10个整数，用空格分开。
//
//输出格式 :
//输出数据有两行，第一行为排序后的序列，第二行为排序后各个元素在原来序列中的位置。
//
//输入样例 :
//1 2 3 5 4 6 8 9 10 7
//
//输出样例 :
//1 2 3 4 5 6 7  8 9 10
//1 2 3 5 4 6 10 7 8 9

#include <stdio.h>
int a[15];
int b[15];
int main()
{
    int n = 10;
    //将数字放在a数组里，数字位置放在b数组里
    for (int i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
        b[i] = i;
    }
    //冒泡排序，同时交换数组a和数组b
    for (int i = 1; i <= n - 1; i++) {
        for (int j = 1; j <= n - i; j++) {
            if (a[j] > a[j + 1]) {
                int t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
                int h = b[j];
                b[j] = b[j + 1];
                b[j + 1] = h;
            }
        }
    }
    //分别输出数组a和数组b
    for (int i = 1; i <= n; i++) {
        printf("%d", a[i]);
        if (i != n)
            printf(" ");
    }
    printf("\n");
    for (int i = 1; i <= n; i++) {
        printf("%d", b[i]);
        if (i != n)
            printf(" ");
    }
    return 0;
}