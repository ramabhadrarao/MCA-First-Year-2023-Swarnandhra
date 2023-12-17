#include<stdio.h>
/*Global variable  can accesiible in  main
 function  and other function also
*/
int mynum=300;
int main()
{
// local variable access in  defined function only
int num=30; // local varible (also automatic)
static int y=10;//static variable 
auto int x=20;//automatic variable

printf("Local Variable: %d", num);
printf("Global  Variable: %d", mynum);
printf("Static  Variable: %d", y);
printf("Auto  Variable: %d", x);


}

