#pragma warning(disable:4996)； //关闭scanf不可用的提示
#pragma warning(disable:6031)； //关闭scanf返回值被忽略
//以下为代码正文

#include<bits/stdc++.h>

void print_blank(int nums) {
    int i = nums;
    while (i--) {
        printf(" ");
    }
}

void print_letter(int size) {
    int i;
    for (i = 0; i < size - 1; i++) {
        printf("%c", 'A' + i);
    }
    for (i = size - 1; i >= 0; i--) {
        printf("%c", 'A' + i);
    }
}

int main() {
    int i, size, blank_num, letter_num, blank_center_num;
    char input_char;
    while (scanf("%c", &input_char) != EOF && getchar()) {
        size = input_char - 'A' + 1;
        //up
        blank_num = 2 * size;
        for (i = 1; i <= size; i++) {
            blank_num--;
            letter_num = i;
            print_blank(blank_num);
            print_letter(letter_num);
            printf("\n");
        }
        //down
        blank_num = size;
        blank_center_num = 2 * size + 1;
        for (i = 1; i <= size; i++) {
            //printf("i=%d size=%d\n",i,size);
            blank_num--;
            blank_center_num -= 2;
            letter_num = i;
            print_blank(blank_num);
            print_letter(letter_num);
            print_blank(blank_center_num);
            print_letter(letter_num);
            printf("\n");
        }

    }
}
