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
	z��� ������ �� ������°�?!?!?!
	number+com(number)��� ���� ����  com_number�� �������� ������ ��µǴ� ���� �ٸ��� ������ �����̴�.
	�Լ� com(number)�� ���� �� ���� ���� �޶����� �����̴�.
	������ z��� ������ �̿��Ͽ� ���� ���� �Լ��� �ְ� com_number�� �����ϸ� ��µǴ� ���� ���� ����ȴ�.
	*/

	srand((long) time(NULL));

	printf("���� �Ͻ÷��� ������ �İ� �� �ϳ��� ���ϼ���\n");
	printf("1.����\n");
	printf("2.�İ�\n");

	scanf("%d",&first_gamer);

	if((first_gamer<1)||(first_gamer>2))
	{
		printf("�߸� �Է��ϼ̽��ϴ�.\n");
		printf("1.����\n");
		printf("2.�İ�\n");
		scanf("%d",&first_gamer);

	}

	if(first_gamer==1)
	{
		while(number<30)
		{
			printf("��:");
			scanf("%d",&number);
			my_number=number;

		if(my_number==29)
		{
			printf("����ڰ� �̰���ϴ�\n");
			break;
		}
			
			z=number+com(number,my_number,1);
			printf("��ǻ��: %d\n",z);
			com_number=z;
			
		if(com_number==29)
		{
			printf("��ǻ�Ͱ� �̰���ϴ�.\n");
			break;
		}
		
		}


	}

	if(first_gamer==2)
	{
		while(number<30)
		{
			z=number+com(number,my_number,2);
			printf("��ǻ��: %d\n",z);
			com_number=z;

		if(com_number==29)
		{
			printf("��ǻ�Ͱ� �̰���ϴ�.\n");
			break;
		}

			printf("��:");
			scanf("%d",&number);
			my_number=number;

		if(my_number==29)
		{
			printf("����ڰ� �̰���ϴ�\n");
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