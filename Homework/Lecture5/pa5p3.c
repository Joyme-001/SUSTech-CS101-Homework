/*
 *FILENAME: pa5p3.c
 *PROJECT: Finding the biggest number
 *AUTHOR: Joey XU <12510226@sustech.edu.cn>
 *DATE CREATED: October 13th,2025
 *LAST MODIFIED: October 17th,2025
 *MODIFIED BY: Joey XU
 */

#include <stdio.h>

int main(){

    int i;                   //i is loop time
    double number=0;            
    double max_number=0;       //It marks down the max number and refresh itself for every loop
    double min_number=0;       //It marks down the min number and refresh itself for every loop

    for (i=0;i>=0;i++) {

        printf("Enter a number:");
        scanf("%lf",&number);

        if (number>max_number){
            max_number=number;   //Refreshing the max

        }

        if (number<min_number){

            min_number=number;   //Refreshing the min,the additional requirement in bb's txet

        }
    
        if (number<=0) {

            printf("\nThe largest number and the smallest number entered were %lf and %lf",max_number,min_number);
            break;     //end the for loop

        }
        
    }

    return 0;

}
