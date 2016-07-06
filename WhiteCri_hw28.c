#include<stdio.h>
#include<conio.h>
#include<string.h>


int main(void)
{
	char ch;
	int alphabet = 0;
	int number = 0;
	int ste = 0;
	int guitar = 0;
	printf("영문 문장을 입력 하시오 : \n");
	while ((ch = getchar()) != EOF)
	{
		if ('a' <= ch&&'z' >= ch)
			alphabet++;
		else if ('0' <= ch&&ch <= '9')
			number++;
		else if (ch == '\n' || ch == '\t' || ch == ' ')
			ste++;
		else guitar++;
	}
	printf("영문자 대소문자 개수 : %d\n", alphabet);
	printf("숫자문자 개수 : %d\n", number);
	printf("여백문자 개수 : %d\n", ste);
	printf("그 외 기타문자 개수 : %d\n", guitar);
	return 0;

}
