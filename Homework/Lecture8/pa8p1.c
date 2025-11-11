/*
 *FILENAME: pa8p1.c
 *PROJECT: Activation functions of a neural network in C
 *AUTHOR: Joey XU <12510226@sustech.edu.cn>
 *DATE CREATED: November 10th,2025
 *LAST MODIFIED: November 10th,2025
 *MODIFIED BY: Joey XU
 */

# include <stdio.h> 
# include <math.h> 

float sigma(float), my_tanh(float), relu(float), l_relu(float);  

int main() { 

float x; 

scanf("%f", &x); 
printf("%f %f %f %f\n", sigma(x), my_tanh(x), relu(x), l_relu(x)); 

return 0;

} 

//sigmoid function
float sigma(float x){
    double devider;
    devider = 1+exp(-x);
    return (1/devider);
}

//tanf function
float my_tanh(float x){
    double a, b;
    a = exp(x)-exp(-x);
    b = exp(x)+exp(-x);
    return (a/b);
}

//the output is the larger one between 0 and x
float relu(float x){
    return x>0? x:0;
}

//if input x is greater or equal to 0,than output x;otherwise output 0.1x
float l_relu(float x){
    return x>=0? x:(0.1*x);
}