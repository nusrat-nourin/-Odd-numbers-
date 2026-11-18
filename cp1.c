///1st 50 odd numbers
#include<stdio.h>
int main()
{
    int i, count=0;
    for(i=1;count<50;i++)
    {
        if(i%2!=0)
        {
            printf(" %d\n",i);
            count++;
        }
    }
}
