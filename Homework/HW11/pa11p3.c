/*
 *FILENAME: pa11p3.c
 *PROJECT:  Bug Fixing with C structures and unions  
 *AUTHOR: Joey XU <12510226@sustech.edu.cn>
 *DATE CREATED: December 1st,2025
 *LAST MODIFIED: December 1st,2025
 *MODIFIED BY: Joey XU
 */
#include <stdio.h>

enum Shape{
    RECTANGLE, CIRCLE
};
  
struct point { int x, y; }; 
 
struct shape { 
int shape_kind; /* RECTANGLE or CIRCLE */ 
    struct point center; /* coordinates of center */ 
    union { 
        struct { 
          int height, width; 
        } rectangle; 
        struct { 
          int radius; 
        } circle; 
    } u; 
} s; 

int main(void){
    s.shape_kind = RECTANGLE; 
    s.center.x = 10; 
    s.u.rectangle.height = 25; //(c) We need to access a varible step by step!
    s.u.rectangle.width = 8; 
    //s.u.circle = 5; 
    //s.u.radius = 5;
    s.u.circle.radius = 5; //(e)(f) Access radius in structure circle.
    return 0;
}
