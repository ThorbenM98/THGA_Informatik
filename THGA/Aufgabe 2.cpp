#include <stdio.h>
#include <stdlib.h>
#define newLine printf("\n");


char vorname[50];
char nachname[50];
int jahr;
int jahrAktuell=2026;
char monat[50];
int tag;
int alter;





int berechneJahr(int jahrAktuell, int jahr)
{
       return jahr=jahrAktuell-jahr;
}

int eingabeDerDaten()
{

    printf("Geben sie ihren Namen und ihr Geburtsdatum ein: ");
    newLine;
    printf("Vorname:");
    scanf(" %49s", &vorname);
    newLine;
    printf("Nachname:");
    scanf(" %49s", &nachname);
    newLine;
    printf("Jahr:");
    scanf(" %d", &jahr);
    newLine;
    printf("Monat:");
    scanf(" %49s", &monat);
    newLine;
    printf("Tag:");
    scanf(" %d", &tag);

    return vorname, nachname, jahr, monat, tag;
}

int main()
{

    eingabeDerDaten();
    alter=berechneJahr(jahrAktuell, jahr);
    printf("Ihr Name ist %s %s , sie wurden am %d. %s geboren  und sind %d Jahre alt.", vorname, nachname, tag,monat, alter);

    return 0;
}
