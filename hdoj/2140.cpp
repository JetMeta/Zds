#include <stdio.h>

// b is ' ', q is ',', t is '!', m is l, i is e, c is a, a is c, e is i, l is m
static void f(int c)
{
    switch(c)
    {
    case 'b':
        putchar(' ');
        break;

    case 'q':
        putchar(',');
        break;
    case 't':
        putchar('!');
        break;
    case 'm':
        putchar('l');
        break;
    case 'i':
        putchar('e');
        break;
    case 'c':
        putchar('a');
        break;
    case 'a':
        putchar('c');
        break;
    case 'e':
        putchar('i');
        break;
    case 'l':
        putchar('m');
        break;
    default:
        putchar(c);
        break;
    }
}

int main()
{
    int c;

    while((c=getchar())!=EOF)
    {
        f(c);
    }

    return 0;
}
