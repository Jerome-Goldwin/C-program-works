#include<stdio.h>
#include<stdlib.h>
void list();
void clearbuffer(){
	int ch;
	while((ch=getchar()) !='\n' && ch != EOF){}
}
int main(){
	char a;
	do{
		list();
		printf("\nEnter your choice: ");
		scanf("%c",&a);
		clearbuffer();
		switch(a){
			case 'a':
			case 'A':
				printf("\nA\n");
				break;
			case 'b':
			case 'B':
				printf("\nB\n");
				break;
			case 'e':
			case 'E':
				printf("\nGoodbye\n");
				exit(0);
			default:
				printf("\nWrong entry!\n");
		}
	}while(1);
}

void list(){
	printf("\nA. print the letter \"A\"");
	printf("\nB. print the letter \"B\"");
	printf("\nE. Exit the program");
}
