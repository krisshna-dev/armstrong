#include <stdio.h>
int main(){
    int i;
    for(i=1;i<=50;i++){
        char name[30];
    printf("Please enter your name:\n");
    gets(name);
    char gender;
    printf("Please enter your Gender MALE for 'M' and FEMALE for 'F':\n");
    scanf("%c", &gender);
    int age;
    printf("Please enter your Age:\n");
    scanf("%d", &age);
    char party2[5] = "INC";
    char party1[5] = "BJP";
    char party3[5] = "AAP";
    int voted;

    if (age >= 18)
    {
        if (gender == 'M')
        {
            printf("Please select the party which you want to be vote:\n");
            printf("For BJP enter '1'\n");
            printf("For INC enter '2'\n");
            printf("For AJP enter '3'\n");
            scanf("%d", &voted);
            if (voted == 1)
            {
                printf("Mr %s has voted succesfully on BJP\n", name);
            }
            else if (voted == 2)
            {
                printf("Mr %s has voted succesfully on INC\n", name);
            }
            else if (voted == 3)
            {
                printf("Mr %s has voted succesfully on AJP\n", name);
            }
            else
            {
                printf("Mr %s has voted succesfully on others\n", name);
            }
        }
        else if (gender == 'F')
        {
            printf("are you marride or unmarride if YES enter '1' if NO enter '2':");
            int x;
            scanf("%d", &x);
            if (x == 1)
            {
                printf("Please select the party which you want to be vote\n");
                printf("For BJP enter '1'\n");
                printf("For INC enter '2'\n");
                printf("For AJP enter '3'\n");
                scanf("%d", &voted);
                if (voted == 1)
                {
                    printf("Mrs %s has voted succesfully on BJP", name);
                }
                else if (voted == 2)
                {
                    printf("Mrs %s has voted succesfully on INC", name);
                }
                else if (voted == 3)
                {
                    printf("Mrs %s has voted succesfully on AJP", name);
                }
                else
                {
                    printf("Mrs %s has voted succesfully on others", name);
                }
            }
            else
            {
                printf("Please select the party which you want to be vote\n");
                printf("For BJP enter '1'\n");
                printf("For INC enter '2'\n");
                printf("For AJP enter '3'\n");
                scanf("%d", &voted);
                if (voted == 1)
                {
                    printf("Miss %s has voted succesfully on BJP", name);
                }
                else if (voted == 2)
                {
                    printf("Miss %s has voted succesfully on INC", name);
                }
                else if (voted == 3)
                {
                    printf("Miss %s has voted succesfully on AJP", name);
                }
                else
                {
                    printf("Miss %s has voted succesfully on others", name);
                }
            }
        }
        else
        {
            printf(" Sorry You are not eligible for vote yet\n");
        }
    }
    int a;
    printf("enter '1' for continue and '2 for exit':");
    scanf("%d",&a);
    if(a==2){
        printf("Thank you");
        break;
    }
    }
    
}
