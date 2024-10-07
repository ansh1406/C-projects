#include <stdio.h>

int calculate_fivehundred(int rupees);
int calculate_twohundred(int rupees);
int calculate_onehundred(int rupees);
int calculate_fifty(int rupees);
int calculate_twenty(int rupees);
int calculate_ten(int rupees);
int calculate_five(int rupees);
int calculate_two(int rupees);
int calculate_one(int rupees);

int main(void)
{
    // Getting money to be given
    int rupees=0;
    do
    {
        printf("Change owed: ");
        scanf("%d", &rupees);
    } while (rupees < 0);

    // Getting and printing different value currency by calling function and updating rupees value after each

    int fivehundred = calculate_fivehundred(rupees);
    printf("Number of fivehundred: %d\n", fivehundred);
    rupees = rupees - (fivehundred * 500);

    int twohundred = calculate_twohundred(rupees);
    printf("Number of twohundred: %d\n", twohundred);
    rupees = rupees - (twohundred * 200);

    int onehundred = calculate_onehundred(rupees);
    printf("Number of onehundred: %d\n", onehundred);
    rupees = rupees - (onehundred * 100);

    int fifty = calculate_fifty(rupees);
    printf("Number of fifty: %d\n", fifty);
    rupees = rupees - (fifty * 50);

    int twenty = calculate_twenty(rupees);
    printf("Number of twenty: %d\n", twenty);
    rupees = rupees - (twenty * 20);

    int ten = calculate_ten(rupees);
    printf("Number of ten: %d\n", ten);
    rupees = rupees - (ten * 10);

    int five = calculate_five(rupees);
    printf("Number of five: %d\n", five);
    rupees = rupees - (five * 5);

    int two = calculate_two(rupees);
    printf("Number of two: %d\n", two);
    rupees = rupees - (two * 2);

    int one = calculate_one(rupees);
    printf("Number of one: %d\n", one);
    rupees = rupees - (one * 1);
    
    // Printing total notes/coins to be given
    printf("Total: %d\n", fivehundred + twohundred +onehundred + fifty + twenty + ten + five + two + one);
}

// Different functions to calculate different currencies

int calculate_fivehundred(int rupees)
{
    int fivehundred = 0;
    while (rupees >= 500)
    {
        fivehundred++;
        rupees = rupees - 500;
    }
    return fivehundred;
}

int calculate_twohundred(int rupees)
{
    int rupeeshundred = 0;
    while (rupees >= 200)
    {
        rupeeshundred++;
        rupees = rupees - 200;
    }
    return rupeeshundred;
}

int calculate_onehundred(int rupees)
{
    int onehundred = 0;
    while (rupees >= 100)
    {
        onehundred++;
        rupees = rupees - 100;
    }
    return onehundred;
}

int calculate_fifty(int rupees)
{
    int fifty = 0;
    while (rupees >= 50)
    {
        fifty++;
        rupees = rupees - 50;
    }
    return fifty;
}

int calculate_twenty(int rupees)
{
    int twenty = 0;
    while (rupees >= 20)
    {
        twenty++;
        rupees = rupees - 20;
    }
    return twenty;
}

int calculate_ten(int rupees)
{
    int ten = 0;
    while (rupees >= 10)
    {
        ten++;
        rupees = rupees - 10;
    }
    return ten;
}

int calculate_five(int rupees)
{
    int five = 0;
    while (rupees >= 5)
    {
        five++;
        rupees = rupees - 5;
    }
    return five;
}

int calculate_two(int rupees)
{
    int two = 0;
    while (rupees >= 2)
    {
        two++;
        rupees = rupees - 2;
    }
    return two;
}

int calculate_one(int rupees)
{
    int one = 0;
    while (rupees >= 1)
    {
        one++;
        rupees = rupees - 1;
    }
    return one;
}
