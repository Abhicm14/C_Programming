#include<stdio.h>

void func()
{
        static int x=2;
        static int y=5;
        printf("x=%d,y=%d\n",x,y);
        x++;
        y++;
}

void main()
{
        func();
        func();
        func();
}
