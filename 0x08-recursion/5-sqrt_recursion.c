/**
 * _sqrt_helper - Helper function to calculate the square root recursively.
 * @n: The input number.
 * @start: The starting value for the range.
 * @end: The ending value for the range.
 *
 * Return: The square root of @n within the range of @start and @end.
 *         If no square root is found, returns -1.
 */
int _sqrt_helper(int n, int start, int end)
{
	int mid = (start + end) / 2;

	if (start <= end)
	{
		if (mid * mid == n)
		{
			return (mid);
		}
		else if (mid * mid > n)
		{
			return (_sqrt_helper(n, start, mid - 1));
		}
		else
		{
			return (_sqrt_helper(n, mid + 1, end));
		}
	}
	return (-1);
}
/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The input number.
 *
 * Return: The natural square root of @n. If @n doesn't have a
 *         natural square root, returns -1.
 */
int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
    {
        return n;
    }

    /* Recursive case: Calculate the square root */
    return _sqrt_helper(n, 1, n);
}
