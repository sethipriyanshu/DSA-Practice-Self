#include <stdio.h>
#include <stdlib.h>

void insert(int arr[] , int pos , int num , int size)
{  
    int *newarr = (int*)malloc((size+1)*sizeof(int));
   if(pos>0 && pos<=size)
   { 
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
    else if(pos==0)
    {
     for(int i=0;i<=size;i++)
    {
        newarr[i+1] = arr[i];
    }   
     newarr[0] = num; 
    for(int i=0;i<=size+1;i++)
    {
        arr[i] = newarr[i];
    }

    }
    else if(pos>size)
    {
        arr[pos] = num;
    }

    

}

int main(void)
{
   int mylist[100] = {1,2,3,4,5,6,7,8};
   int listsize = sizeof(mylist) / sizeof(mylist[0]);
   insert(mylist , 8,11,listsize);

   printf("%d %d %d %d %d %d %d %d %d",mylist[0],mylist[1],mylist[2],mylist[3],mylist[4],mylist[5],mylist[6],mylist[7],mylist[8]);
   return 0;

}