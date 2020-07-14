// this is a program to calculate the number of coins used for handing out change using US coins


// importing packages
#include <stdio.h>
#include <cs50.h>
#include <math.h>

int num_coins(float change);

int main(void)
{

    int cc = num_coins(0.99);
    printf("Number of coins used: %i\n", cc);



}


int num_coins(float change)
{
    int cents;
    int coins = 0;
    int penny = 1;
    int nickel = 5;
    int dime = 10;
    int quarter = 25;


    do
    {
        change = get_float("Change owed: ");
    }
    while (change <= 0);

    cents = round(change * 100);

    while (cents != 0)
    {
        if (cents >= quarter)
        {
            cents -= quarter;
            coins++;
        }
        else if (cents < quarter && cents >= dime)
        {
            cents -= dime;
            coins++;
        }
        else if (cents < dime && cents >= nickel)
        {
            cents -= nickel;
            coins++;
        }
        else if (cents < nickel && cents >= penny)
        {
            cents -= penny;
            coins++;
        }

    }
    return coins;

}