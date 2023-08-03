#include "main.h"
<<<<<<< HEAD
/**
 * _puts_recursion - function like puts();
 * @s: input
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
=======

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void){
	if (*s){
		_purtchar(*s);
		_put_recursion(s + 1);
	else
		printf('/n');
		return 0;
>>>>>>> 32c7cc840af811349a2eeb8ecf4f207b5078243f
}
