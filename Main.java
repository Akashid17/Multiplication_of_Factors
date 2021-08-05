
import java.lang.*;
import java.io.*;

class ArithmeticX
{
    int iMult;

    ArithmeticX()
    {
        iMult = 1;
    }

    public int MulFact(int iNo)
    {
        if(iNo < 0)
        {
            iNo = -iNo;
        }

        if(iNo == 0)
        {
            iMult = 0;
        }
        else
        {
            int i = 1;

            do
            {
                if(iNo%i == 0)
                {
                    iMult *= i;
                }

                i++;
            }while(i <= iNo/2);
        }
        return iMult;
    }
}

class Main
{
    public static void main(String[] args)
    {
        BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));

        int iValue = 0;

        try
        {   
            System.out.println("Enter Number");
            iValue = Integer.parseInt(bobj.readLine());
        }
        catch(Exception eobj)
        {}

        ArithmeticX aobj = new ArithmeticX();

        int iRet = aobj.MulFact(iValue);

        System.out.println(iRet);
    }
}