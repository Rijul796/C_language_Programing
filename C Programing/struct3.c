#include<stdio.h>
#include<string.h>
struct emp2
{
    int age;
};
struct emp
{
    int id;
    char name[50];
    struct emp2 q;
};

int main()
{
    struct emp x,y;
    x.id=6969;
    strcpy(x.name,"sahil saharan");
    x.q.age=24;
    printf("age is %d\n",x.q.age);
    y.id=9696;
    printf("x id is: %d\ny id is: %d\n",x.id,y.id);
    printf("name of x is: %s",x.name);
    return 0;
}