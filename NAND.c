#include <stdio.h>
#include <stdbool.h>
#include "AND.c"

bool NAND_gate(bool input_1, bool input_2)
{
    return !AND_gate(input_1, input_2);
}

int main()
{
    bool gate = NAND_gate(0, 1);

    printf("%d\n", gate ? 0 : 1);
}