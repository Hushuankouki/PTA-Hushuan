//本题要求实现一个判断素数的简单函数，并利用该函数验证哥德巴赫猜想：任何一个不小于6的偶数均可表示为两个奇素数之和。素数就是只能被1和自身整除的正整数。输入一个不小于6的偶数n，找出两个素数，使它们的和为n。注意：1不是素数，2是素数。
//
//函数接口定义：
//int isPrime(int x);
//void Goldbach(int n);
//
//其中函数isPrime当用户传入参数x为素数时返回1，否则返回0；函数Goldbach按照格式“n = p + q”输出n的素数分解，其中p≤q均为素数。又因为这样的分解不唯一（例如24可以分解为5 + 19，还可以分解为7 + 17），要求必须输出所有解中p最小的解。
//
//裁判测试程序样例：
//#include <stdio.h>
//int isPrime(int x);
//void Goldbach(int n);
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    if (n % 2 == 0)
//        Goldbach(n);
//    return 0;
//}

/* 请在这里填写答案 */
//
//输入样例：
//80
//
//输出样例：
//80 = 7 + 73

int isPrime(int x)
{
    if (x == 1)
        return 0;
    else if (x % 2 == 0)
        return 0;
    else {
        for (int i = 3; i * i < x; i += 2) {
            if (x % i == 0)
                return 0;
        }
    }
    return 1;
}
void Goldbach(int n)
{
    for (int p = 2; p <= n / 2; p++) {
        int q = n - p;
        if (isPrime(q) && isPrime(p)) {
            printf("%d=%d+%d\n", n, p, q);
            break;
        }
    }
}