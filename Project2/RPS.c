#include <stdio.h>
#include <stdlib.h> //srand()
#include <time.h>   //time()

#define ROCK 1
#define PAPER 2
#define SCISSORS 3

#define WIN printf("\nYou WIN!~~\n")
#define LOSE printf("\n You LOSE ¤Ð¤Ð\n")
#define TIE printf("\n You tie....\n")

void play_game(int user_choice, int comp_choice);
void print_choice(int choice);

int main(void) {

	int user_choice, comp_choice;

	srand(time(0));

	printf("Welone to RPS~\n");
	printf("Choose tour move:\n");
	printf("1 - Rock\n");
	printf("2 - Paper\n");
	printf("3 - Scissors\n");
	printf("Choice: >>>");

	scanf_s("%d", &user_choice);

	comp_choice = (rand() % 3) + 1;

	printf("\nYou chose: ");
	print_choice(user_choice);

	printf("AI chose: ");
	print_choice(comp_choice);

	play_game(user_choice, comp_choice);
	return 0;
}

void play_game(int user_choice, int comp_choice) {
	if (user_choice == comp_choice) TIE;
	else if (
		(user_choice == ROCK && comp_choice == SCISSORS) ||
		(user_choice == PAPER && comp_choice == ROCK) ||
		(user_choice == SCISSORS && comp_choice == PAPER)
		
		) WIN;
	else LOSE;

}
void print_choice(int choice) {
	if (choice == ROCK) printf("ROCK\n");
	else if (choice == SCISSORS) printf("Scissors\n");
	else if (choice == PAPER) printf("Paper\n");
	else printf("Error: Incorrect choice~");

}
