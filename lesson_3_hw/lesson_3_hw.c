#include <stdio.h>

int main(int argc, char const *argv[])
{
    
    // Task 1

// int num_1, num_2, num_3, num_4, num_5, max;

// printf("Enter number: \n"); 
// scanf ("%d %d %d %d %d", &num_1, &num_2, &num_3, &num_4, &num_5);

//  if (num_1 > num_2) {
//         max = num_1;
//         max = num_2;
//         if (max < num_3) {
//             max = num_3;
//             if (max < num_4) {
//                 max = num_4;
//                 if (max < num_5) {
//                     max = num_5;
//                 }
//             }
//         }
//     }
//     if (num_1 < num_2) {
//         max = num_1;
//         max = num_2;
//         if (max < num_3) {
//             max = num_3;
//             if (max < num_4) {
//                 max = num_4;
//                 if (max < num_5) {
//                     max = num_5;
//                 }
//             }
//         }
//     }

// printf("\n");
// printf ("%d", max);


// Task 2


// int num_1, num_2, num_3, num_4, num_5, min;

// printf("Enter number: \n"); 
// scanf ("%d %d %d %d %d", &num_1, &num_2, &num_3, &num_4, &num_5);
// min = num_1<num_2 ? num_1 : num_2; 
// min = min < num_3 ? min : num_3;
// min = min < num_4 ? min : num_4;
// min = min < num_5 ? min : num_5;

// printf("\n");
// printf ("%d", min);


// Task 3

// printf ("Enter number: \n");
// int a, b ,c; 
// scanf ("%d %d %d", &a, &b, &c);
// if (a < b && b < c)
// printf ("yes");
// else 
// printf ("no");

//Task 4 

printf ("Enter number: \n"); 
int winter, spring, summer, autumn, year;
scanf ("%d", &year);

if (year ==1)
   printf ("winter");
   else if (year ==2)
       printf("winter");
           else if (year ==3)
           printf("spring");
               else if (year ==4)
               printf("spring");        
                else if (year ==5)
                printf("spring"); 
                else if (year ==6)
                printf("summer");     
                   else if (year ==7)
                     printf("summer"); 
                        else if (year ==8)
                        printf("summer");
                        else if (year ==9)
                         printf("autumn");
                         else if (year ==10)
                         printf("autumn");
                         else if (year ==11)
                         printf("autumn");
                         else if (year ==12)
                         printf("winter");
                            else 
                            printf ("There are 12 months in a year");
//                          

    return 0;
}



