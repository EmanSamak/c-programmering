#include <stdio.h>


/*
Navn: Ayaanle A Hassan
Lab num : 1.3
Date : 7 Sep 2023


################################################################################################################
##           I en skoleklasse afleverer hver elev fire opgaver i biologi.                                     ##
##  Hver opgave giver fra 0 til 100 point afhængigt af hvorgodt eleven besvarer spørgsmålene.                 ##
##  Din opgave er at lave et program der hjælper læreren med at regne elevernes karakterer ud.                ##
##  Input til programmet er de fire point-tal som skal være heltal fra 0 til 100.                             ##
##  1.Programmet skal beregne gennemsnittet af de fire point-tal.                                             ##
##  2.Derefter skal programmet beregne karakteren                                                             ##
##  3.Programmet skal udskrive gennemsnittet og karakteren                                                    ##
##                                                                                                            ##
################################################################################################################

*/


int main()
{
   double opgave1, opgave2, opgave3, opgave4; // This is the 4 exam 
   double total, avg; // this is the total & the overage
   

   printf("\n Enter den 1er opgave \n =>"); // The first prompt to use the scanner
    scanf("%lf", &opgave1);

   printf("\n Enter den 2er opgave \n =>");
    scanf("%lf", &opgave2);

   printf("\n Enter den 3er opgave \n =>");
    scanf("%lf", &opgave3);

   printf("\n Enter den 4er opgave \n =>");
    scanf("%lf", &opgave4);


     total = opgave1 + opgave2 + opgave3 + opgave4; // This is the calculation of the total
     avg = total/4; // The calcule of the overage

     printf("\nTotal is : %.2lf", total); // To print
     printf("\nAvg is : %.2lf", avg);
    
    //int total = 22;

    //printf(" \nTotal er :\n => %d ", &total);


    if (total < 0 && total > 100){
      printf("\nError data");
    }
    

     if (avg <= 100 && avg >= 90){
       printf("\nYou got 12 my friend!! \n\n");
       }

       else if (avg >= 80 && avg <= 89){
       printf("\nYou got 10 my friend!! \n\n");
       }

       else if (avg >= 70 && avg <= 79){
         printf("\nYou got 7 my friend!! \n\n");
       }

       else if (avg >= 60 && avg <= 69){
         printf("\nYou got 4 my friend!! \n\n");
       }


       else if (avg >= 40 && avg <= 59){
         printf("\nYou got 2 my friend!! \n\n");
       }

       else if (avg >= 00 && avg <= 39){
         printf("\nYou got 0 my friend!! \n\n");
       }

       else{
         return "Done";
       }

       


   return 0;
   
}