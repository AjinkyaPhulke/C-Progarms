# include <stdio.h>
void multiplication_of_two_no()
    {
        int iNo1 = 0,iNo2 = 0,output;

        printf("Enter First No \n");
        scanf("%d",&iNo1);

        printf("Enter Second No \n");
        scanf("%d",&iNo2);

        printf("First No is %d\n",iNo1);
        printf("Second No is %d\n",iNo2);

        output = iNo1*iNo2;
        printf("output %d",output);

    }


int main()
    {
        multiplication_of_two_no();
        return 0;

    }