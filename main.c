
#include <stdio.h>

int main(int argc, char **argv) {

	int result = calculator();

	return result;
}

int calculator (void) {
	char operation;
	int number1 = 0;
	int number2 = 0;
	int result = 0;
	int control;

	printf("inserire la seguente tupla: operazione, primo numero, secondo numero\n");
	printf("dove: operazione = +,-,*,/\n");
	control = scanf("%c %d %d", &operation, &number1, &number2);

	if (control == 3) {
		switch(operation) {
				case '+':
					result = number1 + number2;
					break;
				case '-':
					result = number1 - number2;
					break;
				case '*':
					result = number1 * number2;
					break;
				case '/':
					result = number1 / number2;
					break;
		}

		printf("%d %c %d = %d", number1, operation, number2, result);
    return 0;

	} else {
		printf("scanf ha resituito %d", control);
    return 1;
	}
}