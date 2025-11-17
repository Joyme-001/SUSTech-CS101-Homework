/*
 *FILENAME: pa9p2.c
 *PROJECT: String length function with pointer
 *AUTHOR: Joey XU <12510226@sustech.edu.cn>
 *DATE CREATED: November 17th,2025
 *LAST MODIFIED: November 17th,2025
 *MODIFIED BY: Joey XU
 */

#include <stdio.h> 
#include <string.h> 

int my_strlen(char *str){
    int length=0; //initial is 0,we add it after the loop
    while(*str != '\0'){
        str++; //to test next one character!
        length++;
    }
    return length;
}

int main(){ 
// defining string 
char str[] = "Hello, World!"; 
// getting length of str using strlen() 
if(strlen(str) == my_strlen(str)) 
printf("Success :)\n"); 
else 
printf("Failure :(\n"); 
return 0; 
} 