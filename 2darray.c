    #include <stdio.h>    
    int  main ()    
    {    
        int arr[3][3],i,j;     
        for (i=0;i<3;i++)    
        {    
            for (j=0;j<3;j++)    
            {    
                printf("Enter a[%d][%d]: ",i,j);                
                scanf("%d",&arr[i][j]);    
            }    
        }    
        printf("\n printing the elements ....\n");     
        for(i=0;i<3;i++)    
        {    
            printf("\n");    
            for (j=0;j<3;j++)    
            {    
                printf("%d\t",arr[i][j]);    
            }    
        }  
        return 0;  
    }   

    //output:
Enter a[0][0]: 23
Enter a[0][1]: 45
Enter a[0][2]: 85
Enter a[1][0]: 78
Enter a[1][1]: 45
Enter a[1][2]: 5
Enter a[2][0]: 6
Enter a[2][1]: 7
Enter a[2][2]: 8

 printing the elements ....

23      45      85
78      45      5
6       7       8     