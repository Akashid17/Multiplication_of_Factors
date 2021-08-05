
def MultFact(iNo):

    if(iNo < 0):
        iNo = -iNo

    iMult = 1

    if(iNo == 0):
        iMult = 0
    else:

        for x in range(1,iNo):
            if(iNo%x == 0):
                iMult *= x
    return iMult

if __name__ == "__main__":

    iValue = int(input("Enter Number\n"))

    iRet = MultFact(iValue)
    print(iRet)