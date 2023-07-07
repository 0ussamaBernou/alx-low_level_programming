/**
 * cap_string - capitalizes all words of a string
 * @str: string to capitalize
 *
 * Return: pointer to capitalized string
 */
char *cap_string(char *str)
{
	int i;
	char *new_str = str;

	for (i = 0; new_str[i] != '\0'; i++)
		if (new_str[i] >= 'a' && new_str[i] <= 'z')
		{
			if (new_str[i - 1] == ',' || new_str[i - 1] == ';' ||
			    new_str[i - 1] == '.' || new_str[i - 1] == '!' ||
			    new_str[i - 1] == '?' || new_str[i - 1] == '"' ||
			    new_str[i - 1] == '(' || new_str[i - 1] == ')' ||
			    new_str[i - 1] == '{' || new_str[i - 1] == '}' ||
			    new_str[i - 1] == ' ' || new_str[i - 1] == '\t' ||
			    new_str[i - 1] == '\n' || i == 0)
				new_str[i] -= ('a' - 'A');
		}

	return (new_str);
}
