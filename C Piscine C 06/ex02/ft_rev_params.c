#include <unistd.h>

void printString(const char* str)
{
    const char* ptr = str;
    while (*ptr != '\0')
    {
        write(1, ptr, 1);
        ptr++;
    }
}

int main(int argc, char* argv[])
{
    char newline = '\n';

    // Output the total arguments
    char argCountMsg[] = "Total arguments: ";
    printString(argCountMsg);
    char argCountChar = argc + '0';
    write(1, &argCountChar, 1);
    write(1, &newline, 1);

    // Output the individual arguments in reverse order
    char argMsg[] = "Argument ";
    char argNumChar;
    char colonSpace[] = ": ";
    char space = ' ';

    for (int i = argc - 1; i > 0; i--)
    {
        printString(argMsg);

        argNumChar = i + '0';
        write(1, &argNumChar, 1);

        write(1, colonSpace, 2);
        printString(argv[i]);

        write(1, &newline, 1);
    }

    return 0;
}
