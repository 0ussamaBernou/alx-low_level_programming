char *rot13(char *s)
{
	int i = 0;
	char *str = s;
	char *rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	for (; *s; s++)
	{
		for (i = 0; alpha[i]; i++)
		{
			if (*s == alpha[i])
			{
				*s = rot13[i];
				break;
			}
		}
	}
	return (str);
}
