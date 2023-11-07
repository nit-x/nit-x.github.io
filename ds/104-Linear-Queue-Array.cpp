#include<stdio.h>

#define SIZE 10

void enQueue(int);
void deQueue();
void peek();
void display();
int isFull();
int isEmpty();

int queue[SIZE], front = -1, rear = -1;

void main()
{
   int value, choice;
   while(1){
      printf("\n\n***** MENU *****\n");
      printf("1. Insertion\n2. Deletion\n3. Peek\n4. Display\n5. isFull\n6. isEmpty\n7. Exit");
      printf("\nEnter your choice: ");
      scanf("%d",&choice);
      switch(choice){
	 case 1: printf("Enter the value to be insert: ");
		 scanf("%d",&value);
		 enQueue(value);
		 break;
	 case 2: deQueue();
		 break;
	 case 3: peek();
		 break;
	case 4: display();
		 break;
    case 5: printf("is Full :: %d", isFull());
		 break;
    case 6: printf("is Empty :: %d", isEmpty());
		 break;
	 case 7: exit(0);
	 default: printf("\nWrong selection!!! Try again!!!");
      }
   }
}
int isFull(){
    if(rear==SIZE-1){
        return 1;
    }
    else{
        return 0;
    }
}
int isEmpty(){
    if(front == rear){
        return 1;
    }
    else{
        return 0;
    }
}
void enQueue(int value){
   if(isFull())
      printf("\nQueue is Full!!! Insertion is not possible!!!");
   else{
      if(front == -1){
          front = 0;
      }
      rear++;
      queue[rear] = value;
      printf("\nInsertion success!!!");
   }
}
void deQueue(){
   if(isEmpty())
      printf("\nQueue is Empty!!! Deletion is not possible!!!");
   else{
      printf("\nDeleted : %d", queue[front]);
      front++;
      if(front == rear){
          front = rear = -1;
      }

   }
}
void peek(){
    if(isEmpty()){
        printf("\nQueue is Empty!!!");
    }
   else{
       printf("\Peek element : %d", queue[front]);
   }
}
void display(){
   if(isEmpty()){
        printf("\nQueue is Empty!!!");
   }
   else{
      int i;
      printf("\nQueue elements are:\n");
      for(i=front; i<=rear; i++){
          printf("%d\t",queue[i]);
      }
	  
   }
}
