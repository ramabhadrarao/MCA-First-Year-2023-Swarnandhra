#include<stdio.h>
int main()
{
    for(int i=1;i<=10;i++)
    {
        if(i==5)
        {
            continue;
        }
        printf("\n The i value is %d",i);
    }
    return 0;
}

//output:

 The i value is 1
 The i value is 2
 The i value is 3
 The i value is 4
 The i value is 6
 The i value is 7
 The i value is 8
 The i value is 9
 The i value is 10
