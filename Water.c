//Returning # water bottles equivalent to minutes of shower use.
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //Get showering time from user
    printf("How many minutes is your average shower?\n");
    int n = GetInt();
    
    //# water bottles == (shower n minutes * flow (1.5 gal/min) * 128oz/gal) / 16oz/bottle
    int bottles = (n*1.5*128)/16;
    printf("minutes: %d\n", bottles);
}
