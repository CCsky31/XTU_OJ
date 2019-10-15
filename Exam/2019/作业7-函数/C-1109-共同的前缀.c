#pragma warning(disable:4996)； //关闭scanf不可用的提示
#pragma warning(disable:6031)； //关闭scanf返回值被忽略
//以下为代码正文

#include <stdio.h>

int main() {
    int T,t=0,K,i,judge,sign,n;
    char str[21][201];
    scanf("%d", &T);
    while (T--) {
        t++;
        scanf("%d", &K);
        getchar();
        for (i = 0; i < K; i++) {
            scanf("%s", str[i]);
            getchar();
        }
        if (K == 1) {
            printf("Case %d: %s\n",t,str[0]);
            continue;
        }
        i = 0;
        printf("Case %d: ", t);
        judge = 0; 
        while (judge == 0){
            sign = str[0][i];
            if (sign == '\0')
                goto outside;
            for (n = 1; n < K; n++) {
                if (str[n][i] != sign) {
                    judge = 1;
                    goto outside;
                }
            }
            printf("%c", sign);
            i++;
        }
        outside:
        printf("\n");
    }
    return 0;
}
