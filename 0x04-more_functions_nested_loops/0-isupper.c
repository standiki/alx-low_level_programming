/**
 *_isupper - check for uppercase
 *@c: based integer ascii values
 *Return: 1 or 0 based on condition
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
