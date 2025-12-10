//输入N* N的矩阵，输出它的转置矩阵。
//
//输入格式 :
//第一行为整数N（1≤N≤100）。
//接着是一个N* N的矩阵。
//
//输出格式 :
//转置矩阵。
//
//输入样例 :
//2
//1 2
//1 2
//
//输出样例 :
//1 1
//2 2

#include <stdio.h>
int a[105][105];    //原数组
int b[105][105];    //转置数组
int main()
{
    int n;
    scanf("%d", &n);
    //读原数组
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    //转转置数组
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            b[i][j] = a[j][i];
        }
    }
    //输出转置数组
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d", b[i][j]);
            if (j != n - 1)
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}