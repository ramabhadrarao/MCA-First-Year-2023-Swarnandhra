#include<studio.h>
void main()
{

     int i = 5;
    // any variable  frefixed with * is known as pointer 
    // it stores address of another variable
     int *ptr;
     ptr=&i;
     printf("Address of i is %d.\n", &i);
     printf("Value of i is %d.\n", i);
     printf("Address of ptr is %d.\n", ptr);
     printf("Value of *ptr is %d.\n", *ptr);

}
