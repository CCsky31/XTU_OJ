#pragma warning(disable:4996)； //关闭scanf不可用的提示
#pragma warning(disable:6031)； //关闭scanf返回值被忽略
//以下为代码正文

#include <stdio.h>
bool prime[1000003];
int primes[78501]; //78499 prime
bool dualPrime[1000003];
int sum[1000003];
const int MAXN = 1000000;

int main() {
    int T, a, b, i, j, c, tmp;

    //埃氏筛
    for (i = 0; i <= MAXN; i++) prime[i] = true;
    prime[0] = prime[1] = false;
    for (i = 2; i <= MAXN; i++) {
        if (!prime[i]) continue;
        for (j = i * 2; j < MAXN; j += i) prime[j] = false;
    }

    c = 0;
    for (i = 0; i <= MAXN; i++) if (prime[i] == true)  primes[c] = i, c++;

    //创建Dual Prime表
    for (i = 0; i <= MAXN; i++) dualPrime[i] = false;
    for (i = 0; i <= 78500; i++) {
        if (primes[i] * 2 > MAXN) {
            break;
        }
        for (j = 1; j <= 78501; j++) {
            if (i == j) {
                continue;
            }
            tmp = primes[i] * primes[j];
            if (tmp > MAXN) {
                break;
            }
            dualPrime[tmp] = true;
            continue;
        }
    }

    //前缀和
    for (i = 1; i <= MAXN; i++) {
        sum[i] = 0;
    }
    for (i = 1; i <= MAXN; i++) {
        sum[i] = sum[i] + sum[i - 1];
        if (dualPrime[i] == true) {
            sum[i]++;
        }
    }

    scanf("%d", &T);
    while (T--) {
        scanf("%d %d", &a, &b);
        c = sum[b] - sum[a-1];
        printf("%d\n", c);
    }
    return 0;
}
