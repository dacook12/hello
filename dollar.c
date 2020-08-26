/** 
 * Author: David Cook
 * Date: 2020/8/25
 * 
 * This program intends to convert US Dollars to British Pounds
 * and Japanese JPY. 10% of the total amount will be taken as 
 * exchange fee. Of the remaining, half will be changed to British
 * Pounds and the other half to JPY.
 * 
 */
 #include <stdlib.h>
 #include <stdio.h>
 
 int main(int argc, char **argv) {
     
     double usDollars = 0;
     printf("Please type the total amount of US Dollars and hit ENTER.");
     scanf("%lf", &usDollars);
     
     double leftoverDollars = (usDollars * .9);
   
     double yen = (leftoverDollars / 2) * 76.8;
     double pounds = (leftoverDollars / 2) * .6;
     printf("You get %lf British Pounds and %lf Japanese JPY.", pounds, yen);
     
 }