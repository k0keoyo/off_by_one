#include<stdio.h>
void off_by_one(char *input);

int main()
{
	char *offbyone_buffer = "AAAAAAAA";
	off_by_one(offbyone_buffer);
	return 0;
}

void off_by_one(char *input)
{
	char buff[8];
	int i = 0, len = 0;
	len = sizeof(buff);
	_asm int 3;
	for (i = 0; i <= len; i++)
	{
		buff[i] = input[i];
	}
}