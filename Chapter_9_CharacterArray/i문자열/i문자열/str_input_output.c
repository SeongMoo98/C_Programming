#include <stdio.h>
#include <stdlib.h>

#define MAX_LINE 80
#define MAX_STR 3

int main(void)
{
	char str1[MAX_LINE] = "C programming", str2[MAX_LINE] = "language";
	char temp[MAX_LINE];
	
	puts(str1);
	puts(str2);
	printf("%s", str1);
	printf("%s\n", str2);

	sprintf_s(temp, "%s %s is beautiful\n", str1, str2); ///////
	printf("%s", temp);



	return 0;
}