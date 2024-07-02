#include <stdio.h>
#include "actions.h"

void display_start_screen() {
    puts("Welcome to the best Contact Management System!\n");
    puts("=========MAIN MENU========== ");
    puts("(1) Add a Contact");
    puts("(2) Search a Contact");
    puts("(3) Edit a Contact");
    puts("(4) List all Contacts");
    puts("(5) Delete a Contact");
    puts("(0) Exit");
    puts("============================\n");
    printf("Enter a choice: ");
}

void setup() {
    puts("#TODO: Implement set up");
}

void cleanup() {
    puts("#TODO: Implement clean up");
}
