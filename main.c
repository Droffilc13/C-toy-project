#include "actions.h"
#include "validation.h"
#include <ctype.h>

int main(void) {
    display_start_screen();
   
    // TODO: This should be grouped in a function? 
    char choice;
    choice = getchar();
    clean_input_buffer();
    
    if (!isdigit(choice)) {
        
    }
    // 

    printf("Choice entered: %c", choice);

        
    
}
