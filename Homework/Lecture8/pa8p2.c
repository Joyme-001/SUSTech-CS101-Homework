/*
 *FILENAME: pa8p2.c
 *PROJECT: Printing of a positive decimal number
 *AUTHOR: Joey XU <12510226@sustech.edu.cn>
 *DATE CREATED: November 10th,2025
 *LAST MODIFIED: November 11th,2025
 *MODIFIED BY: Joey XU
 */

 # include <stdio.h> 

void print_digits(int); 

int main() { 

int i; 

printf("input a number: "); 
scanf("%d", &i); 
if (i<0){
    printf("-");
}
print_digits(i); 
printf("\n%d\n", i); 

return 0; 
}

/*
*use a recursive solutinon 
*to print every digit of the number
*/

void print_digits(int x){

    int number; //store the absolute value of x
    //Caclute the abs number
    if (x<0){
        number = -x;
    }else{
        number = x;
    }

    int last_digit, pre_digit;

    if ((number/10)<1){
        printf("%d",number); //base case
    }else{
    last_digit = number%10;
    pre_digit = (number-last_digit)/10;
    print_digits(pre_digit);
    printf("%d",last_digit);
    }
}