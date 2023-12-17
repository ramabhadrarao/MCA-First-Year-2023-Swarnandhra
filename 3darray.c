#include <stdio.h>
int main()
{
int c[2][4][3];
int i,j,k,num;
printf("Enter elements into 3-D array: ");
for(i=0;i<2;i++)
{
for(j=0;j<4;j++)
{
for(k=0;k<3;k++)
{
scanf("%d",&c[i][j][k]);
}
}
}
c[1][1][1] = 85;
for(i=0;i<2;i++)
{
for(j=0;j<4;j++)
{
for(k=0;k<3;k++)
{
printf("\t%d",c[i][j][k]);
}
printf("\n");
}
printf("\n");
}
return 0;
}
//output: 
Enter elements into 3-D array: 
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24

        1       2       3
        4       5       6
        7       8       9
        10      11      12

        13      14      15
        16      85      18
        19      20      21
        22      23      24