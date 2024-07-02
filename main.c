#include "actions.h"

int main(void) {
    display_start_screen();
   
    unsigned short choice;
    scanf("%hu", &choice);

    printf("Choice entered: %hu\n", choice);
}
