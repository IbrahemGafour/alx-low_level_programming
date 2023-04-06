#include "main.h"
/**
 * puts_recursion - print a string
 * @s:string
 * return:void
 */
void _puts_recursion(char *s)
{
if (!*s)
{
	_putchar('\n');
}
else
{
	_putchar(*s);
	_puts_recursion(s + 1);
}

}
