//I ues chatgpt to help me to write some boring sentences. From line 43 to 48.

/*
 *FILENAME: pa11p1.c
 *PROJECT: Arithmetic Operation of Complex Numbers
 *AUTHOR: Joey XU <12510226@sustech.edu.cn>
 *DATE CREATED: December 1st,2025
 *LAST MODIFIED: December 1st,2025
 *MODIFIED BY: Joey XU
 */

 #include <stdio.h>

//The structure Complex
 struct Complex{
    double real;
    double imag;
 };
//The two important functions, which return type of structure Complex
 struct Complex addComplex(struct Complex number1, struct Complex number2);
 struct Complex multiplyComplex(struct Complex number1, struct Complex number2);

 int main(void){

   struct Complex complex1 = {0, 0};
   struct Complex complex2 = {0, 0};
   //Let user input
   printf("Input two parts of complex number 1 (real imag): ");
   scanf("%lf %lf", &complex1.real, &complex1.imag);
   printf("Input two parts of complex number 2 (real imag): ");
   scanf("%lf %lf", &complex2.real, &complex2.imag);
   printf("\n");

   struct Complex sum = addComplex(complex1, complex2);
   struct Complex product = multiplyComplex(complex1, complex2);
   //Output
   printf("Sum of the two complex numbers:\n%.2f + %.2fi\n", sum.real, sum.imag);
   printf("\n");
   printf("Product of the complex numbers:\n%.2f + %.2fi\n", product.real, product.imag);
   return 0;
 }
 
 struct Complex addComplex(struct Complex number1, struct Complex number2){
   double result_real = number1.real + number2.real;
   double result_imag = number1.imag + number2.imag;
   struct Complex result_add_number = {result_real, result_imag};
   return result_add_number;
  }

 struct Complex multiplyComplex(struct Complex number1, struct Complex number2){
   double result_real = number1.real * number2.real - number1.imag * number2.imag;
   double result_imag = number1.real * number2.imag + number1.imag * number2.real;
   struct Complex result_multiply_number = {result_real, result_imag};
   return result_multiply_number;
  }
   