#include<stdio.h>

int main(){
    char op;
    float n1,n2;
    float result;
    printf("Enter the first number =\n");
    scanf("%f", &n1);

    printf("Enter the operator(+,-,*,/) =\n");
    scanf(" %c", &op);

    printf("Enter the second number =\n");
    scanf("%f", &n2);
     
    

    if (op =='+')
    {
        result = n1 + n2;
        printf("%f %c %f = %f\n",n1,op,n2,result);
    }
    if (op =='-')
    {
        result = n1 -n2;
        printf("%f %c %f = %f\n",n1,op,n2,result);
    }
    if (op =='*')
    {
        result = n1 *n2;
        printf("%f %c %f = %f\n",n1,op,n2,result);
    }
    if (op =='/')
    {
        result = n1 /n2;
        printf("%f %c %f = %f\n",n1,op,n2,result);
    }

    
}