#pragma warning(disable:4996)； //关闭scanf不可用的提示
#pragma warning(disable:6031)； //关闭scanf返回值被忽略
//以下为代码正文

#include <stdio.h>
int main() {
    int T,a,b,c,delta;
    scanf("%d", &T);
    while (T--) {
        scanf("%d %d %d", &a, &b,&c);
        if (a != 0) { //涓�鍏冧簩娆℃柟绋�
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
            if (b != 0) {//涓�鍏冧竴娆℃柟绋�
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
