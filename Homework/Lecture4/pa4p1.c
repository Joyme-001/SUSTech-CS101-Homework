/*
 *FILENAME: pa4p1.c
 *PROJECT: If Structures Grade Conversion
 *AUTHOR: Joey XU <12510226@sustech.edu.cn>
 *DATE CREATED: September 29,2025
 *LAST MODIFIED: September 29,2025
 *MODIFIED BY: Joey XU
 */

 #include <stdio.h>
 int main()
 {
    int g;
    printf("input a score as an integer\n"); //prompt the uesr to input a score
    scanf("%d",&g);
    /*In this program,
    the rules for the conversion are: 
    a score between 90~100 is A, a score between 80~89 is a B a score between 70 and 79 is a C, a 
    score between 60 and 69 is a D, and a score below 60 is an F. 
    */
        if(g>=90&&g<=100){
            printf("Your grade is A\n");
        }
        else if(g>=80&&g<=89){
            printf("Your grade is B\n");
        }
        else if(g>=70&&g<=79){
            printf("Your grade is C\n");
        }
        else if(g>=60&&g<=69){
            printf("Your grade is D\n");
        }
        else{
            printf("Your grade is F\n");
        }
    }
