/**
 * _isdigit - checks for a digit (0 through 9)
 *
 * @c: int to be checked
 *
 * Return: 1 if c is a digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= (int)'0' && c <= (int)'9')
		return (1);
	else
		return (0);
}
