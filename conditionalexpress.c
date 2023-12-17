    #include<stdio.h>  
    #include<string.h>  
    int main()  
    {  
        int age = 25;  
        char status;  
        status = (age>22) ? 'M': 'U';  
        if(status == 'M')  
        printf("Married");  
        else  
        printf("Unmarried");  
        return 0;  
    }  
//output:

Married
