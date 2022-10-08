#include <stdio.h>
#include <conio.h>

int main()
{
    /*****************************/
    /*  ATM Powered By SHUBHADIP*/
    /***************************/

    int password;
    float x, y;
    char ch;
    printf("Welcome To Allahabad ATM\n");
    printf("Enter ATM Password:\n");
    scanf("%d", &password);
    if (password == 7216)
    {

        printf("Enter Initial Amount:\n");
        scanf("%f", &x);

        printf("Enter\n C for credit \n D for credit \n B for credit \n ");
        scanf("\n%c", &ch);

        switch (ch)
        {
        case 'c':
            printf("You choose credit option.\n");
            printf("Now Enter Credit Amount: \n");
            scanf("%f", &y);
            x = x + y;
            printf("New A mount is:\n %0.2f", x);
            break;

        case 'd':
            printf("You choose debit option.\n");
            printf("Now Enter Debit Amount:\n");
            scanf("%f", &y);
            if (x >= y)
            {
                x = x - y;
                printf("New A mount is: %0.2f", x);
            }
            else
            {
                printf("Insufficinet Balance");
            }

            break;

        case 'b':
            printf("You choose balance option.\n");
            printf("Your account balance is: %0.2f", x);
            break;

        default:
            printf("You choose wrong keyword");
            break;
        }
    }

    else
    {
        printf("You entered wrong password");
    }
    getch();
    return 0;
}