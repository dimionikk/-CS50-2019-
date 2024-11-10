#include <stdio.h>  // бібліотека вводу виводу
int main() { // початок програми
	char username[16]; // змінна яка містить масив
	printf("you name:"); 
	scanf("%s", username, sizeof(username)); // %s текстовий рядок 
	printf("helloo, %s\n", username);
}