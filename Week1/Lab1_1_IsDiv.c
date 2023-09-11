#include <stdio.h>


/*
Navn: Ayaanle A Hassan
Lab num : 1.1
Date : 7 Sep 2023


#####################################################################
##           Create a program that can read an integer and tells  ###
##           whether the number is divisible by 5                 ###
#####################################################################

*/


int main()
{

   int num = 93; // first variable num
   
   printf("Enter number : "); // Display the instruction
   scanf("%d", &num); // Read the input i put

   if (num % 5 != 0) // if statment
   {
    printf("\nThe number %d is not div by 5 \n\n", num);

   }
   else{
    printf("\nThe number %d is correct and is div by 5\n\n", num);

   }


   return 0;
   
}