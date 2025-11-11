/*
 *FILENAME: pa5p1.c
 *PROJECT: Finding prime numbers again
 *AUTHOR: Joey XU <12510226@sustech.edu.cn>
 *DATE CREATED: October 13th,2025
 *LAST MODIFIED: October 17th,2025
 *MODIFIED BY: Joey XU
 */

 /*
 The contiune statement at the end of outer loop is not necessery in the original code,Because:
 Frist,after the continue statement,there is no more code(loop) to execute, while continue aims to jump to the next one.
 Second,Removing continue will have no effect to the behavior of the program.
 If we remove it:
 
 else {
     nothing here
}

i will still change to the next value automatically,since there is no other loop after if-else block.
 */

#include <stdio.h> 
 
int main() { 

    int j ;   //Divisors
    int prime_count = 0;   //It count prime numbers
    int high=0 ; 
    int low=0 ;
    int number_to_test;   //It records the number need to be test

    //Let uesr enter the higher and lower number
    printf("Enter the high number:\n");

    scanf("%d", &high);

    printf("Enter the low number:\n");

    scanf("%d", &low);

    //Is the input legal?
    if (high<=low){

        printf("\nYou entered the wrong higher number and smaller number\n");

    }
        else
{

    printf("All the primes between these two numbers:\n");  //Begining of the output

    if(low==1){   //1 isn't a prime number
        low++;
    }

    // Outer loop to iterate through numbers low to high
    for (number_to_test=low;number_to_test<=high;number_to_test++){

        int is_prime = 1; 
 
        // Inner loop to check for divisors 
        
        for (j = 2; j <= number_to_test / 2; j++) { 
            // If number_to_test is divisible by j, it's not a prime it is not necessary to consider the number is more than or i/2
            if (number_to_test % j == 0) { 
                is_prime = 0; // Set flag to indicate not prime 
                break;      // No need to check further divisors, exit inner loop and save time
            } 

        } 

        // If is_prime is still 1, the number is prime 
        if (is_prime) { 
            printf("%d \n", number_to_test); 
            prime_count++; 
        } 

    }

}

    printf("\nWe found %d prime number.\n",prime_count);
 
    printf("\nSearch complete.\n"); 

    return 0;

}