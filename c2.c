#include<stdio.h>
int main()
{
    int status;
    printf("Enter LED status(1 for ON,0 for OFF):");
    scanf("%d",&status);

    if(status==1)
        printf("LED is ON\n");
    else if(status==0)
        printf("LED is OFF");

    else
        printf("Invalid LED Status\n");*/
{
    int status;
    printf("Enter LED status\n");
    printf("1.LED ON\n");
    printf("2.LED OFF\n");
    printf("3.LED BLINKING\n");

    printf("enter your choice:");
    scanf("%d",&status);

       switch(status)
    {
    case 1:
        printf("LED is ON");
        break;
    case 2:
        printf("LED is OFF");
        break;
    case 3:
        printf("LED is BLINKING");
        break;
    case 4:

    default:
        printf("Invalid LED status");
    }



}a = float(input("Enter the first number: "))
b = float(input("Enter the second number: "))

print("1. Addition")
print("2. Subtraction")
print("3. Multiplication")
print("4. Division")

choice = int(input("Enter your choice (1-4): "))

switch (choice)
{


    case 1:
        print("Addition =", a + b)

    case 2:
        print("Subtraction =", a - b)

    case 3:
        print("Multiplication =", a * b)

    case 4:
        if b != 0:
            print("Division =", a / b)
        else:
            print("Cannot divide by zero")

    default:
        print("Invalid choice")

}
#include <stdio.h>

int main()
{
int choice;
int led_status = 0;

do
{
    printf("\n----- LED CONTROL SYSTEM -----\n");
    printf("1. LED ON\n");
    printf("2. LED OFF\n");
    printf("3. LED BLINKING\n");
    printf("4. Display LED STATUS\n");
    printf("5. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            led_status = 1;
            printf("LED is ON\n");
            break;

        case 2:
            led_status = 0;
            printf("LED is OFF\n");
            break;

        case 3:
            printf("LED is BLINKING (simulation)\n");
            break;

        case 4:
            if (led_status == 1)
            {
                printf("Current LED status: ON\n");
            }
            else
            {
                printf("Current LED status: OFF\n");
            }
            break;

        case 5:
            printf("Exiting LED Control System...\n");
            break;

        default:
            printf("Invalid choice! Please try again.\n");
    }

} while (choice != 5);

return 0;

}


