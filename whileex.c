#include<stdio.h>
int main()
{
    int num;
    //sample program for number Pyramid
    printf("\n Enter any +ve Number Between 1-20:");
    scanf("%d",&num);
    
    
    if((num>=1)&&(num<=20))
    {
        int i=1; // intial value
        while(i<=num) // condition
        {

            int w=num; // initial value         
            while(w>=i)//condition 
            {
                printf("  ");
                w--; //increment
            }
            int j=1; // initial value 
            while(j<=i)//condition 
            {
                printf("%4d",j);
                
                j++; //increment
            }
            printf("\n");
            i++; //increment

        }
    }
    else 
    {
        printf("\n Please Enter a Valid Number between 1-20");
    }

}

//output:



 Enter any +ve Number Between 1-20:  20       
                                           1
                                         1   2
                                       1   2   3
                                     1   2   3   4
                                   1   2   3   4   5
                                 1   2   3   4   5   6
                               1   2   3   4   5   6   7
                             1   2   3   4   5   6   7   8
                           1   2   3   4   5   6   7   8   9
                         1   2   3   4   5   6   7   8   9  10
                       1   2   3   4   5   6   7   8   9  10  11
                     1   2   3   4   5   6   7   8   9  10  11  12
                   1   2   3   4   5   6   7   8   9  10  11  12  13
                 1   2   3   4   5   6   7   8   9  10  11  12  13  14
               1   2   3   4   5   6   7   8   9  10  11  12  13  14  15
             1   2   3   4   5   6   7   8   9  10  11  12  13  14  15  16
           1   2   3   4   5   6   7   8   9  10  11  12  13  14  15  16  17
         1   2   3   4   5   6   7   8   9  10  11  12  13  14  15  16  17  18
       1   2   3   4   5   6   7   8   9  10  11  12  13  14  15  16  17  18  19
     1   2   3   4   5   6   7   8   9  10  11  12  13  14  15  16  17  18  19  20
