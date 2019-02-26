#include<stdio.h>

void play1();
void play2();
char a[3][3];
int z;

int main()
{
	int i,j,k,m;
		
	printf("\n\n\n\t 1 | 2 | 3 \n\t ----------\n \t 4 | 5 | 6 \n\t -----------\n \t 7 | 8 | 9");
	printf("\t\t\t");
	printf("\n\n\n\t   |    |   \n\t ----------\n \t   |    |   \n\t -----------\n \t   |    |   \n");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			a[i][j] = ' ';
		}
	}
	for(m=0;m<9;m++)
	{
		play1();
		
		while(z == 1)
		{
			
			system("cls");
			
			printf("\n\n\n\t 1 | 2 | 3 \n\t ----------\n \t 4 | 5 | 6 \n\t -----------\n \t 7 | 8 | 9");
			printf("\n\n\n\t %c | %c  | %c \n\t ----------\n \t %c | %c  | %c \n\t -----------\n \t %c | %c  | %c \n",a[0][0],a[0][1],a[0][2],a[1][0],a[1][1],a[1][2],a[2][0],a[2][1],a[2][2]);
			printf("\n\twrong move");
			
			play1();
		}
	
		if(a[0][0] == 'O'  && a[0][1] == 'O' && a[0][2] == 'O'){
		
			printf("\n\n\t\tplayer 1 wins");
			break;
		}
		
		else if(a[1][0] == 'O'  && a[1][1] == 'O' && a[1][2] == 'O')
		{
			printf("\n\n\t\tplayer 1 wins");
			break;	
		}
		
		else if(a[2][0] == 'O'  && a[2][1] == 'O' && a[2][2] == 'O')
		{
			printf("\n\n\t\tplayer 1 wins");
			break;	
		}
		
		else if(a[0][1] == 'O'  && a[1][1] == 'O' && a[2][1] == 'O')
		{
			printf("\n\n\t\tplayer 1 wins");
			break;	
		}
		
		else if(a[0][0] == 'O'  && a[1][0] == 'O' && a[2][0] == 'O')
		{
			printf("\n\n\t\tplayer 1 wins");
			break;	
		}
		
		else if(a[0][2] == 'O'  && a[1][2] == 'O' && a[2][2] == 'O')
		{
			printf("\n\n\t\tplayer 1 wins");
			break;	
		}
		else if(a[0][0] == 'O'  && a[1][1] == 'O' && a[2][2] == 'O')
		{
			printf("\n\n\t\tplayer 1 wins");
			break;	
		}
		
		else if(a[2][0] == 'O'  && a[1][1] == 'O' && a[0][2] == 'O')
		{
			printf("\n\n\t\tplayer 1 wins");
			break;	
		}
		
			
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				if(a[i][j] != ' ')
					k=1;
				
				else{
				
					k=0;
					break;	
				}
				if(k == 0)
					break;
			}
		}
		
		if(k == 1){
			printf("\n\n\t\t MATHCH DRAW");
			break;
		}
			
		play2();
		
		while(z == 1)
		{
			system("cls");
			
			printf("\n\n\n\t 1 | 2 | 3 \n\t ----------\n \t 4 | 5 | 6 \n\t -----------\n \t 7 | 8 | 9");
			printf("\n\n\n\t %c | %c  | %c \n\t ----------\n \t %c | %c  | %c \n\t -----------\n \t %c | %c  | %c \n",a[0][0],a[0][1],a[0][2],a[1][0],a[1][1],a[1][2],a[2][0],a[2][1],a[2][2]);
			printf("\n\twrong move");
			
			play2();
		}
		
		if(a[0][0] == 'X'  && a[0][1] == 'X' && a[0][2] == 'X'){
		
			printf("\n\n\t\tplayer 2 wins");
			break;
		}
		
		else if(a[1][0] == 'X'  && a[1][1] == 'X' && a[1][2] == 'X')
		{
			printf("\n\n\t\tplayer 2 wins");
			break;	
		}
		
		else if(a[2][0] == 'X'  && a[2][1] == 'X' && a[2][2] == 'X')
		{
			printf("\n\n\t\tplayer 2 wins");
			break;	
		}
		
		else if(a[0][1] == 'X'  && a[1][1] == 'X' && a[2][1] == 'X')
		{
			printf("\n\n\t\tplayer 2 wins");
			break;	
		}
		
		else if(a[0][0] == 'X'  && a[1][0] == 'X' && a[2][0] == 'X')
		{
			printf("\n\n\t\tplayer 2 wins");
			break;	
		}
		
		else if(a[0][2] == 'X'  && a[1][2] == 'X' && a[2][2] == 'X')
		{
			printf("\n\n\t\tplayer 2 wins");
			break;	
		}
		else if(a[0][0] == 'X'  && a[1][1] == 'X' && a[2][2] == 'X')
		{
			printf("\n\n\t\tplayer 2 wins");
			break;	
		}
		
		else if(a[2][0] == 'X'  && a[1][1] == 'X' && a[0][2] == 'X')
		{
			printf("\n\n\t\tplayer 2 wins");
			break;	
		}
		
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				if(a[i][j] != ' ')
					k=1;
				
				else{
					k=0;
					break;
				}
			}
			if(k == 0)
				break;
		}
		
		if(k == 1)
		{
			printf("\n\n\t\t MATHCH DRAW");
			break;
		}
			
	}
}

