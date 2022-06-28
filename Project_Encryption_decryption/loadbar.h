#include<iostream>
#include<windows.h>
#include<stdlib.h>

using namespace std;

void loadingBar()
{
    // 0 - black background,
    // A - Green Foreground
    system("color 0A");

    // Initialize char for printing
    // loading bar
    char a = 177, b = 219;

    printf("\n");
    printf("\n\t\t\t\t\t\t\t\t\t\t\tProcessing...\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t");

    // Print initial loading bar
    for (int i = 0; i < 26; i++)
        printf("%c", a);

    // Set the cursor again starting
    // point of loading bar
    printf("\r");
    printf("\t\t\t\t\t\t\t\t\t\t\t");

    // Print loading bar progress
    for (int i = 0; i < 26; i++)
    {
        printf("%c", b);

        // Sleep for 1 second
        Sleep(250);
    }
    system("CLS");
}

void enloadingBar()
{
    // 0 - black background,
    // A - Green Foreground
    system("color 0A");

    // Initialize char for printing
    // loading bar
    char a = 177, b = 219;

    printf("\n");
    printf("\n\t\t\t\t\t\t\t\t\t\t\tHidding your password...\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t");

    // Print initial loading bar
    for (int i = 0; i < 26; i++)
        printf("%c", a);

    // Set the cursor again starting
    // point of loading bar
    printf("\r");
    printf("\t\t\t\t\t\t\t\t\t\t\t");

    // Print loading bar progress
    for (int i = 0; i < 26; i++)
    {
        printf("%c", b);

        // Sleep for 1 second
        Sleep(250);
    }
    system("CLS");
}

void deloadingBar()
{
    // 0 - black background,
    // A - Green Foreground
    system("color 0A");

    // Initialize char for printing
    // loading bar
    char a = 177, b = 219;

    printf("\n");
    printf("\n\t\t\t\t\t\t\t\t\t\t\tSeeking your password...\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t");

    // Print initial loading bar
    for (int i = 0; i < 26; i++)
        printf("%c", a);

    // Set the cursor again starting
    // point of loading bar
    printf("\r");
    printf("\t\t\t\t\t\t\t\t\t\t\t");

    // Print loading bar progress
    for (int i = 0; i < 26; i++)
    {
        printf("%c", b);

        // Sleep for 1 second
        Sleep(250);
    }
    system("CLS");
}
