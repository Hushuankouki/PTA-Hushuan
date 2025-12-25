//素数又称质数。指一个大于1的自然数，除了1和此整数自身外，不能被其他自然数整除的数。我们定义：如果一个素数是完美的素数，当且仅当它的每一位数字之和也是一个素数。现在给你一个正整数，你需要写个程序判断一下这个数按照上面的定义是不是一个完美的素数。
//
//输入格式 :
//输入包含多组测试数据。
//每组测试数据只包含一个正整数 n(1 < n <= 10 ^ 6)。
//
//    输出格式 :
//对于每组测试数据，如果 n 是完美的素数，输出“YES”，否则输出“NO”(输出均不含引号)。
//
//输入样例 :
//在这里给出一组输入。例如：
//11
//13
//
//输出样例 :
//在这里给出相应的输出。例如：
//YES
//NO

#include <stdio.h>
int isprime(int n)
{
    if (n == 1)
        return 0;
    else if (n == 2)
        return 1;
    else if (n % 2 == 0)
        return 0;
    else {
        for (int i = 3; i * i < n; i += 2) {
            if (n % i == 0)
                return 0;
        }
    }
    return 1;
}
int main()
{
    int n, m;
    while (scanf("%d", &n) == 1) {
        m = 0;
        int t = n;
        while (t > 0) {
            m += t % 10;
            t /= 10;
        }
        if (isprime(n) && isprime(m))
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}