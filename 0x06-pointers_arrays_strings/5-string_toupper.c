/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: string to be changed
 *
 * Return: pointer to string
 */

char *string_toupper(char *str)
{
	int i;
	char *new_str = str;

	for (i = 0; new_str[i] != '\0'; i++)
		if (new_str[i] >= 'a' && new_str[i] <= 'z')
			new_str[i] -= 32;

	return (new_str);
}
