#include <stdio.h>
#include <limits.h>
#include <inttypes.h>


// Task_1_сортировка по возрастанию 

// void bubble_sort (int arr[], int size)
// {
//     int temp = 0, i,j;

//     for (i = 0 ; i < size -1; i++)
//     {
//         for (j = 0; j < size - i - 1; j++)
//         {
//             if (arr[j] > arr[j+1])
//             {
//             temp = arr[j];
//             arr[j] = arr[j+1];
//             arr[j+1] = temp; 
//             }
//         }
//     }
// }



/*
 void print_array (int arr[], int size)
{
    for (int i = 0; i< size; i++)
    {
        printf ("%d ", arr[i]);    
    } 

}
 */


// Task_2_сортровка по четному началу

// int sort_even_odd (int arr[], int size, int odd[], int even[])
// {
//        int count_odd = 0;
//        int count_even = 0;

//        for (int i = 0; i < size; ++i)
//        {
//         if (arr[i] % 2)
//             odd[count_odd++] = arr[i];
//         else 
//             even[count_even++] = arr[i];    
//        }
  
//         return count_odd;
// }

// Task_3 максимальный элемент массива

// int max_number_array (int arr[], int count)
// {
//     int max = INT_MIN;
//     for (int i = 0; i < count; i++)
//     {
//         if (arr[i] > max)
//             max = arr[i];
//     }
//     return max;
// }

//Task_4 два одинаковых

// int is_two_same(int size, int arr[])
// {
//     for (int i = 0; i < size ; i++)
//     {
//          for (int j = i + 1; j < size; j++)
//          {
//             if (arr[i] == arr[j])
//                 return 1;
//          }    
//     } return 0;  
// }


// Task_5 поменять местами


void change_max_min (int size, int arr[])
{
    int max = INT_MIN;
    int min = INT_MAX;
    int index_max;
    int index_min;
  
    int t;
    for (int i = 0; i< size; i++)
    {
        if (arr[i] < min)
        {
                min = arr[i];
                index_min = i;
        }
        

        if (arr[i] > max)
        {
            max = arr[i];
            index_max = i;    
        }

    }

    arr[index_min] = max;
    arr[index_max] = min;

    for (int i = 0; i < size; i++)
    {
        printf ("%d ", arr[i]);
    }


}

void print_array (int size, int arr[])
{
    for (int i = 0; i < size ; i++)
    {
        printf ("%d ", arr[i]);
    }


}



int main(int argc, char const *argv[])
{

// Task_1_сортировка по возрастанию   

//  int arr[]={1,4,2,3,5};
//  int size = sizeof(arr)/sizeof(arr[0]);

 // bubble_sort(arr, size);
// print_array(arr, size);


// Task_2_сортровка по четному началу

// int size = 10;
// int arr[] = {1 ,2 ,3 ,4 ,5 ,235 ,2};
// int even[size];
// int odd [size];
// sort_even_odd(arr, size, odd, even);

// Task_3 максимальный элемент массива

// int size = 7;
// int arr[] = {1 ,2 ,3 ,4 ,5 ,235 ,2};
// printf ("%d", max_number_array (arr, size)) ;

//Task_4 два одинаковых

// enum {size = 10};
// int arr[] = {223,23,5,11,99,1,8,22,55,32};
// printf (is_two_same(size, arr) == 1 ? "Yes" : "No");

//Task_5 поменять местами

int size = 6;
int arr[] = {1 ,2 ,3 ,4 ,5 ,235};
print_array(size ,arr);
printf ("\n");
change_max_min(size, arr);




    return 0;
}

  
