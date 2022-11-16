#include<stdio.h>
int main()
{
    char symbol;
    float num1,num2,result;
    printf("enter + for sum.\n\n- for substraction.\n\n* for multiply.\n\n/ for division\n\n");
    scanf("%c",&symbol);
    switch(symbol)
    {
        case '+':
            printf("Enter two number:\n");
            scanf("%f %f",&num1,&num2);
            //scanf("%f %f\n",&num1,num2);
            result= num1+num2;
            printf("Your result is %.2f",result);
            break;
        case '-':
            printf("Enter two number:\n");
            scanf("%f %f",&num1,&num2);

            if(num1>num2)
                {result= num1- num2;
                printf("Your result is %.2f",result);}
            else
                {result= num2- num1;
                printf("Your result is %.2f",result);}
            break;
        case '*':
            printf("Enter two number:\n");
            scanf("%f %f",&num1,&num2);
            result= num1*num2;
            printf("Your result is %.2f",result);
            break;
        case '/':
            printf("Enter two number:\n");
            scanf("%f %f",&num1,&num2);
            result= num1/num2;
            printf("Your result is %.2f",result);
            break;
        default:
            printf("\nThis is not correct.\nplease enter right symbol.");
            break;

    }
    getch();

    return 0;
}
