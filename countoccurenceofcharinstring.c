#include <stdio.h>
#include <conio.h>
#include <string.h>
int countOccurrence(char *str, char ch)
{
	int i, count = 0;
	int len = strlen(str);
	for (i = 0; i < len; i++)
	{
		if (str[i] == ch)
		{
			count++;
		}
	}
	return count;
}

void main()
{
	int count;
	char str[100], ch;
	printf("Enter a string: ");
	fgets(str, 100, stdin);
	printf("Enter a character you want to count: ");
	scanf("%c", &ch);
	count = countOccurrence(str, ch);
	printf("total occurence of '%c': %d", ch, count);
	getch();
}