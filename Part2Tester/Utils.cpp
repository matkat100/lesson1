#include "Stack.h" // ????? ??????? ??????
#include "Utils.h"

void reverse(int* nums,unsigned int size)
{
    Stack stack;
    initStack(&stack);

    // ?????? ?? ?? ??????? ???????
    for (int i = 0; i < size; i++)
    {
        push(&stack, nums[i]);
    }

    // ??????? ?? ??????? ???????? ???? ????? ???? ????
    for (int i = 0; i < size; i++)
    {
        nums[i] = pop(&stack);
    }

    // ????? ???????
    cleanStack(&stack);
}
#include <iostream>
#include "Stack.h"
#include "Utils.h"

void reverse(int* nums, int size)
{
    Stack stack;
    initStack(&stack);

    for (int i = 0; i < size; i++)
    {
        push(&stack, nums[i]);
    }

    for (int i = 0; i < size; i++)
    {
        nums[i] = pop(&stack);
    }

    cleanStack(&stack);
}

int* reverse10()
{
    Stack stack;
    initStack(&stack);

    int* reversedArray = new int[10];
    std::cout << "Please enter 10 integers:" << std::endl;

    for (int i = 0; i < 10; i++)
    {
        int num;
        std::cin >> num;
        push(&stack, num);
    }

    for (int i = 0; i < 10; i++)
    {
        reversedArray[i] = pop(&stack);
    }

    cleanStack(&stack);
    return reversedArray;
}
