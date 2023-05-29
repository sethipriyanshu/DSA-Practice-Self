#include <stdio.h>
#include <stdlib.h>

void insert(int arr[] , int pos , int num , int size)
{  
    int newarr[size+1];
    for(int j = 0;j<pos;j++)
    {
        newarr[j]=arr[j];
    }

    for(int i=pos;i<=size;i++)
    {
        newarr[i+1] = arr[i];
    }
    newarr[pos] = num; 
    for(int i=0;i<=size+1;i++)
    {
        arr[i] = newarr[i];
    }
}

int main(void)
{
   int mylist[]={6,8,10,14,15,16,15,18,13};
   int listsize = sizeof(mylist) / sizeof(mylist[0]);
   insert(mylist , 4,1,listsize);

   printf("%d %d %d %d %d %d %d",mylist[3],mylist[4],mylist[5],mylist[6],mylist[7],mylist[8],mylist[9]);

}