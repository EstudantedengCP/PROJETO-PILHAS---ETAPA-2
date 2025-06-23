#include <stdio.h>
#include <string.h>
#include <locale.h>
#include "interpret.h"

static void repl() {
    char line[1024];

    for (;;) {
        printf("> ");
        if (!fgets(line, sizeof(line), stdin)) {
            printf("\n");
            break;
        }

        
        printf("[DEBUG] comando bruto: ");
        for (int i = 0; i < strlen(line); i++) {
            printf("%02x ", (unsigned char)line[i]);
        }
        printf("\n");

    
        line[strcspn(line, "\n")] = 0;

        
        if (strcmp(line, "exit") == 0) break;


        interpret(line);
    }
}

int main() {
    setlocale(LC_ALL, "");        
    interpreter_init();            
    repl();                       
    return 0;
}
