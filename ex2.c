#include <stdio.h>
int main(){

int num;

scanf("%d", &num);

if (num-(num/2)*2==0)
{
    printf("even\n");
} 
else {

printf("odd\n");
}
    return 0;
}