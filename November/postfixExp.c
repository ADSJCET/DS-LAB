//Evaluation on Postfix
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#define MAX 20
char POSTFIX[MAX];
int stack[MAX], TOP = -1;

int power(int x, int y)
{
       int i,z=1;
       for (i=0;i<y;i++)
              z *= x;
       return z;  
}
void PUSH(int n)
{
	if (TOP  < MAX -1)
		stack[++TOP ] = n;
	else printf("Wrong Expression\n");
}
int POP()
{	
	int n;
	if (TOP > -1)
	{
		n = stack[TOP];
		stack[TOP--] = -1;
		return n;
	}
	else
	{
		printf("STACK underflow\n");
		exit(-1);
	}
}
int main()
{
	int i, a, b, value;
	char ch;
	
	for(i=0; i<MAX; i++)
		stack[i] = -1;
		
	printf("\nEnter POSTFIX Expression ");
	scanf("%s",POSTFIX);
	
	for(i=0; POSTFIX[i] != '\0'; i++)
	{
		ch = POSTFIX[i];
		if(isdigit(ch))
		{
		
		PUSH(ch -'0');
		}
			
		else if(ch == '+' || ch == '-' || ch == '*' || ch == '/'|| ch == '^')
		{
			b = POP();
			a = POP();
			switch(ch)
			{
				case '+': value = a+b;
					  break;
				case '-': value = a-b;
					  break;
				case '*': value = a*b;
					  break;
				case '/': value = a/b;
					  break;
				case '%':value = a%b;
					  break;
			       case '^': value = power(a,b);
			                break;
			}
			PUSH(value);
		}		
	}
	printf("\nAfter Evaluation = %d\n",POP());
}




