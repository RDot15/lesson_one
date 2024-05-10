#include <stdio.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
    setlocale (LC_ALL, "rus"); // проблема в кодировке. не использовал

        //Task_1

    // int i, b;
    // printf(" Enter number first \n");
    // scanf("%d", &i);
    // printf("Enter number second \n");
    // scanf("%d", &b);

    // int sum = 0;
    // for (i; i<=b; i++){
    // sum = sum + (i*i);

    // }

    // printf("%d", sum);

        //Task_2

    // int num;
    // printf("Enter number: \n");
    // scanf("%d", &num);
    // if (num / 100> 9){
    //     printf("NO");
    // }
    // else 
    // printf ("Yes");
    
    // task_two_4HW
    //переработанный вариант
    
    // int a = 723;
    
    // if (a/1000 > 0)
    //     printf("false");
    // else 
    // printf("true");

    //Task_3
    
    
    
    // temporary decision

//     	printf("Enter number: \n");
//	    int num, a;
//	    scanf("%d", &num);
//	   
//	    while (num > 0)
//	   {
//	   	
//	   	a = num % 2;
//	   	if(a %2 != 0)
//	   	{
//	   		printf("NO true"); 
//		    break;
//	    }
//	    	
//		     num /= 10;
//	   	 
//	   }


//      Another variant

//
//      printf("Enter number: \n");
//	    int num, a;
//	    scanf("%d", &num);
//	   
//	   while (num > 0)
//	   {
//	   	
//	   	a = num % 2;
//	   	if(a % 2)
//	   	{
//	   	return 1;	
//	    }
//	    ///	   	
//		 	num /= 10;
//	   	 
//	   }

// task_three_4HW
// переработка 3 задачи
    
// int count = 0;
// int a = 1624; 
// while (a > 0)
// {
//     if (a % 2 != 0)
//     count ++;
//     a/=10;
// }
// (count > 0) ? printf ("NO") : printf ("YES");


    
 
   // Task_4 
   
//    int num;
//    printf ("Enter number : \n");
//    scanf("%d", &num);
   
//    while (num > 0)
//    {
//     int a = num % 10;
//     printf("%d ", a);

//     num /= 10;
//    }
    
    // Task_5
    // Простое решение 

int num = 21;
int sum = 0;
int sum_2 = 1;

    while (num>0)
    {
        int a = num % 10;
      
        sum +=a;
        sum_2 *= a;

        num /= 10;
    }

    if (sum == sum_2)
    {
        printf("Yes");
    
    }
    else 
    printf("No");
    
   

    return 0;
}


