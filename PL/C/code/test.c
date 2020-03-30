#include <stdio.h>

void PrintReverseString()
{
    char c;
    scanf("%c", &c);
    if ('\n' == c)
        return;
    else
    {
        PrintReverseString();
        printf("%c", c);
    }

}

int main()
{
    PrintReverseString();     
    return 0;
}
