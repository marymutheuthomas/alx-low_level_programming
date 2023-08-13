#include <string.h>
#include "main.h"

void print_program_name(char *argv[]) {
    char *prog_name = argv[0];
    char *backslash = strrchr(prog_name, '/');

    if (backslash) {
        prog_name = backslash + 1;
    }

    while (*prog_name) {
        _putchar(*prog_name);
        prog_name++;
    }
    _putchar('\n');
}

