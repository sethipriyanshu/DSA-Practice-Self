#include <stdio.h>
#include <stdlib.h>


void linearsearch(int arr[] , int size , int target)
{
    for(int i =0;i<size;i++)
    {
        if(arr[i]==target)
        {
            printf("The number exists at %d position",i);
            return;
        }
    }
    printf("The Number does not exist");
}

int main(void)
{
    int num[] = {25,65,22,9,8,1,6,5,24,16,35};
    int size = sizeof(num) / sizeof(num[0]);
    linearsearch(num , size , 355);

}