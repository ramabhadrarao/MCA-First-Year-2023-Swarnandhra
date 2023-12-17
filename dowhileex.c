#include<stdio.h>
int main()
{
    int num;
    //sample program for reverse  number Pyramid
    printf("\n Enter any +ve Number Between 1-20:");
    scanf("%d",&num);
    
    
    if((num>=1)&&(num<=20))
    {
        int i=num;
        do{
            int w=num;
            do{
                printf("  ");

             w--;
            }while(w>=i);




            int j=1;
            do{
                printf("%4d",j);
                j++;
            }while(j<=i);


            printf("\n");
            i--;
        }while(i>=1);
       
    }
    else 
    {
        printf("\n Please Enter a Valid Number between 1-20");
    }

}

//output:

 Enter any +ve Number Between 1-20:     20
 
    1   2   3   4   5   6   7   8   9  10  11  12  13  14  15  16  17  18  19  20
       1   2   3   4   5   6   7   8   9  10  11  12  13  14  15  16  17  18  19
         1   2   3   4   5   6   7   8   9  10  11  12  13  14  15  16  17  18
           1   2   3   4   5   6   7   8   9  10  11  12  13  14  15  16  17
             1   2   3   4   5   6   7   8   9  10  11  12  13  14  15  16
               1   2   3   4   5   6   7   8   9  10  11  12  13  14  15
                 1   2   3   4   5   6   7   8   9  10  11  12  13  14
                   1   2   3   4   5   6   7   8   9  10  11  12  13
                     1   2   3   4   5   6   7   8   9  10  11  12
                       1   2   3   4   5   6   7   8   9  10  11
                         1   2   3   4   5   6   7   8   9  10
                           1   2   3   4   5   6   7   8   9
                             1   2   3   4   5   6   7   8
                               1   2   3   4   5   6   7
                                 1   2   3   4   5   6
                                   1   2   3   4   5
                                     1   2   3   4
                                       1   2   3
                                         1   2
                                           1
