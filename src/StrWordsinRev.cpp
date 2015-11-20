/*
OVERVIEW: Given a string, reverse all the words not the string.

E.g.: Input: "i like coding". Output: "coding like i"

INPUTS: A string.

OUTPUT: Modify the string according to the logic.

NOTES: Don't create new string.
*/
#include <Stdio.h>
#include <string.h>
void str_words_in_rev(char *input, int len);
void reverse(char *begin, char *end);

void str_words_in_rev(char *input, int len)
{
char *begin = input;
char *temp = input;
while (*temp)
{
	temp++;
	if (*temp == '\0')
	{
		reverse(begin, temp - 1);
	}
	else if (*temp == ' ')
	{
		reverse(begin, temp - 1);
		begin = temp + 1;
	}
}
reverse(input, temp - 1);
}
	
void reverse(char *begin, char *end)
{
	char temp;
	while (begin < end)
	{
		temp = *begin;
		*begin++ = *end;
		*end-- = temp;
	}
}
