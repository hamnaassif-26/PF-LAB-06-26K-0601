#include <stdio.h>

int main()
{
    int age, movie_type, day;
    float rate, discount, final_price;

    do
    {
        printf("Enter Your Age: ");
        scanf("%d", &age);

        if (age == 0)
        break;

        printf("\n======THE RIVERSIDE MULTIPLEX TICKETING KIOSK======\n\n");

        printf("Select Movie Type:\n");
        printf("1. Regular Movie\n");
        printf("2. 3D Movie\n");
        printf("3. Premiere Movie\n");
        scanf("%d", &movie_type);

        switch (movie_type)
        {
            case 1:
                rate = 500;
                printf("=====REGULAR MOVIE=====\n");
                break;

            case 2:
                rate = 800;
                printf("=====3D MOVIE=====\n");
                break;

            case 3:
                rate = 1200;
                printf("=====PREMIERE MOVIE=====\n");
                break;
        }

        if (age < 13)
        {
            discount = rate * 0.30;
        }
        else if (age >= 60)
        {
            discount = rate * 0.20;
        }
        else
        {
            discount = 0;
        }

        final_price = rate - discount;

        printf("Enter Day no: ");
        scanf("%d", &day);

        if (day % 5 == 0)
        {
            printf("=====BONUS DAY=====\n");
            final_price = final_price - 50;
        }

        if (final_price < 100)
        {
            final_price = 100;
        }

        printf("\n=====MOVIE TICKET RECEIPT=====\n\n");
        printf("Rate = %.0f\n", rate);
        printf("Discount = %.2f\n", discount);
        printf("Final Fee: %.0f\n\n", final_price);

    } while (age != 0);

    return 0;
}
