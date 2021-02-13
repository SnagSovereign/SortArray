#include <iostream>

int main()
{
    int numbers[] = { 9, 6, 10, 5, 8, 3, 1, 2, 4, 7 };
    int swap;

    for (int i = 0; i < sizeof(numbers)/sizeof(int) - 1; i++)
    {
        for (int j = i + 1; j < sizeof(numbers)/sizeof(int); j++)
        {
            if (numbers[i] > numbers[j])
            {
                swap = numbers[i]; //store the larger number
                numbers[i] = numbers[j]; //set the larger number to the smaller number
                numbers[j] = swap; //set smaller number to the larger number
            }
            
        }
    }
    for(int num : numbers)
    {
        std::cout<< num << " ";
    }
}