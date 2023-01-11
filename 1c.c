#include <stdio.h>
int fact(int n){
    return ((n==0 || n==1)?1:n*fact(n-1));
}
void main() {
    int n, sum=0;
    printf("Enter the nth term: ");
    scanf("%d", &n);
    for(int i=0; i<=n; i++) sum+=fact(i);
    printf("The sum of factorial of %dth terms is %d.", n, sum);
}