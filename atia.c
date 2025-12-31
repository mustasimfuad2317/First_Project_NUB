#include <stdio.h>//FUAD
#include <stdlib.h>

#define PASSWORD "atia"
#define MAX_ATTEMPTS 3

int checkPassword(char input[])
{
    int i = 0;
    while (PASSWORD[i] != '\0' && input[i] != '\0')
    {
        if (PASSWORD[i] != input[i])
            return 0;
        i++;
    }
    if (PASSWORD[i] == '\0' && input[i] == '\0')
        return 1;
    else
        return 0;
}

int main()
{
    int choice;
    char pass[20];
    int attempts;

    while (1)
    {
        printf("\n====== CMD Shortcut Menu ======\n");
        printf("1. Open Notepad\n");
        printf("2. Open Calculator\n");
        printf("3. Open Google Chrome\n");
        printf("4. Open File Explorer\n");
        printf("5. Open Paint\n");
        printf("6. Open Command Prompt\n");
        printf("7. Open Task Manager\n");
        printf("8. Open Control Panel\n");
        printf("9. Open System Information\n");
        printf("10. Shutdown System (Password Protected)\n");
        printf("11. Restart System (Password Protected)\n");
        printf("12. Open Windows Settings\n");
        printf("13. Exit Shell\n");
        printf("============================\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            system("start notepad");
            break;
        case 2:
            system("start calc");
            break;
        case 3:
            system("start chrome");
            break;
        case 4:
            system("start explorer");
            break;
        case 5:
            system("start mspaint");
            break;
        case 6:
            system("start cmd");
            break;
        case 7:
            system("start taskmgr");
            break;
        case 8:
            system("start control");
            break;
        case 9:
            system("start msinfo32");
            break;

        case 10:
            // Shutdown with password
            attempts = 0;
            while (attempts < MAX_ATTEMPTS)
            {
                printf("Enter password: ");
                scanf("%s", pass);

                if (checkPassword(pass))
                {
                    system("shutdown /s /t 10");
                    break;
                }
                else
                {
                    attempts++;
                    printf("Wrong password! Attempts left: %d\n", MAX_ATTEMPTS - attempts);
                }
            }
            if (attempts == MAX_ATTEMPTS)
                printf("Too many wrong attempts! Shutdown blocked.\n");
            break;
        case 11:
            // Restart with password
            attempts = 0;
            while (attempts < MAX_ATTEMPTS)
            {
                printf("Enter password: ");
                scanf("%s", pass);

                if (checkPassword(pass))
                {
                    system("shutdown /r /t 10");
                    break;
                }
                else
                {
                    attempts++;
                    printf("Wrong password! Attempts left: %d\n", MAX_ATTEMPTS - attempts);
                }
            }
            if (attempts == MAX_ATTEMPTS)
                printf("Too many wrong attempts! Restart blocked.\n");
            break;

        case 12:
            system("start ms-settings:");
            break;

        case 13:
            printf("Exiting Mini CMD Shell...\n");
            return 0;

        default:
            printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}