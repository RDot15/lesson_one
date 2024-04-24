#include <stdio.h>
#include <string.h>
#include <inttypes.h>
#include <stdlib.h>

#define LINE 1024



int main(int argc, char const *argv[])
{


    //Task_1 не работает

    // char name_in[] = "input.txt";
    // char name_out[] = "output.txt";
    // FILE *f_in;
    // if((f_in = fopen(name_in, "r")) == NULL) 
    // {
    // printf("Alert! File not open. \n");
    // exit(1);
    // }
       
    // FILE *f_out;
    // if((f_out = fopen(name_out, "w")) == NULL) 
    // {
    // printf("Alert_second! File not open. \n");
    // exit(1);
    // }

    
    // char world_1[100], world_2[100];
    //     fscanf(f_in, "%s %s", world_1, world_2);

    // int alfa_1[26]={0};
    // int alfa_2[26]={0};

    // int counter = - 1;
    // while(world_1[++counter] !='\0')
    //     ++alfa_1[world_1[counter] - 'a'];
    
    // counter = - 1;  

    // while (world_2[++counter] != '\0')
    //     ++alfa_2[world_2[counter] - 'a'];
      
    // for (int i = 0; i < 26; ++i)
    //     if (alfa_1[i] == 1 && alfa_2[i] == 1)
    //         fprintf(f_out, "%c", i + 97);
     
    // fclose(f_in);
    // fclose(f_out);


// Task_6 

//char *input = "input.txt";
char *output = "output.txt";
char line[LINE];

FILE *f;
if((f = fopen("input.txt", "r")) == NULL)
{
    printf("Alert! File not open. \n");
    return 1;
}

int count = 0;
while (fscanf(f, "%s", line) == 1)
    if (line[strlen(line) - 1] == 'a')
        count ++;

fclose(f);    

f = fopen(output, "w");
fprintf(f, "%s", count);
fclose(f);

// просто закинул это сюда. к заданию не относится
    
/*
#include <stdio.h>
#include <string.h>

void func (char *arr)
{
    for (int i = 0; i < strlen(arr); i++)
    {
        if (arr[i] == ' ')
        printf ("%s", "");
        else
        {
            printf ("%c", arr[i]);
        }
    }
}
int main(int argc, char const *argv[])
{

char *arr = {"   hel lo world my   friend"}; 
func(arr);

    return 0;
}


 */   
    return 0;
}



