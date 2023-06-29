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
		if (new_str[i] == ',' || new_str[i] == ';' ||
		    new_str[i] == '.' || new_str[i] == '!' ||
		    new_str[i] == '?' || new_str[i] == '"' ||
		    new_str[i] == '(' || new_str[i] == ')' ||
		    new_str[i] == '{' || new_str[i] == '}' ||
		    new_str[i] == ' ' || new_str[i] == '\t' ||
		    new_str[i] == '\n')
			if (new_str[i + 1] >= 'a' && new_str[i + 1] <= 'z')
				new_str[i] -= ('a' - 'A');

	return (new_str);
}
