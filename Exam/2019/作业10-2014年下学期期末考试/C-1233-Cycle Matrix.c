#pragma warning(disable:4996)£» //¹Ø±Õscanf²»¿ÉÓÃµÄÌáÊ¾
#pragma warning(disable:6031)£» //¹Ø±Õscanf·µ»ØÖµ±»ºöÂÔ
//ÒÔÏÂÎª´úÂëÕýÎÄ

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
4444444  //å…¨éƒ¨è¾“å‡ºa 2n-1ä¸ª
4333334  //è¾“å‡ºa a-1 a å…¶ä¸­a-1æœ‰2n-3ä¸ª 2(n-1)-1
4322234  //è¾“å‡ºa a-1 a-2 a-1 a å…¶ä¸­a-2æœ‰2n-5ä¸ª, 2(n-2)-1
4321234
4322234
4333334
4444444

*/
