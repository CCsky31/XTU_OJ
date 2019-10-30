#pragma warning(disable:4996)； //关闭scanf不可用的提示
#pragma warning(disable:6031)； //关闭scanf返回值被忽略
//以下为代码正文

#include <stdio.h>
#include <string.h>

int main() {
    int T,i1,i2,Now=0,i=0;
    char s1[16],s2[16];
    scanf("%d", &T);
    while (T--) {
        scanf("%s %s", s1, s2);
        i1 = strlen(s1);
        i2 = strlen(s2);
        i = i1 + i2;
        i1 = 0;
        Now = 0;
        while (i--) {
            if (Now == 0) {
                printf("%c", s1[i1]);
                i1++;
                Now = 1;
            }
            else {
                printf("%c", s2[i2-1]);
                i2--;
                Now = 0;
            }
        }
        printf("\n");
    }
    return 0;
}
