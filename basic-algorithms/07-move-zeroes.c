#include <stdio.h>

void moveZeroes(int* nums, int numsSize)
{
    int position = 0;

    // Move all non-zero elements to the front
    for(int i = 0; i < numsSize; i++)
    {
        if(nums[i] != 0)
        {
            nums[position] = nums[i];
            position++;
        }
    }

    // Fill remaining positions with zero
    while(position < numsSize)
    {
        nums[position] = 0;
        position++;
    }
}

void printArray(int* nums, int numsSize)
{
    printf("[");

    for(int i = 0; i < numsSize; i++)
    {
        printf("%d", nums[i]);

        if(i < numsSize - 1)
            printf(", ");
    }

    printf("]\n");
}

int main()
{
    // Test Case 1
    int nums1[] = {0, 1, 0, 3, 12};

    moveZeroes(nums1, 5);

    printf("Test Case 1: ");
    printArray(nums1, 5);


    // Test Case 2 - Edge Case
    int nums2[] = {0, 0, 0};

    moveZeroes(nums2, 3);

    printf("Test Case 2: ");
    printArray(nums2, 3);

    return 0;
}