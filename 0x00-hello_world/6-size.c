#include<stdio.h> 
 #include<stdlib.h> 
 #include<string.h> 
  
 /** 
  * main - Entry point 
  * 
  * Declaration: 'The program's description' 
  * Return: Always 0 (success) 
  */ 
  
 int main(void) 
 { 
         int int1; 
         char char1; 
         long int int2; 
         long long int int3; 
         float float1; 
  
         printf("Size of a char: %ld byte(s)\n", sizeof(char1)); 
         printf("Size of an int: %ld byte(s)\n", sizeof(int1)); 
         printf("Size of a long int: %ld byte(s)\n", sizeof(int2)); 
         printf("Size of a long long int: %ld byte(s)\n", sizeof(int3)); 
         printf("Size of a float: %ld byte(s)\n", sizeof(float1)); 
         return (0); 
 }
