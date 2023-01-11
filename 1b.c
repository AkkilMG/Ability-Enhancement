#include <stdio.h>
void main() {
    int n, sum=0;
    printf("Enter the nth term: ");
    scanf("%d", &n);
    for(int i=0; i<=n; i++) sum=sum+(i*i);
    printf("The sum of square of %dth terms is %d", n, sum);
}