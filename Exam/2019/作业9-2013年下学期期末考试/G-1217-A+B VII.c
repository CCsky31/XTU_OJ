#pragma warning(disable:4996)； //关闭scanf不可用的提示
#pragma warning(disable:6031)； //关闭scanf返回值被忽略
//以下为代码正文

#include <stdio.h>
#include <string.h>
int main() {
    char num[8], result[32];
    int length, i, pos = 0;
    while (scanf("%s", num) != EOF && getchar()) {
        length = strlen(num);
        if (strcmp(num, "10000") == 0) {
            printf("MMMMMMMMMM\n");
            continue;
        }
        for (i = 0; i < 32; i++) {
            result[i] = 0;
        }
        pos = 0;
        for (i = 0; i <= length - 1; i++) {
            switch (num[i]) {
            case '1':
                switch (length - i) {
                case 4:
                    result[pos] = 'M'; pos++;
                    break;
                case 3:
                    result[pos] = 'C'; pos++;
                    break;
                case 2:
                    result[pos] = 'X'; pos++;
                    break;
                case 1:
                    result[pos] = 'I'; pos++;
                    break;
                }
                break;
            case '2':
                switch (length - i) {
                case 4:
                    result[pos] = 'M'; pos++; result[pos] = 'M'; pos++;
                    break;
                case 3:
                    result[pos] = 'C'; pos++; result[pos] = 'C'; pos++;
                    break;
                case 2:
                    result[pos] = 'X'; pos++; result[pos] = 'X'; pos++;
                    break;
                case 1:
                    result[pos] = 'I'; pos++; result[pos] = 'I'; pos++;
                    break;
                }
                break;
            case '3':
                switch (length - i) {
                case 4:
                    result[pos] = 'M'; pos++; result[pos] = 'M'; pos++; result[pos] = 'M'; pos++;
                    break;
                case 3:
                    result[pos] = 'C'; pos++; result[pos] = 'C'; pos++; result[pos] = 'C'; pos++;
                    break;
                case 2:
                    result[pos] = 'X'; pos++; result[pos] = 'X'; pos++; result[pos] = 'X'; pos++;
                    break;
                case 1:
                    result[pos] = 'I'; pos++; result[pos] = 'I'; pos++; result[pos] = 'I'; pos++;
                    break;
                }
                break;
            case '4':
                switch (length - i) {
                case 4:
                    result[pos] = 'M'; pos++; result[pos] = 'M'; pos++; result[pos] = 'M'; pos++;
                    result[pos] = 'M'; pos++;
                    break;
                case 3:
                    result[pos] = 'C'; pos++; result[pos] = 'D'; pos++;
                    break;
                case 2:
                    result[pos] = 'X'; pos++; result[pos] = 'L'; pos++;
                    break;
                case 1:
                    result[pos] = 'I'; pos++; result[pos] = 'V'; pos++;
                    break;
                }
                break;
            case '5':
                switch (length - i) {
                case 4:
                    result[pos] = 'M'; pos++; result[pos] = 'M'; pos++; result[pos] = 'M'; pos++;
                    result[pos] = 'M'; pos++; result[pos] = 'M'; pos++;
                    break;
                case 3:
                    result[pos] = 'D'; pos++;
                    break;
                case 2:
                    result[pos] = 'L'; pos++;
                    break;
                case 1:
                    result[pos] = 'V'; pos++;
                    break;
                }
                break;
            case '6':
                switch (length - i) {
                case 4:
                    result[pos] = 'M'; pos++; result[pos] = 'M'; pos++; result[pos] = 'M'; pos++;
                    result[pos] = 'M'; pos++; result[pos] = 'M'; pos++; result[pos] = 'M'; pos++;
                    break;
                case 3:
                    result[pos] = 'D'; pos++; result[pos] = 'C'; pos++;
                    break;
                case 2:
                    result[pos] = 'L'; pos++; result[pos] = 'X'; pos++;
                    break;
                case 1:
                    result[pos] = 'V'; pos++; result[pos] = 'I'; pos++;
                    break;
                }
                break;
            case '7':
                switch (length - i) {
                case 4:
                    result[pos] = 'M'; pos++; result[pos] = 'M'; pos++; result[pos] = 'M'; pos++;
                    result[pos] = 'M'; pos++; result[pos] = 'M'; pos++; result[pos] = 'M'; pos++;
                    result[pos] = 'M'; pos++;
                    break;
                case 3:
                    result[pos] = 'D'; pos++; result[pos] = 'C'; pos++; result[pos] = 'C'; pos++;
                    break;
                case 2:
                    result[pos] = 'L'; pos++; result[pos] = 'X'; pos++; result[pos] = 'X'; pos++;
                    break;
                case 1:
                    result[pos] = 'V'; pos++; result[pos] = 'I'; pos++; result[pos] = 'I'; pos++;
                    break;
                }
                break;
            case '8':
                switch (length - i) {
                case 4:
                    result[pos] = 'M'; pos++; result[pos] = 'M'; pos++; result[pos] = 'M'; pos++;
                    result[pos] = 'M'; pos++; result[pos] = 'M'; pos++; result[pos] = 'M'; pos++;
                    result[pos] = 'M'; pos++; result[pos] = 'M'; pos++;
                    break;
                case 3:
                    result[pos] = 'D'; pos++; result[pos] = 'C'; pos++; result[pos] = 'C'; pos++; result[pos] = 'C'; pos++;
                    break;
                case 2:
                    result[pos] = 'L'; pos++; result[pos] = 'X'; pos++; result[pos] = 'X'; pos++; result[pos] = 'X'; pos++;
                    break;
                case 1:
                    result[pos] = 'V'; pos++; result[pos] = 'I'; pos++; result[pos] = 'I'; pos++; result[pos] = 'I'; pos++;
                    break;
                }
                break;
            case '9':
                switch (length - i) {
                case 4:
                    result[pos] = 'M'; pos++; result[pos] = 'M'; pos++; result[pos] = 'M'; pos++;
                    result[pos] = 'M'; pos++; result[pos] = 'M'; pos++; result[pos] = 'M'; pos++;
                    result[pos] = 'M'; pos++; result[pos] = 'M'; pos++; result[pos] = 'M'; pos++;
                    break;
                case 3:
                    result[pos] = 'C'; pos++; result[pos] = 'M'; pos++;
                    break;
                case 2:
                    result[pos] = 'X'; pos++; result[pos] = 'C'; pos++;
                    break;
                case 1:
                    result[pos] = 'I'; pos++; result[pos] = 'X'; pos++;
                    break;
                }
                break;
            }
        }
        result[pos] = '\0';
        printf("%s\n", result);

    }
}