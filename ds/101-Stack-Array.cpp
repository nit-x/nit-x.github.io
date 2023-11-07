#include <stdio.h>
#define MAX 100
int stack[MAX];
int top = -1;

void push(int);
int pop();
int peek();
void display();
int isFull();
int isEmpty();

void main() {
    int value, choice;
   while(1){
      printf("\n\n***** MENU *****\n");
      printf("1. Push\n2. Pop\n3. Peek\n4. Display\n5. IsFULL\n6. IsEMPTY\n7. EXIT");
      printf("\nEnter your choice: ");
      scanf("%d",&choice);
      switch(choice){
	 case 1: printf("Enter the value to be insert: ");
    		 scanf("%d",&value);
    		 push(value);
    		 break;
	 case 2: value = pop();
		    break;
	 case 3: value = peek();
		    break;
	 case 7: exit(0);
	 default: printf("\nWrong selection!!! Try again!!!");
      }
   }
}

int isFull(){
    if(top==MAX-1){
        return 1;
    }
    else{
        return 0;  
    }
}

int isEmpty(){
    if(top==-1){
        return 1;
    }
    else{
        return 0;    
    }
}

void push(int x){
    if(isFull()){
        printf("Stack is Full!!! Insertion is not possible!!!");
    }
    else{
        stack[++top] = x;
        printf("\nInsertion success!!!");
    }
}

int pop(){
    if(isEmpty()){
        printf("Stack is Empty!!! Deletion is not possible!!!");
        return NULL;
    }
    else{
        int x = stack[top];
        printf("\nDeleted : %d", x);
        top--;
        return x;
    }
}
int peek(){
    if(isEmpty()){
        printf("Stack is Empty!!! No element to display!!!");
        return NULL;
    }
    else{
        return stack[top];
    }
}

void display(){
   if(isEmpty())
      printf("\nStack is Empty!!!");
   else{
      int i;
      printf("\nStack elements are:\n");
      for(i=top; i>=0; i--){
    	 printf("%d\n", stack[i]);
      }
   }
}
