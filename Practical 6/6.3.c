#include <stdio.h>
int main() {
    int number[5] = {0,1,2,1,4};
    int min = number[0];
    for(int i = 0;i<5;i++) {
        if(min>number[i]) {
            min = number[i];
            printf("%d\n" , number[i]);
        }
        
    }
    printf("%d" , min);
    return 0;   
}