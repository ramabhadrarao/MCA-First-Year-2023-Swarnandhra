#include <stdio.h>
 
int main () {

   int numbers[6]; /* numbers is an array of 6 integers */
   int i,j;
 
   /* initialize elements of array numbers to 0 */         
   for ( i = 0; i < 6; i++ ) {
      printf("Enter element at index %d position:",i);
      scanf("%d",&numbers[i]);
       /* set element at location numbers[i]   */
   }
   
   /* output each array element's value */
   for (j = 0; j < 6; j++ ) {
      printf("numbers[%d] = %d\n", j, numbers[j] );
   }
 
   return 0;
}

//output:
ramabhadrarao@ramabhadrarao-Macmini:~/cprograms$ gcc accessingarray.c -o accessingarray
ramabhadrarao@ramabhadrarao-Macmini:~/cprograms$ ./accessingarray 
Enter element at index 0 position:10
Enter element at index 1 position:20
Enter element at index 2 position:30
Enter element at index 3 position:40
Enter element at index 4 position:50
Enter element at index 5 position:60
numbers[0] = 10
numbers[1] = 20
numbers[2] = 30
numbers[3] = 40
numbers[4] = 50
numbers[5] = 60