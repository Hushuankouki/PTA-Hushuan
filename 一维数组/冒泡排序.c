//给你N(N <= 100)个数, 请你按照从小到大的顺序输出。
//
//输入格式 :
//输入数据第一行是一个正整数N, 第二行有N个整数。
//
//输出格式 :
//输出一行，从小到大输出这N个数，中间用空格隔开。
//
//输入样例 :
//5
//1 4 3 2 5
//
//输出样例 :
//1 2 3 4 5

#include <stdio.h>
int a[105];
int main()
{
    int n;
    scanf("%d", &n);
    //读取数组
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    //从第一个数开始
    for (int i = 0; i < n - 1; i++) {
        //遍历后面的数，若后面的小，则交换
        for (int j = 0; j < n - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                int t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
    //顺序输出
    for (int i = 0; i < n; i++) {
        printf("%d", a[i]);
        if (i != n - 1)
            printf(" ");
    }
    return 0;
}