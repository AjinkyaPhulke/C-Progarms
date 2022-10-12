# include <stdio.h>
int Multiplication(int iValue1,int iValue2)
    {
        int iAns;
        iAns = iValue1 * iValue2;
        printf("Multiplication is  %d\n",iAns);

    }


int main()
    {   
        int iNo1 = 0,iNo2 = 0;
        int iMult=0;

        printf("Enter First No \n");
        scanf("%d",&iNo1);

        printf("Enter Second No \n");
        scanf("%d",&iNo2);

        printf("First No is %d\n",iNo1);
        printf("Second No is %d\n",iNo2);

        iMult = Multiplication(iNo1,iNo2);
        return 0;

    }