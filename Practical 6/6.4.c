#include <stdio.h>
int main() {
    int number[10];
    int i,j,c,n;
    printf("Enter number of elements.\n");
    scanf("%d" , &n);
    printf("Enter Elements.\n");
    for(i=0;i<n;i++) {
        scanf("%d" , &number[i]);
    }
    for(i=0;i<n-1;i++) {
        for(j=0;j<n-i-1;j++) {
            if(number[j] > number[j+1]) {
                c = number[j];
                number[j] = number[j+1];
                number[j+1] = c;
            }
        }

    }
    printf("Sorted List.\n");
    for(i=0;i<n;i++) {
        printf("%d\t" , number[i]);
    }
}