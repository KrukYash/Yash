#include <stdio.h>
#include <conio.h>
int binarySearch(int a[], int beg, int end, int val) {
    int mid;
    if (end >= beg) {
	mid = (beg + end) / 2;
	if (a[mid] == val)
	    return mid + 1;
	else if (a[mid] < val)
	    return binarySearch(a, mid + 1, end, val);
	else
	    return binarySearch(a, beg, mid - 1, val);
    }
    return -1;
}

int main() {
    int a[] = {5, 10, 14, 17, 23, 27, 31, 37, 45, 49};
    int val;
    int ans;
    clrscr();
    printf("Enter a Value: ");
    scanf("%d",&val);
    ans = binarySearch(a, 0, 9, val);
    if (ans == -1)
	printf("\nElement Doesn't Exist.");
    else
	printf("Element Found at Position: %d", ans);
getch();
return 0;
}