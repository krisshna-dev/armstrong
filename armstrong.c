#include<stdio.h>
int main(){
    int n,r,c,sum=0;
    printf("enter nnumber: ");
    scanf("%d",&n);
    c=n;

    while(n>0){
        r=n%10;
        sum=(r*r*r)+sum;
        n=n/10;
    }
    if(c==sum){
        printf("%d is armstrong number\n",c);
    }

    else{
        printf("%d is not armstrong number",c);
    }
}
