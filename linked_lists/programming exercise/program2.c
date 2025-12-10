#include<stdio.h>
#include<string.h>

struct Train{
    char name[50];
    int hours;
    int minutes;
    char period[3];
};

void clearBuffer()
{
    int c;
    while((c = getchar()) != '\n' && c != EOF);
}

int convertToRailTime(int hours,char period[])
{
    if(strcmp(period,"AM") == 0 || strcmp(period,"am") == 0)
    {
        if(hours == 12)
        {
            return 0;
        }
        return hours;
    }
    else
    {
        if(hours == 12)
        {
            return 12;
        }
        return hours + 12;
    }
}

void main()
{
    struct Train trains[5];

    printf("==== Train Arrival Time Entry ====\n\n");

    for(int count = 0; count < 5; count++)
    {
        printf("Train %d:\n",count+1);

        printf(" Enter train name : ");
        fgets(trains[count].name,50,stdin);
        trains[count].name[strcspn(trains[count].name, "\n")] = '\0';

        printf(" Enter arrival time (hours 1-12): ");
        scanf("%d", &trains[count].hours);

        printf(" Enter arrival time (minutes 0-59): ");
        scanf("%d", &trains[count].minutes);
        clearBuffer();

        printf(" Enter AM or PM: ");
        fgets(trains[count].period, 3 ,stdin);
        clearBuffer();

        printf("\n");
    }

    // Display in Rail Time Format
    printf("\n========================================\n");
    printf("    TRAIN SCHEDULE (Rail Time Format)    \n");
    printf("========================================\n");
    printf("%-25s %s\n", "Train Name", "Arrival Time");
    printf("----------------------------------------\n");

    for(int count = 0; count < 5; count++)
    {
        int railHours = convertToRailTime(trains[count].hours, trains[count].period);

        printf("%-25s %02d:%02d hrs\n",trains[count].name,railHours,trains[count].minutes);

    }

    printf("========================================\n");

}