/*Program by Emmanuel Montes Lugo, 22-Feb-2022*/
#include <cs50.h>
#include <stdio.h>

int main (void)
{
    string name = "Emmanuel";
    float cel = get_float ("Escribe los grados en Celsius: ");
    float conv_F = ((cel * 9) / 5) + 32;
    printf ("%s, los grados Celsius que escribiste son: °C %.1f\n", name, cel);
    printf ("Por lo tanto, los grados equivalentes a Fahrenheit son: °F %.1f\n", conv_F);
}