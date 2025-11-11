//With the help of Deepseek, she told me how to convert the char.

/*
 *FILENAME: pa7p3.c
 *PROJECT: Palindrome recognition function
 *AUTHOR: Joey XU <12510226@sustech.edu.cn>
 *DATE CREATED: October 27th,2025
 *LAST MODIFIED: November 4th,2025
 *MODIFIED BY: Joey XU
 */

#include <stdio.h> 
#include <string.h> 
#include <ctype.h>

int isPalindrome(char a[]){

    if (a == NULL) {  //For Null
        return 0;
    }

    int j;
    int length = strlen (a);

    if (length == 0){  //For ""
        return 1;
    }

    // Convert string to lowercase

    for (j=0 ; j<length ; j++){  // Loop through each character
            if (tolower(a[j]) != tolower(a[length-1-j])) {
                return 0;
            }
        }
    return 1;
}

// Use this main to test your isPalindrome function 
int main() { 
    char *testStrings[] = { 
        "Madam",              // Palindrome (case-insensitive) 
        "racecar",            // Palindrome 
        "Hello",              // Not a palindrome 
        "12321",              // Numeric palindrome 
        "12345",              // Not a palindrome 
        "",                   // Empty string (considered palindrome) 
        NULL                  // NULL (not a palindrome) 
    }; 
     
    int numTests = sizeof(testStrings) / sizeof(testStrings[0]); 
     
    // Run tests 
    for (int i = 0; i < numTests; i++) { 
        char *str = testStrings[i]; 
         
        printf("Test %d: ", i + 1); 
        if (str == NULL) { 
            printf("Input: NULL "); 
        } else { 
            printf("Input: \"%s\" ", str); 
        } 
         
        if (isPalindrome(str)) { 
            printf("-> IS a palindrome\n"); 
        } else { 
            printf("-> is NOT a palindrome\n"); 
        } 
    }     
    return 0; 
}