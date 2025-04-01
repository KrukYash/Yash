#include <stdio.h>
int main() {
    int sumNumber = 0;
    int multiNumber = 1;
    int Number[10];
    printf("Enter 10 Numbers.\n");
    for(int i = 0;i<10;i++) {
        scanf("%d" , &Number[i]);
    }
    printf("The Sum of all Odd Index.\n");
    for(int i = 0;i<10;i+=2) {
        sumNumber +=  Number[i];
    }
    printf("Addition = %d\n" , sumNumber);
    printf("The Multiplication of all Even Index.\n");
    for(int i = 1;i<10;i+=2) {
        multiNumber *=  Number[i];
    }
    printf("Multiplication = %d\n" , multiNumber);

}