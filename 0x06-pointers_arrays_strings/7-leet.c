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

	char *letters = "aAeEoOtTlL";
	char *numbers = "4433007711";

	for (; *new_str; new_str++)
	{
		for (i = 0; letters[i]; i++)
		{
			if (*new_str == letters[i])
			{
				*new_str = numbers[i];
				break;
			}
		}
	}

	return (new_str);
}
