#include<stdio.h>
float C_Fah(float);
float F_Cel(float);
void main()
{
char ty;
float cel, fah, Fa, Ce;

printf("THIS PROGRAM CONVERTS TEMP. FROM CELSIUS TO FAHRENHEIT & VICE VERSA\n");
printf("INDICATE CONVERTION TYPE: ENTER F or f FOR FAHRENHEIT:");
scanf("%c", &ty);
if(ty=='F'||ty=='f'){
printf("\nEnter Temp. in Celsius:");
scanf("%f", &cel);
Fa=C_Fah(cel);
printf("\nTemp. in Fahrenheit=%.2f", Fa);
}
else{
printf("\nEnter Temp. in Fahrenheit:");
scanf("%f", &fah);
Ce=F_Cel(fah);
printf("\nTemp. in Celsius=%.2f\n", Ce);
}
}
float C_Fah(float c)
{
float a;
a=(9*c+32)/5;
return(a);
}
float F_Cel(float f)
{
float b;
b= 5*(f-32)/9;
return(b);
}
