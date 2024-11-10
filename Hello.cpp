#include <stdio.h> // бібліотека вводу\виводу
int main() {
		char username[16]; // змінна яка містить масив
		printf("you name:");
		scanf_s("%s", username, sizeof(username)); // %s текстовий рядок 
		printf("hello, %s\n", username);
	
}
