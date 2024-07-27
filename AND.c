#include <stdio.h>
#include <stdbool.h>

bool AND_gate(bool input_1, bool input_2)
{
    return input_1 && input_2;
}

int main()
{
    bool gate = AND_gate(1, 0);

    printf("%d\n", gate ? 1 : 0);
    return 0;
}