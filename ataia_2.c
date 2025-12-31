#include <stdio.h>
#include <stdlib.h>

int main() {
    int choice;

    while (1) {
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
        printf("10. Shutdown System \n");
        printf("11. Restart System \n");
        printf("12. Open Windows Settings\n");
        printf("13. Exit Shell\n");
        printf("============================\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
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
                system("start cmd"); break;
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
                system("shutdown /s /t 10");
                break;
            case 11: 
                system("shutdown /r /t 10"); 
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
