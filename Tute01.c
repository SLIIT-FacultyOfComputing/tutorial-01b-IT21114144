/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  float mrk1 , mrk2 , tot , avg ;

  printf("\nEnter mark 1 : ") ;
  scanf("%f" , &mrk1) ;

  printf("Enter mark 2 : ") ;
  scanf("%f" , &mrk2) ;

  tot = mrk1 + mrk2 ;
  avg = tot / 2 ;

  printf("\nAverage is %.2f " , avg ) ;
  
  return 0;
}

