#include<stdio.h>
void sum(int i, int j){
    printf("%d + %d = %d\n",i,j,i+j);
}

void sub(int i, int j){
    printf("%d - %d = %d\n",i,j,i-j);
}

void mul(int i, int j){
    printf("%d * %d = %d\n",i,j,i*j);
}

void div(int i, int j){
    printf("%d / %d = %d\n",i,j,i/j);
}

void mod(int i, int j){
    printf("%d %% %d = %d\n",i,j,i%j);
}
void main(){
    int a,b,choice;
   
        printf("enter your first number : ");
        scanf("%d",&a);
       
        printf("enter your second number : ");
        scanf("%d",&b);
       
        do{
            printf("\npress 1 for +\n");
            printf("press 2 for -\n");
            printf("press 3 for *\n");
            printf("press 4 for /\n");
            printf("press 5 for %\n");
            printf("press 0 for exit\n\n");
            printf("enter your choice : ");
            scanf("%d",&choice);
           
                switch(choice){
                   
                    case 1:
                        sum(a,b);
                    break;
                   
                    case 2:
                        sub(a,b);
                    break;
                   
                    case 3:
                        mul(a,b);
                    break;
                   
                    case 4:
                        div(a,b);
                    break;
                   
                    case 5:
                        mod(a,b);
                    break;
                       
                    case 0:
                        printf("\nyou are exited.");
                    break;
                   
                    default:
                        printf("\ninseart valid number.\n");
                    break;
                }
        }while(choice!=0);
}
