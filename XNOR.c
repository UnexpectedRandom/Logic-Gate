#include <stdio.h>
#include <stdbool.h>
#include "XOR.c"

bool XNOR_gate(bool input_1, bool input_2)
{
    return !XOR_gate(input_1, input_2);
}

int main()
{
    bool gate = XNOR_gate(0, 1);

    printf("%d\n", gate ? 1 : 0);
}