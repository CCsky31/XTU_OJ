#pragma warning(disable:4996)； //关闭scanf不可用的提示
#pragma warning(disable:6031)； //关闭scanf返回值被忽略
//以下为代码正文

#include <stdio.h>
int main() {
    int T, a, i,n,j;
    scanf("%d", &T);
    while (T--) {
        scanf("%d", &a);
        n = 0;
        for (i = a; i > 1; i--) {
            n++;
            printf("%c", 64 + a);
            for (j = 1; j < n; j++) {
                printf("%c", 64 + i - j + n - 1);
            }
            for (j = 1; j <= 2 * (a - n) - 1; j++) {
                printf("%c",  64 + i);

            }
            for (j = n-1; j >0; j--) {
                printf("%c", 64 + i - j + n - 1);
            }
            printf("%c\n", 64 + a);
        }

        for (j = a; j > 1; j--) printf("%c", 64 + j);
        printf("A", j);
        for (j = 2; j <= a; j++) printf("%c", 64 + j);
        printf("\n");

        n = a;
        for (i = 2; i <= a; i++) {
            n--;
            printf("%c", 64 + a);
            for (j = 1; j < n; j++) {
                printf("%c", 64 + i - j + n - 1);
            }
            for (j = 1; j <= 2 * (a - n) - 1; j++) {
                printf("%c", 64 + i);

            }
            for (j = n - 1; j > 0; j--) {
                printf("%c", 64 + i - j + n - 1);
            }
            printf("%c\n", 64 + a);
        }
    }
    return 0;
}
/*
1:
1

2:
222
212
222

3:
33333
32223
32123
32223
33333

4:
4444444  //鍏ㄩ儴杈撳嚭a 2n-1涓�
4333334  //杈撳嚭a a-1 a 鍏朵腑a-1鏈�2n-3涓� 2(n-1)-1
4322234  //杈撳嚭a a-1 a-2 a-1 a 鍏朵腑a-2鏈�2n-5涓�, 2(n-2)-1
4321234
4322234
4333334
4444444

*/
