#include <stdio.h>
#include <stdbool.h>

bool OR_gate(bool input_1, bool input_2)
{
    return input_1 || input_2;
}

int main()
{
    bool gate = OR_gate(1, 1);

    printf("%d\n", gate ? 1 : 0);

    return 0;
}
