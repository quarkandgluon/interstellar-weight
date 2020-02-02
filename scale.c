#include <stdio.h>

int main()
{

    float weight;
    int planetCode;
    char *planet;

    printf("What is your weight on Earth?\n");
    scanf("%f", &weight);

    printf("1- Mercury\n2- Venus\n3- Mars\n4- Jupiter\n5- Saturn\n6- Uranus\n7- Neptune\n");
    printf("Pick a Solar System planet from 1 to 7\n");
    scanf("%i", &planetCode);

    float g;

    switch (planetCode)
    {
    case 1:
        g = 0.38;
        planet = "Mercury";
        break;
    case 2:
        g = 0.91;
        planet = "Venus";
        break;
    case 3:
        g = 0.38;
        planet = "Mars";
        break;
    case 4:
        g = 2.34;
        planet = "Jupiter";
        break;
    case 5:
        g = 0.92;
        planet = "Saturn";
        break;
    case 6:
        g = 1.19;
        planet = "Uranus";
        break;
    case 7:
        g = 0.91;
        planet = "Neptune";
        break;
    default:
        printf("Try again, planet not found.");
    }

    float localWeight = weight * g;
    printf("Your weight on %s is %.2f units.\n", planet, localWeight);
}