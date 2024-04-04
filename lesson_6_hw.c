#include <stdio.h>

    // Task_1

// int recur (int i)
// {

// if (i >= 10 )
//     recur (i / 10); 
// printf ("%d ", i % 10);
// }





    // Task_2

// void from_a_to_b(int a, int b) 
// {
//     printf("%d ", a);
//     if (a == b) return;
//     if (a < b) from_a_to_b(++a, b);
//         else from_a_to_b(--a, b);

// }




    // Task_4

    // void all_odd(void) {
    // int number;
    // scanf("%d", &number);
    // if (number == 0) return;
    // if (number % 2 == 1) printf("%d ", number);
    // all_odd();
// }


    //Task_5

    int acounter(void) {
    char symbol;
    static int counter = 0;;
    scanf("%c", &symbol);
    if (symbol == '.') return counter;
    if (symbol == 'a') counter++;
    acounter();
}


int main(int argc, char const *argv[])
{
// Task_1

// int i=123;
// recur(i);

// Task_2

//  from_a_to_b(23, 10);

// Task_4
//all_odd();

// Task_5

printf("%d", acounter());









    return 0;
}
