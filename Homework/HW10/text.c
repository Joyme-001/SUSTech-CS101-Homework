/*
 *FILENAME: pa10p3.c
 *PROJECT: Swapping Function for Strings
 *AUTHOR: Joey XU <12510226@sustech.edu.cn>
 *DATE CREATED: November 24th,2025
 *LAST MODIFIED: November 24th,2025
 *MODIFIED BY: Joey XU
 */

#include <stdio.h>
#include <string.h>
void swap_strs(char*s1,char*s2);
int main() { 
    char *s1,*s2; 
    s1 = "I should print second"; 
    s2 = "I should print first"; 
    swap_strs(s1,s2); 
    printf("s1 is %s\n", s1); 
    printf("s2 is %s\n", s2); 
    return 0; 
} 

void swap_strs(char*s1,char*s2){
    char* temp = s1;
    s1 = s2;
    s2 = temp;
}