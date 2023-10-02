#include <unistd.h>

/*
 * _putchar to write the character c 
 * @c: the character to print
 * return : if success equal 1.
 */

int _putchar(char c)
{
return (write(1,&c,1));
}
