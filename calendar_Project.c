//Leap year functionality
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {
    system("Color 4F");
    system("cls");
    int a, b, c, i, j, count = 6, next, startingDay, year;

    printf("\nHELLO FRIEND, I CAN PRINT THE CALENDAR OF THE YEAR");
    printf("\nPress any key to continue");
    getch();
    system("cls");

    printf("Please enter the calendar year: ");
    scanf("%d", &year);
    
    char space = ' ';
    char month[][15] = {"JANUARY", "FEBRUARY", "MARCH", "APRIL", "MAY", "JUNE", "JULY", "AUGUST", "SEPTEMBER", "OCTOBER", "NOVEMBER", "DECEMBER"};
    int dayOfMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    char days[][10] = {"SUN", "MON", "TUE", "WED", "THUR", "FRI", "SAT"};
    printf("\n\t  WELCOME TO %d CALENDAR\n", year);

    j = (((year - 1) * 365) + ((year - 1) / 4) - ((year - 1) / 100) + ((year) / 400) + 1) % 7;

    if ((year % 400) == 0 || ((year % 4) == 0 && (year % 100) != 0))
    {
        dayOfMonth[1] = 29;
    }
    
    for ( a = 0; a < 12; a++)
    { 
        printf("\n  -----------------------------------------\n");
        printf("                 %s                 \n", month[a]);
        printf("  -----------------------------------------\n");
        for ( b = 0; b < 7; b++)
        {
            printf("%6s", days[b]);
        }
        printf("\n");
        if (j != 0 )
        {
            for ( c = 0; c < j; c++)
            {
                printf("%6c", space);
            }
        }
        
        for ( i = 0; i < dayOfMonth[a]; i++)
        {
            if (j > 6)
            {
                printf("\n");
                j = 0;
            }
            printf("%6d", i+1);
            ++j;
        }
        printf("\n");
    }
    printf("\nPress any key to exit");
    getch();
    return 0;
}