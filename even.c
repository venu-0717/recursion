#include<stdio.h>
void even(int i)
{
    if(i<-7)
    {
        return;
    }
if(i%2==0)
{
    printf("i=%d \n",i);
}
even(i-1);
} 
void main ()
{
    even(4);
}

