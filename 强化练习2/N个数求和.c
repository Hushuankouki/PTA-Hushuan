//本题的要求很简单，就是求N个数字的和。麻烦的是，这些数字是以有理数分子 / 分母的形式给出的，你输出的和也必须是有理数的形式。
//
//输入格式：
//输入第一行给出一个正整数N（≤100）。随后一行按格式a1 / b1 a2 / b2 ...给出N个有理数。题目保证所有分子和分母都在长整型范围内。另外，负数的符号一定出现在分子前面。
//
//输出格式：
//输出上述数字和的最简形式 —— 即将结果写成整数部分 分数部分，其中分数部分写成分子 / 分母，要求分子小于分母，且它们没有公因子。如果结果的整数部分为0，则只输出分数部分。
//
//输入样例1：
//5
//2/5 4/15 1/30 -2/60 8/3
//
//输出样例1：
//3 1/3
//
//输出样例2：
//2
//4/3 2/3
//
//输出样例2：
//2
//
//输入样例3：
//3
//1/3 -1/6 1/8
//
//输出样例3：
//7/24


#include <stdio.h>
#include <stdlib.h>
long long gcd(long long a, long long b)
{
    return b == 0 ? a : gcd(b, a % b);
}
int main()
{
    int n;
    long long a, b;
    long long up = 0;    //分子
    long long down = 1;    //分母
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%lld/%lld", &a, &b);
        //相加
        up = a * down + b * up;
        down = b * down;
        //化简
        long long g = gcd(llabs(up), down);
        up /= g;
        down /= g;
    }
    //拆分整数和分数
    long long zheng = up / down;
    long long fen = up % down;
    if (fen < 0)
        fen = -fen;
    //只有整数
    if (fen == 0)
        printf("%lld", zheng);
    //只有分数
    else if (zheng == 0)
        printf("%lld/%lld", up, down);
    //既有整数，也有分数
    else
        printf("%lld %lld/%lld", zheng, fen, down);
    return 0;
}