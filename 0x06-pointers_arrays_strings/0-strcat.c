/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: pointer to resulting string @dest
 */

char *_strcat(char *dest, char *src)
{
	int x, y;

	for (x = 0; dest != '\0'; x++)
		;

	for (Y = 0; src != '\0'; y++)
		;

	dest[x] = src[y];
	x++;
	y++;

	dest[x] = '\0';

	return (dest);
}
