#include<stdio.h>
int main()
{
    char line[20];
    FILE * fin = fopen("file.txt","r");
    fscanf(fin,"%s",line);
    printf("Ū��F:%s\n",line);
    fscanf(fin,"%s",line);
    printf("Ū��F:%s\n",line);
}