void play1()
{
	z=99;
	
	int n,i,j;
	
	printf("\n\n\tenter your move\t");
	scanf("%d",&n);
		
	if(n == 1 && a[0][0] != 'O' && a[0][0] != 'X' )
		a[0][0] = 'O';
	
	else if(n == 2 && a[0][1] != 'O' && a[0][1] != 'X')
		a[0][1] = 'O';
		
	else if(n == 3 && a[0][2] != 'O' && a[0][2] != 'X')
		a[0][2] = 'O';
		
	else if(n == 4 && a[1][0] != 'O' && a[1][0] != 'X')
		a[1][0] = 'O';
		
	else if(n == 5 && a[1][1] != 'O' && a[1][1] != 'X')
		a[1][1] = 'O';
	
	else if(n == 6 && a[1][2] != 'O' && a[1][2] != 'X')
		a[1][2] = 'O';

	else if(n == 7  && a[2][0] != 'O' && a[2][0] != 'X')
		a[2][0] = 'O';
	
	else if(n == 8 && a[2][1] != 'O' && a[2][1] != 'X')
		a[2][1] = 'O';

	else if(n == 9 && a[2][2] != 'O' && a[2][2] != 'X')
		a[2][2] = 'O';
	
	else{
		z=1;
		return;
	}
	
	system("cls");
	printf("\n\n\n\t 1 | 2 | 3 \n\t ----------\n \t 4 | 5 | 6 \n\t -----------\n \t 7 | 8 | 9");
	
	printf("\n\n\n\t %c | %c  | %c \n\t ----------\n \t %c | %c  | %c \n\t -----------\n \t %c | %c  | %c \n",a[0][0],a[0][1],a[0][2],a[1][0],a[1][1],a[1][2],a[2][0],a[2][1],a[2][2]);
}

void play2()
{
	z=99;
	
	int n,i,j;
	
	printf("\n\n\tenter your move\t");
	scanf("%d",&n);
		
	if(n == 1 && a[0][0] != 'O' && a[0][0] != 'X' )
		a[0][0] = 'X';
	
	else if(n == 2 && a[0][1] != 'O' && a[0][1] != 'X')
		a[0][1] = 'X';
		
	else if(n == 3 && a[0][2] != 'O' && a[0][2] != 'X')
		a[0][2] = 'X';
		
	else if(n == 4 && a[1][0] != 'O' && a[1][0] != 'X')
		a[1][0] = 'X';
		
	else if(n == 5 && a[1][1] != 'O' && a[1][1] != 'X')
		a[1][1] = 'X';
	
	else if(n == 6 && a[1][2] != 'O' && a[1][2] != 'X')
		a[1][2] = 'X';

	else if(n == 7  && a[2][0] != 'O' && a[2][0] != 'X')
		a[2][0] = 'X';
	
	else if(n == 8 && a[2][1] != 'O' && a[2][1] != 'X')
		a[2][1] = 'X';

	else if(n == 9 && a[2][2] != 'O' && a[2][2] != 'X')
		a[2][2] = 'X';
	
	else{
		z=1;
		return;
	}
	
	system("cls");
	printf("\n\n\n\t 1 | 2 | 3 \n\t ----------\n \t 4 | 5 | 6 \n\t -----------\n \t 7 | 8 | 9");
	
	printf("\n\n\n\t %c | %c  | %c \n\t ----------\n \t %c | %c  | %c \n\t -----------\n \t %c | %c  | %c \n",a[0][0],a[0][1],a[0][2],a[1][0],a[1][1],a[1][2],a[2][0],a[2][1],a[2][2]);
}
