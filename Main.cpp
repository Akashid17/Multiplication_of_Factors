
#include<iostream>

using namespace std;

class ArithmeticX
{
    public:
        int iMult;
        ArithmeticX();
        int MulFact(int);
};

ArithmeticX::ArithmeticX()
{
    iMult = 1;
}

int ArithmeticX::MulFact(int iNo)
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

int main()
{
    int iValue = 0;

    cout<<"Enter Numnber\n";
    cin>>iValue;

    ArithmeticX aobj;

    int iRet = aobj.MulFact(iValue);

    cout<<iRet<<endl;

    return 0;
}