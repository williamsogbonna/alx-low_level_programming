 #include "main.h"

 /**
  * _strcat - concatenates one string to another
  *
  * @dest: destination string
  *
  * @src: String to be concatenated
  *
  * Return: The destination string
  */

char *_strcat(char *dest, char *src)

{

	int i;

	int destination = 0;

	int counter = 0;

	while (dest[counter] != '\0')
	{
		destLenth++;

		counter++;
	}
	for (i = 0; src[i] != '\0'; i++)
	dest[destLength + i] = src[i];

	dest[destLenght + i] = '\0';

	return (dest);

}
