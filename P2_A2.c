// Clearing a bit

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc > 1)
    {
        int value = atoi(argv[1]);
        int ShiftValue = atoi(argv[2]);
        int ref = 1 << ShiftValue;
        printf("Original Value: %d\n", value);
        printf("Modified Value: %d\n", value ^ ref);
    }
    return 0;
}