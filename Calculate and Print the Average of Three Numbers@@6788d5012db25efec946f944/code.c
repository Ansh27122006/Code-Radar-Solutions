#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    int sum=x+y+z;
    float avg=(float)sum/3;
    printf("Average: %.2f", avg);
    return 0;
}