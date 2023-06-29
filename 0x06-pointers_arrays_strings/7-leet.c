/**
 * leet - encodes a string into 1337
 * @str: string to encode
 *
 * Return: encoded string
 */
char *leet(char *str)
{
	int i;
	char *new_str = str;

	for (i = 0; new_str[i] != '\0'; i++)
	{
		if (new_str[i] == 'a' || new_str[i] == 'A')
			new_str[i] = '4';

		if (new_str[i] == 'e' || new_str[i] == 'E')
			new_str[i] = '3';

		if (new_str[i] == 'o' || new_str[i] == 'O')
			new_str[i] = '0';

		if (new_str[i] == 't' || new_str[i] == 'T')
			new_str[i] = '7';

		if (new_str[i] == 'l' || new_str[i] == 'L')
			new_str[i] = '1';
	}

	return (new_str);
}
