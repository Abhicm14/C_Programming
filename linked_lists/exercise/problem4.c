#include<stdio.h>

struct tag
{
        int i;
        char c;
};

void func(struct tag v);

void main()
{
    struct tag var = {2,'s'};
    func(var);
}

void func(struct tag v)
{
    printf("%d %c\n",v.i,v.c);
}