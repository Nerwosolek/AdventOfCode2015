#include <stdio.h>

int cfloor = 0;
int basement = 0;

int main(int argc, char const *argv[])
{
    FILE *file;
    file = fopen("data/input01.txt", "r");
    char inputString[10000];
    fscanf(file, "%s", inputString);
    fclose(file);

    printf("Input: %s\n", inputString);
    for (size_t i = 0; inputString[i] != '\0'; i++)
    {
        if (inputString[i] == '(') cfloor++;
        else cfloor--;
        if (cfloor == -1 && basement == 0) basement = i+1;
    }
    
    printf("%i %i\n", cfloor, basement);
    return 0;
}
