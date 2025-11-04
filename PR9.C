#include <stdio.h>
#include <conio.h>
#include <time.h>
void main() {
	int arr[]={12,23,78,98,67,56,45,19,65,9},key,i,flag=0;
	clrscr();
	printf("\nEnter A Number: ");
	scanf("%d" , &key);
	for(i=0;i<10;i++) {
		if(key==arr[i]) {
			flag=1;
			break;
		}
	}
	if(flag==1)
		printf("\nThe Number %d Exists in the Array at Position %d",key,i+1);
	else
		printf("\nThe Number %d Doesn't Exist in the Array",key);
getch();
}