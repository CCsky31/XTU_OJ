#pragma warning(disable:4996)�� //�ر�scanf�����õ���ʾ
#pragma warning(disable:6031)�� //�ر�scanf����ֵ������
//����Ϊ��������

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
