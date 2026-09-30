#include <stdio.h>

int main()
{
    int access, hour;
    int pool = 1;
    int sauna = 2;
    int trainer = 4;
    int full_day = 8;

    printf("===== EVERLINE GYM MEMBERSHIP SYSTEM =====\n\n");

    printf("Enter Member Access Number (9999 to exit): ");
    scanf("%d", &access);

    while (access != 9999)
    {
        printf("Enter Current Hour (0-23): ");
        scanf("%d", &hour);

        /* Display Mode using ternary operator */

        printf("\nMode: %s\n",(hour >= 22 || hour < 6) ? "LATE NIGHT MODE" : "STANDARD MODE");

        /* Entry decision */

        if (hour >= 22 || hour < 6)
        {
            /* Late Night: only Full-Day Access */

            printf("Entry: %s\n", (access & full_day) ? "ALLOWED" : "DENIED");
        }
        else
        {
            /* Standard: Pool OR Sauna OR Trainer */

            printf("Entry: %s\n",((access & pool) ||(access & sauna) ||(access & trainer))? "ALLOWED": "DENIED");
        }

        /* Trainer Access */

        printf("Personal Trainer Access: %s\n",(access & trainer)? "YES": "NO");

        printf("\n----------------------------------\n");

        printf("Enter Member Access Number (9999 to exit): ");
        scanf("%d", &access);
    }

    printf("\nShift ended. No more members can check in.\n");

    return 0;
}
