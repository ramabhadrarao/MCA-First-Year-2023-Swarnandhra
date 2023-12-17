#include<stdio.h>
int main()
{
    int num;
    //sample program for number Triangle
    printf("\n Enter any +ve Number Between 1-20:");
    scanf("%d",&num);
    if((num>=1)&&(num<=20))
    {
        for(int i=1;i<=num;i++)
        {
            for(int j=1;j<=i;j++)
            {
                printf("%d\t",i);
            }
            printf("\n");

        }
    }
    else 
    {
        printf("\n Please Enter a Valid Number between 1-20");
    }

}

//output:
 Enter any +ve Number Between 1-20:5
1	
2	2	
3	3	3	
4	4	4	4	
5	5	5	5	5	
