#include<stdio.h>
#include<conio.h>
#define Max 3
void main(){
int top=-1;
int Stack[Max];
int value,i;
clrscr();
for(i=0;i<=Max;i++) {
if(top==Max-1){
printf("Stack is Overflow\n");
}else{
printf("Enter value:\n");
top++;
scanf("%d",&Stack[i]);
printf("Value = %d\n" , Stack[i]);
}
}
for(i = top;i>=0;i--) {
if(top==-1) {
printf("Stack is Underflow.\n");
} else {
printf("Value to be poped : %d\n" ,Stack[top]);
top--;
}
if(top==-1) {
printf("Stack is Empty.");
} else {
printf("Value On TOP : %d\n" , Stack[top]);
}
}
getch();
}




