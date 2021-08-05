
using System;

class ArithmeticX
{
	public
		int MulFact(int iNo)
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
				int i = 1;

				while(i <= iNo/2)
				{
					if(iNo%i == 0)
					{
						iMult *= i;
					}

					i++;
				}
			}
			return iMult;
		}
}

class main
{
	public static void Main(string[] args)
	{
		Console.WriteLine("Enter Number");
		int iValue = Convert.ToInt32(Console.ReadLine());

		ArithmeticX aobj = new ArithmeticX();
		int iRet = aobj.MulFact(iValue);

		Console.WriteLine(iRet);
	}
}