#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void Memory_leak()
{
	int *arr = (int*) malloc(10 * sizeof(int)); 
}
void Stack_overflow()
{
	int x = 5;
	int k[1000];
	Stack_overflow();
}

void Out_of_memory_oom()
{
    int count = 0; 
    while (1)
    {
        // M?i l?n xin c?p 1MB b? nh?
        int *ptr = (int*) malloc(1024 * 1024); 

        if (ptr == NULL) {
            printf("? Out of memory sau khi cap phat %d MB!\n", count);
            break;
        }

        count++;
        // Không free, c? tình d? leak nh?m nhanh h?t RAM
    }
}
int main() 
{
    char command[50];
    if (fgets(command, sizeof(command), stdin))
    {
        printf("Your command: ");
        if (strcmp(command, "memory_lab stack_overflow\n") == 0)
        {
            printf("%s", "stack_overflow\n");
            Stack_overflow();
        }
        else if (strcmp(command, "memory_lab memory_leak\n") == 0) 
        {
            printf("%s", "memory_leak\n");
            Memory_leak();
        }
        else if (strcmp(command, "memory_lab out_of_memory\n") == 0) 
        {
            printf("%s", "out_of_memory\n");
            Out_of_memory_oom();
        }
    }
}
