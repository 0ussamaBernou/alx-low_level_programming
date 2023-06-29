/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: difference between strings
 */

int _strcmp(char *s1, char *s2)
{
	int i, j, w1, w2;

	w1 = 0;
	w2 = 0;

	for (i = 0; s1[i] != '\n'; i++)
		w1 += s1[i] * (i + 1);

	for (i = 0; s2[i] != '\n'; i++)
		w2 += s2[i] * (i + 1);

	return (w1 - w2);
}
