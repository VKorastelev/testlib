#include <stdio.h>
#include <string.h>
#include "inverse.h"

void printstr(char const *str, int size);

int main(void)
{
    char str[11] = {};
    printf("Enter ten english letters:");
    if (fgets(str, 11, stdin) != NULL)
    {
        printstr(str, sizeof(str));

        str[strcspn(str, "\n")] = '\0';

        printstr(str, sizeof(str));
        
        size_t num_step = inverse(str);

        if(0 == num_step)
        {
            printf("Empty string or one letter. Step = %ld\n", num_step);
            goto finally;
        }
                
        printf ("Inverse str: %s   Step = %ld\n", str, num_step);
    }

 finally:
        return 0;
}

void printstr(char const *const str, int size)
{
    printf("str: %s   strlen(str) = %ld\n", str, strlen(str));

    for (int i = 0; i < size; i++)
    {
        printf("%02X ", str[i]);
    }
    printf("\n");
}
