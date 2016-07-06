#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int input(void);
int output(void);
void myflush(void);
int ran;
int num, count = 0,a;
int main()
{
	srand((unsigned int)time(NULL));
	while (1)
	{
		input();
		if (a == 1)
		{
			ran = rand() % 100+1;
			output();
			break;
		}
		else
		{
			myflush();
		}


	}

}
int input(void)
{
	printf("숫자를 입력하시오 : ");
	a= scanf("%d", &num);
	return a;
}
int output(void)
{
	while (1)
	{
		count = 1;
		if (num < ran)
		{
			printf("%d보다 크고 100보다 작습니다.", num);



		}
		else if (num = ran)
		{
			printf("%d번만에 맞추셨어요!", count);
		}
		else
		{
			printf("0보다 크고 %d보다 작습니다.", num);
		}
		count++;

	}
}
void myflush(void)
{
	while (getchar() != '\n');
}
