#pragma warning(disable:4996)； //关闭scanf不可用的提示
#pragma warning(disable:6031)； //关闭scanf返回值被忽略
//以下为代码正文

#include <stdio.h>
bool prime[5000003];
int sum[5000003];
const int MAXN = 5000000;

int main() {
    int T, a, b, i, j, c;

    //埃氏筛
    for (i = 0; i <= MAXN; i++) prime[i] = true;
    prime[0] = prime[1] = false;
    for (i = 2; i <= MAXN; i++) {
        if (!prime[i]) continue;
        for (j = i * 2; j < MAXN; j += i) prime[j] = false;
    }
    
    //前缀和
    
    for (i = 1; i <= MAXN; i++) {
        sum[i] = 0;
    }
    for (i = 1; i <= MAXN; i++) {
        sum[i] = sum[i] + sum[i - 1];
        if (prime[i] == true && prime[i + 2] == true) {
            sum[i+2]++;
        }
    }

    scanf("%d", &T);
    while (T--) {
        scanf("%d %d", &a, &b);
        c = sum[b] - sum[a+1];
        printf("%d\n", c);
    }
    return 0;
}
