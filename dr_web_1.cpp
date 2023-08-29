#include <iostream>
#include <string.h>

void TrimRight(char *s)
{
    char *p = s;
    while (*s)
    {
        if (*s != ' ')
        {
            p = s;
        }
        s++;
    }
    if (*p != ' ')
    {
        p++;
    }
    *p = '\0';
    return;
}

int main()
{
    char s[] = "qwe                      ";
    std::cout << "Before:" << std::endl << s << std::endl << "length = " << strlen(s) << std::endl;
    TrimRight(s);
    std::cout << "After:" << std::endl << s << std::endl << "length = " << strlen(s) << std::endl;
    return 0;
}
