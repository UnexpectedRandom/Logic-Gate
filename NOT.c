#include <stdio.h>
#include <stdbool.h>

bool NOT_gate(bool input1)
{
    return !input1;
}

int main()
{

    bool gate = NOT_gate(1);

    printf("%d\n", gate ? 1 : 0);

    return 0;
}