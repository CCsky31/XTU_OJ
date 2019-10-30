#pragma warning(disable:4996)； //关闭scanf不可用的提示
#pragma warning(disable:6031)； //关闭scanf返回值被忽略
//以下为代码正文

#include <bits/stdc++.h>
#define maxn 1000005
#define mod 1000000007
long long f[maxn], dp[maxn];
int n;
void init() {
    dp[1] = 1;
    for (int i = 2; i < maxn; i++)
        dp[i] = 2 * dp[i - 1] % mod;
    f[1] = 0;
    f[2] = 1;
    for (int i = 3; i < maxn; i++)
        f[i] = (f[i - 1] + f[i - 2] + dp[i - 1]) % mod;
}
int main() {
    init();
    int T;
    scanf("%d",&T);
    while (T--) {
        scanf("%d", &n);
        printf("%d\n", f[n]);
    }
    return 0;
}
