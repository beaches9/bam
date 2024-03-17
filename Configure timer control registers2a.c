#include<reg51.H>

void Delay(void);

void main(void)
{
	while(1)
	{
		P1 = 0xFF;	
		Delay();
		P1 = 0x00;	
		Delay();
	}
}

void Delay(void)
{
	int j;
	int i;
	for(i = 0; i < 1000; i++)
	{
	}
	for(j = 0; j < 1000; j++)
	{
	}
}