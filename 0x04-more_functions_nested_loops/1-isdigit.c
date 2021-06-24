/**
 *_isdigit - checks for a digit 0 - 9
 *@c: integer based on ascii value
 *Return: 1 if digit 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
