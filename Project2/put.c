#include <stdio.h>
#define EN_MSG "I'm sleepy."
#define KO_MSG "배고파 죽겠다~"

int main(void) {
	printf("Using printf(): %s", EN_MSG);


	puts("\nUsing puts():");
	puts(KO_MSG);
	

	puts("\nUsing putchar(): ");
	for (int i = 0; EN_MSG[i] != '\0'; i++) {
		putchar(EN_MSG[i]);
		
	}

	puts("\nUsing putc(): ");
	for (int i = 0; KO_MSG[i] != '\0'; i++) {
		putchar(KO_MSG[i]);

	}



	return 0;
}