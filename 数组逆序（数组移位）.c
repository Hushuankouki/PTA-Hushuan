//有n个整数，使其最后m个数变成最前面的m个数，其他各数顺序向后移m（m < n < 100)个位置。
//
//	输入格式 :
//输入数据有2行，第一行的第一个数为n，后面是n个整数，第二行整数m。
//
//输出格式 :
//按先后顺序输出n个整数。
//
//输入样例 :
//5 1 2 3 4 5
//2
//
//输出样例 :
//4 5 1 2 3

#include <stdio.h>
int a[200];
int b[200];
int main()
{
    int n, m;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    scanf("%d", &m);
    //最后 m 个放到前面，在新数组b中
    for (int i = 0; i < m; i++)
        b[i] = a[n - m + i];
    //前 n - m 个移到后面，在新数组b中
    for (int i = m; i < n; i++)
        b[i] = a[i - m];
    for (int i = 0; i < n; i++) {
        printf("%d", b[i]);
        if (i != n - 1)
            printf(" ");
    }
    return 0;
}