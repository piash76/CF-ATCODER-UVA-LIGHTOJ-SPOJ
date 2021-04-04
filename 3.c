#include<stdio.h>

int main()
{

    char d;
    int a,b,s;

    scanf("%c",&d);
    scanf("%d %d",&a,&b);


    switch(d)
    {
    case '+':
        {
            s=a+b;
            printf("%d\n",s);
            break;
        }
    case '-':
        {
            s=a-b;
            printf("%d\n",s);
            break;
        }
    case '*':
        {
            s=a*b;
            printf("%d\n",s);
            break;
        }
    case '/':
        {
            s=a/b;
            printf("%d\n",s);
            break;
        }

    case '%':
        {
            s=a%b;
            printf("%d\n",s);
            break;
        }


    default:
        {
            printf("OPERATOR NOT FOUND");
            break;
        }
    }





}
