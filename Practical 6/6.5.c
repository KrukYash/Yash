#include <stdio.h>
int main() {
    int Matrix[2][2];
    printf("Enter Element for 2x2 Matrix.\n");
    for(int i=0;i<2;i++) {
        for(int j=0;j<2;j++) {
            scanf("%d" , &Matrix[i][j]);
        }
    }
    for(int i=0;i<2;i++) {
        for(int j=0;j<2;j++) {
            printf("%d " , Matrix[i][j]);
            
        }
        printf("\n");
    }
    printf("For Transpose.\n");
    for(int i=0;i<2;i++) {
        for(int j=0;j<2;j++) {
            printf("%d " , Matrix[j][i]);
            
        }
        printf("\n");
    }
    return 0;
}