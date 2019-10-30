#pragma warning(disable:4996)； //关闭scanf不可用的提示
#pragma warning(disable:6031)； //关闭scanf返回值被忽略
//以下为代码正文

#include <stdio.h>

void print_blank(int nums){
    int i = nums;
    while(i--){
        printf(" ");
    }
}

void print_letter(int size,int line){
    int i = line-1;
    for(i=0;i<line-1;i++){
        printf("%c",'A'+size-1-i);
    }
    for(i=line-1;i>=0;i--){
        printf("%c",'A'+size-1-i);
    }
}

int main(){
    int T,i,size,blank_num,row_id,row,letter_num;
    scanf("%d",&T);
    while(T--){
        scanf("%d",&size);
        //up
        row_id=1;
        for(row = size - 1;row_id<=row;row_id++){
            blank_num=size - row_id;
            letter_num=row_id;
            print_blank(blank_num);
            print_letter(size,letter_num);
            printf("\n");
        }
        //middle
        letter_num=size;
        print_letter(size,letter_num);
        printf("\n");
        //down
        for(row_id=row;row_id>0;row_id--){
            blank_num=size - row_id;
            letter_num=row_id;
            print_blank(blank_num);
            print_letter(size,letter_num);
            printf("\n");
        }
        
    }
    return 0;
}
