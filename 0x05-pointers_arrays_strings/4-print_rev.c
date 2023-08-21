#include "main.h"
#include "2-strlen.c"
void print_rev(char *s)
{
	int length = strlen(input_string);
    for (int i = length - 1; i >= 0; i--) {
        _putchar("%c", input_string[i]);
    }
    _putchar("\n");
}

int main() {
    const char *input_string = "Hello, World!";
    print_reverse_string(input_string);
    return 0;
}

