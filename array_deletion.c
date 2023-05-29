#include <stdio.h>
#include <stdlib.h>

void del(int arr[], int pos , int size)
{
    int newarr[size-1];
    for(int i=0;i<pos;i++)
    {
        newarr[i] = arr[i];
    }
    for(int j=pos;j<size;j++)
    {
        newarr[j] = arr[j+1];
    }
    for(int i=0;i<size;i++)
    {
        arr[i] = newarr[i];
    }
}

int main(void)
{
  int mylist[100] = {1,2,3,4,5,6,7};
  del(mylist,3,7);
  printf("%d %d %d %d %d %d ",mylist[0],mylist[1],mylist[2],mylist[3],mylist[4],mylist[5]);
}