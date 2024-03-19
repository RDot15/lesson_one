#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
// не все библиотеки используются 


int main(void)
{

   // Task_1    

	// printf("Enter numbers: \n"); 
	// int num_1, num_2, num_3, sum, sum_2; 
	// scanf("%d %d %d", &num_1, &num_2, &num_3);
	// sum=num_1+num_2+num_3;
	// printf("%d + %d + %d = %d", num_1, num_2, num_3, sum);
	
    // Task_2

	// printf("Enter numbers: \n"); 
	// int num_1, num_2, num_3, sum, sum_2; 
	// scanf("%d %d %d", &num_1, &num_2, &num_3);
	// sum_2=num_1*num_2*num_3;
	// sum=num_1+num_2+num_3;
	// printf("%d + %d + %d = %d", num_1, num_2, num_3, sum);
	// printf("\n");
	// printf("%d * %d * %d = %d", num_1, num_2, num_3, sum_2);
	
	// Task_3

  	// printf("Enter numbers: \n"); 
	// int num_1, num_2, diff;
	// scanf("%d %d", &num_1, &num_2);
	// diff=num_1-num_2;
	// printf ("%d - %d = %d", num_1, num_2, diff);

	//Task_4

	int num_1, num_2, num_3, num_4,  count;
	float AVG; 
	printf ("How many numbers are there ? Enter: \n");
	scanf ("%d", &count);
	printf ("Enter number:\n");
	scanf ("%d %d %d %d", &num_1, &num_2, &num_3, &num_4);
	AVG= (num_1+num_2+num_3+num_4) /count;
	printf ("\n");
	printf (" (%d + %d + %d +%d ) / %d = %.2f ", num_1, num_2, num_3, num_4, count, AVG);




    return 0;
}

