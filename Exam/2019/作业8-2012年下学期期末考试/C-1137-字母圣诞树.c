#pragma warning(disable:4996)； //关闭scanf不可用的提示
#pragma warning(disable:6031)； //关闭scanf返回值被忽略
//以下为代码正文

#include <stdio.h>
int main() {
    int T,i,n=1,j,p;
    char a=65;
    scanf("%d", &T);
    getchar();
    while (T--) {
        scanf("%c", &a);
        getchar();
        //A 65
        n = 1;
        p = a - 64;
        for (i = a - 64 ; i > 0 ; i--) {
            for (j = p; j > 0; j--) {
                printf(" ");
            }
            printf("%c\n", 64 + n);
            for (j = p-n; j > 0; j--) {
                printf(" ");
            }
            for (j = 2 * n + 1; j > 0; j--) {
                printf("%c", 64 + n);
            }
            printf("\n");
            n++;
        }
    }
    return 0;
}