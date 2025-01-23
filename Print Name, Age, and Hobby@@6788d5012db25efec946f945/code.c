#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int age;
    char name[30],hobby[40];
    scanf("%s %d %s",&name,&age,&hobby);
    printf("Name: %s\n",name)
    printf("Age: %d\n",age)
    printf("Hobby:%s",hobby);
    return 0;
}