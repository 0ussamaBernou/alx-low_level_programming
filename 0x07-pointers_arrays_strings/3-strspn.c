/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be scanned
 * @accept: string containing the characters to match
 *
 * Return: the number of bytes in the initial segment of s which consist only
 * of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
        unsigned int i, j, count;

        count = 0;

        for ( i = 0; s[i] != '\0'; i++)
        {
                for ( j = 0; accept[j] != '\0'; j++)
                {
                        if (accept[j] == s[i] && (i+1) > count)
                        {
                                count = (i + 1) ;
                        }
                        
                }
                       
        }

        return (count);
        
}