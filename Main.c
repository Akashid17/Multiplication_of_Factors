
#include<stdio.h>

int MultFact(int iNo)
{
	if(iNo < 0)
	{
		iNo = -iNo;
	}

	int iMult = 1;

	if(iNo == 0)
	{
		iMult = 0;
	}
	else
	{
		for(int i = 1; i <= iNo/2; i++)
		{
			if(iNo%i == 0)
			{
				iMult *= i;
			}
		}
	}

	return iMult;
}

int main()
{
	int iValue = 0;

	printf("Enter Number\n");
	scanf("%d",&iValue);

	int iRet = MultFact(iValue);

	printf("%d\n",iRet);

	return 0;
}