#include <stdio.h>
struct date
{
    int day;
    int month;
    int year;
};

int main()
{
    struct date pdate, bdate;

    int subday, submonth, subyear;
    printf("Enter your present date(DD//MM//YYYY): ");
    scanf("%d%d%d", &pdate.day, &pdate.month, &pdate.year);

    printf("\nEnter your birth date(DD//MM//YYYY): ");
    scanf("%d%d%d", &bdate.day, &bdate.month, &bdate.year);

    printf("\nYour Age: ");

    // for day calclution
    if (pdate.day > bdate.day)
    {
        subday = pdate.day - bdate.day;
        printf("day=%d", subday);
    }
    if (pdate.day < bdate.day)
    {
        subday = (pdate.day + 30 - bdate.day);
        bdate.month = bdate.month + 1;
        printf("day=%d", subday);
    }

    // for month calclution
    if (pdate.month > bdate.month)
    {
        submonth = pdate.month - bdate.month;
        printf(" month=%d", submonth);
    }
    if (pdate.month < bdate.month)
    {
        submonth = (pdate.month + 12 - bdate.month);
        bdate.year = bdate.year + 1;
        printf(" month=%d", submonth);
    }

    // for year calclution
    if (pdate.year > bdate.month)
    {
        subyear = pdate.year - bdate.year;
        printf(" year=%d", subyear);
    }
}
