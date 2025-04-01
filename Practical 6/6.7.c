#include <stdio.h>
int main() {
    int n;
    int a[10];
    int maxOdd = -1;
    printf("Enter Number of Element.\n");
    scanf("%d" , &n);
    printf("Enter Elements.\n");
    for(int i =0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++) {
        if(a[i] % 2 != 0) {
            if(maxOdd < a[i]) {
                maxOdd = a[i];
            }
        }
    }
    if(maxOdd == -1) {
        printf("No odd number found.\n");
    } else {
        printf("Largest odd number: %d\n", maxOdd);
    }

    return 0;
}