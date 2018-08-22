#include <stdio.h>
#include<conio.h>

//Program to compute Thevenin's equivalent resistance for n resistors
int main(){

     int n,i; // Declarations: n is number of resistors, i is loop counter

     printf("Program: Thevenin's equivalent resistance of n resistors\n");
     printf("--------------------------------------------------------\n\n");
     printf("Enter number of resistors, n: ");
     scanf("%d", &n); // read n
     float R[n]; //declare array of n floats to store resistance values

     // FOR loop to get n resistance values
     for (i=0; i<n; i++) {
         printf("\nEnter value of %dth resistor in ohms: ", i+1);
         scanf("%f", &R[i]); // Save (i+1)th resistance to R[i]
         // That way, R1 value is stored in R[0], R2 in R[1] and so on...
     }

     int isParallel = 1; // A 'boolean' variable to keep track of operations
     // For parallel combination, isParallel = 1
     // For series combination, isParallel = 0

     // Note that first combination is parallel

     int m = n-1; // to be used as upper limit in FOR loop below
     // FOR loop to calculate Thevenin resistance
     for (i=0; i<m; i++) {
         // In this FOR loop, first partial result is stored in R[1],
         // Second partial result is stored in R[2]...and so on....
         // Final result is thus stored in R[m]
         if (isParallel == 1) {
            // Block that executes parallel combination
            R[i+1] = R[i]*R[i+1]/(R[i]+R[i+1]);
            isParallel = 0; // toggle isParallel towards next iteration
         }
         else {
              // Block that executes series combination
              R[i+1] = R[i]+R[i+1];
              isParallel = 1; // toggle isParallel towards next iteration
         }
     }
     printf("\nEquivalent Thevenin resistance, Rt = %.2f ohms", R[m]);
     printf("\n\n\nPress any key to exit...");
     getch();
     return 0;
}
