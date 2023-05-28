#include <stdio.h>
#include <stdlib.h>

struct myarray{
    int totalsize;
    int usesize;
    int* address;
};

void createarray(struct myarray *a, int tsize , int usize )
{
 a->totalsize = tsize;
 a->usesize = usize;
 a->address = (int*)malloc(tsize*sizeof(int));
}

void setvalue(struct myarray *a)
{
    int n;
    for(int i=0;i<a->usesize;i++)
    {
        printf("Enter The Value Here ");
        scanf("%d",&n);
        (a->address)[i]=n;
    }
}

void showvalue(struct myarray *a)
{
    for(int i=0;i<a->usesize;i++)
    {
        printf("%d \n",(a->address)[i]);
    }
}

int main(void)
{
  struct myarray numbers;
  createarray(&numbers , 10 , 3);
  setvalue(&numbers);
  showvalue(&numbers);
  return 0;
}

