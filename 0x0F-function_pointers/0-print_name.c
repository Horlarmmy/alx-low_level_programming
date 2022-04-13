/**
 * print_name- print a name
 * @name: the name to print
 * @f: finction that print the name
*/
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
