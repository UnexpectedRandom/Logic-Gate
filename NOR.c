#include <stdio.h>
#include <stdbool.h>
#include "OR.c"

bool NOR_gate(bool input_1, bool input_2)
{
    return !OR_gate(input_1, input_2);
}

int main()
{
    bool gate = NOR_gate(1, 0);

    printf("%d\n", gate ? 1 : 0);

    return 0;
}