#include <stdio.h>
#include <inttypes.h>

// Task_1

// int32_t countSeeds(int N) {
//     int count = 0;
//     if (N > 0 && N < 65) {
//         count++;
//         for (char i = 0; i < N - 1; i++)
//         {
//             count *= 2;
//         }
//         return count;
//     } else {
//         printf("Not valid cell quantity");
//     }
// }

//Task_2

// int NOD(int a, int b) {
//     while (a != 0 && b != 0)
//     {
//         if (a > b) a = a % b;
//             else b = b % a;
//     }
//     return a + b;
// }

//Task_4

int numbersSum(int N) {
    int sum = 0;
    for (int i = 1; i <= N; i++)
     sum += i;
    return sum;
}



int main(int args, char** argv) {

//Task_4


int N = 100;
    printf("Sum numbers from 1 to %d is = %d\n", N, numbersSum(N));


//Task_2

//  printf("%d\n", NOD(14, 21));




// Task_1

//     int32_t a; 
//     scanf("%d", &a);

//    printf("%d\n", countSeeds(a));







   return 0;
}


