#include <stdio.h>
void forInteger();
void forFloat();
int main() {    
    forInteger();
    forFloat();
    return 0;
}
void forInteger() {
    int Integer[10];
    int sumInteger=0;
    int avgInteger;
    printf("Enter 10 Integer Values.\n");
    for(int i=0;i<10;i++){
        scanf("%d" , &Integer[i]);
    }
    for(int i=0;i<10;i++) {
        sumInteger += Integer[i];
    }
    printf("%d\n" , sumInteger);
    avgInteger = sumInteger/10;
    printf("%d\n" , avgInteger);
}
void forFloat() {
    float sumFloat=0;
    float avgFloat;
    float Float[10];
    printf("Enter 10 Float Values.\n");
    for(int i=0;i<10;i++) {
        scanf("%f" , &Float[i]);
    }
    for(int i=0;i<10;i++) {
        sumFloat += Float[i];
    }
    printf("%f\n" , sumFloat);
    avgFloat = sumFloat/10;
    printf("%f\n" , avgFloat);
}