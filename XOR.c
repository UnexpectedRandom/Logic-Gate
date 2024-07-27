#include <stdio.h>
#include <stdbool.h>

bool XOR_gate(bool input_1, bool input_2)
{

    return input_1 != input_2;
}

int main()
{

    bool gate = XOR_gate(0, 1);

    printf("%d\n", gate ? 1 : 0);
}