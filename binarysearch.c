#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void binarysearch(int arr[], int size, int num)
{
    int low = 0;
    int high = size - 1;
    while (low <= high)
    {
        int median = (low + high) / 2;
        if (arr[median] == num)
        {
            printf("%d exists at %d position\n", num , median);
            return;
        }
        else if (arr[median] > num)
        {
            high = median - 1;
        }
        else if(arr[median]<num)
        {
            low = median + 1;
        }
    }
}

int main(void)
{
    int book[] = {2, 3, 4, 6, 8, 10, 16, 18, 21};
    int size = sizeof(book) / sizeof(book[0]);
    binarysearch(book, size, 21);
    return 0;
}