#include<stdio.h>
int main(){
    int i,n,s=0;
    int a[101];
    Mark:scanf("%d",&n);
    if(n != 0){
        s = 0;
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
            if(a[i]%2==0) s=s+a[i];
        }
        printf("%d\n",s);
        goto Mark;
    }
    return 0;
}