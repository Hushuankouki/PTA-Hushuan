//找出具有m行n列二维数组Array的“鞍点”，即该位置上的元素在该行上最大，在该列上最小，其中1 <= m, n <= 10。同一行和同一列没有相同的数。
//
//输入格式 :
//输入数据有多行，第一行有两个数m和n，下面有m行，每行有n个数。
//
//输出格式 :
//按下列格式输出鞍点：
//
//Array[i][j] = x
//
//其中，x代表鞍点，i和j为鞍点所在的数组行和列下标，我们规定数组下标从0开始。
//
//一个二维数组并不一定存在鞍点，此时请输出None。
//
//我们保证不会出现两个鞍点的情况，比如：
//
//3 3
//1 2 3
//1 2 3
//3 6 8
//
//输入样例:
//3 3
//1 2 3
//4 5 6
//7 8 9
//
//输出样例 :
//Array[0][2] = 3

#include <stdio.h>
int arr[15][15];
int main()
{
    int m, n, f;
    f = 1;    //不存在鞍点
    scanf("%d %d", &m, &n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < m; i++) {
        int maxy = 0;    //行上最大的列坐标，打擂
        for (int j = 0; j < n; j++) {
            if (arr[i][maxy] < arr[i][j]) {
                maxy = j;
            }
        }
        int min = 1;    //列上最小
        for (int j = 0; j < m; j++) {
            if (arr[j][maxy] < arr[i][maxy]) {
                min = 0;    //不是列上最小
                break;
            }
        }
        if (min) {
            printf("Array[%d][%d]=%d", i, maxy, arr[i][maxy]);
            f = 0;
            break;
        }
    }
    if (f)
        printf("None");
    return 0;
}