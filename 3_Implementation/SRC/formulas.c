#include <calculator_operations.h>

int add(int op1, int op2)
{
    return op1 + op2;
}

int subtract(int op1, int op2)
{
    return op1 - op2;
}

int multiply(int op1, int op2)
{
    return op1 * op2;
}

int divide(int op1, int op2)
{
    if(0 == op2)
        return 0;
    else
        return op1 / op2;
}