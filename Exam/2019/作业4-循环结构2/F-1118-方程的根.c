#pragma warning(disable:4996)£» //¹Ø±Õscanf²»¿ÉÓÃµÄÌáÊ¾
#pragma warning(disable:6031)£» //¹Ø±Õscanf·µ»ØÖµ±»ºöÂÔ
//ÒÔÏÂÎª´úÂëÕıÎÄ

#include <stdio.h>
int main() {
    int T,a,b,c,delta;
    scanf("%d", &T);
    while (T--) {
        scanf("%d %d %d", &a, &b,&c);
        if (a != 0) { //ä¸€å…ƒäºŒæ¬¡æ–¹ç¨‹
            delta = b * b - 4 * a * c;
            if (delta == 0) {
                printf("1\n");
            }
            else if (delta > 0) {
                printf("2\n");
            }
            else if (delta < 0) {
                printf("0\n");
            }
        }
        else {
            if (b != 0) {//ä¸€å…ƒä¸€æ¬¡æ–¹ç¨‹
                printf("1\n");
            }
            else {
                if (c == 0) {
                    printf("INF\n");
                }
                else {
                    printf("0\n");
                }
            }
        }
        

    }
    return 0;
}
