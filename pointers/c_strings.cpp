#include <iostream>
using namespace std;

// Hilfsfunktion für Aufgabe 3
void toUpperCase(char *str)
{
    // Implementierung hier...
}

int main()
{
    char text[] = "workshop c++";

    // Aufgabe 1: Erstelle einen Pointer 'p', der auf den Anfang des Arrays 'text' zeigt.

    // Aufgabe 2: Iteriere mit einer while-Schleife und dem Pointer 'p' durch den Text.
    // Gib jedes Zeichen einzeln aus.
    // WICHTIG: Die Schleife soll stoppen, wenn das Null-Byte ('\0') erreicht ist.
    // Benutze keinen Integer-Index (i)!

    cout << endl;

    // Aufgabe 3: Implementiere die Funktion 'toUpperCase' oben.
    // Sie soll einen Pointer annehmen und alle Kleinbuchstaben im Text in Großbuchstaben umwandeln.
    // Tipp: Ein Kleinbuchstabe 'a' wird zu 'A', indem man 32 abzieht (oder 'a' - 'A' nutzt).
    // Rufe die Funktion hier auf und gib das Ergebnis aus.

    cout << "Manipulierter Text: " << text << endl;

    return 0;
}