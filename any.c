#include<stdio.h>

int main()
{
    int mark=0;
    for(int i=1;i<=5;i++)
    {
        char ch;
        scanf("%c",&ch);
        getchar();
        if(ch=='Y')
        {
            if(i<=2) mark+=5;
            else if(i==3) mark+=8;
            else if(i==4) mark+=10;
            else if(i==5) mark+=12;
        }
    }

    printf("%d\n",mark);

}
