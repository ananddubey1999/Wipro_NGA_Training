/*

demo on unformatted io sts

getc(), getchar()=> scan for singal chars
fgetc()
putc(), fputc() => print singal char on output 


gets() => scan the strings

puts() => print the strings on output
*/

#include <stdio.h>
/*
int main()
{
	char ch;

	
	ch = getchar();
	//printf("\nread character from stdin is: %c", ch);
	putchar(ch);
	
	
	getc(stdin);
	ch = getc(stdin);
	putc(ch,stdout);

	printf("\n\n");
	return 0;
}
*/

int main()
{
	char str1[20];

	puts("\nEnter a string: ");
	//fgets(str1, 19,stdin);
	scanf("%[^\n]s",str1);

	puts(str1);
	printf("\n\n");

	return 0;
}