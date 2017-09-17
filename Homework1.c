#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int com(int n,int b,int c);

int main(void)
{
	int first_gamer;
	int number=0;
	int my_number=0;
	int com_number=0;
	int z;

	/*
	z라는 변수를 왜 만들었는가?!?!?!
	number+com(number)라는 식의 값을  com_number에 넣으려고 했으나 출력되는 값과 다르게 나오기 때문이다.
	함수 com(number)에 넣을 때 마다 값이 달라지기 때문이다.
	때문에 z라는 변수를 이용하여 먼저 난수 함수를 넣고 com_number에 저장하면 출력되는 값과 같게 저장된다.
	*/

	srand((long) time(NULL));

	printf("시작 하시려면 선공과 후공 중 하나를 택하세요\n");
	printf("1.선공\n");
	printf("2.후공\n");

	scanf("%d",&first_gamer);

	if((first_gamer<1)||(first_gamer>2))
	{
		printf("잘못 입력하셨습니다.\n");
		printf("1.선공\n");
		printf("2.후공\n");
		scanf("%d",&first_gamer);

	}

	if(first_gamer==1)
	{
		while(number<30)
		{
			printf("나:");
			scanf("%d",&number);
			my_number=number;

		if(my_number==29)
		{
			printf("사용자가 이겼습니다\n");
			break;
		}
			
			z=number+com(number,my_number,1);
			printf("컴퓨터: %d\n",z);
			com_number=z;
			
		if(com_number==29)
		{
			printf("컴퓨터가 이겼습니다.\n");
			break;
		}
		
		}


	}

	if(first_gamer==2)
	{
		while(number<30)
		{
			z=number+com(number,my_number,2);
			printf("컴퓨터: %d\n",z);
			com_number=z;

		if(com_number==29)
		{
			printf("컴퓨터가 이겼습니다.\n");
			break;
		}

			printf("나:");
			scanf("%d",&number);
			my_number=number;

		if(my_number==29)
		{
			printf("사용자가 이겼습니다\n");
			break;
		}
		}



	}


	return 0;

}


int com(int number ,int my_number, int first_gamer)
{
	number = rand()%3+1;

	if(first_gamer==2)
	{
		
		if((my_number%3==0)||(my_number==7)||(my_number==11)||(my_number==19)||(my_number==23))
		{
			do
			{
				number = rand()%3+1;
			}while(number!=2);
		}
		
		if((my_number%2==0)&&(my_number%4!=0))
		{
			do
			{
				number = rand()%3+1;
			}while(number!=3);
		}
		
		
		if(my_number%4==0)
		{
			do
			{
				number = rand()%3+1;
			}while(number!=1);
		}

	}




	return number;
}