/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer to array
 * @size: size of array
 * Return: void
 */
void print_diagsums(int *a, int size)
{
        int i, j, sum1 = 0, sum2 = 0;
        int **ptr;
        ptr = (int **)a;

        for (i = 0; i < size; i++)
        {
                sum1 += ptr[i][i];
                sum2 += ptr[i][size - i - 1];
        }
        printf("%d, %d\n", sum1, sum2);
}