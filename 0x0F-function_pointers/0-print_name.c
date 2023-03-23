/**
 * print_name - function that prints a name.
 * @name: name to be printed
 * @f: pointer to function that print a name
 */
void print_name(char *name, void (*f)(char *))
{
	if (!f || !name)
		return;
	(*f)(name);
}
