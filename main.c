#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
    char name[20];
    int age;
};

void printStudent(struct Student *s)
{
    printf("name: %s\n", s->name);
    printf("age: %d\n", s->age);
}

struct Student *createStudent(char *name, int age)
{
    struct Student *s = malloc(sizeof(struct Student));

    strcpy(s->name, name);
    s->age = age;

    return s;
}

int main()
{
    struct Student *s = createStudent("Ryan\0", 17);
    printStudent(s);
}