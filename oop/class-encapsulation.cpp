#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    double balance; // Niemand darf direkt auf das Geld zugreifen!

public:
    // Aufgabe 1: Erstelle einen Konstruktor, der das Startguthaben setzt
    // Aufgabe 2: Erstelle eine Methode "deposit" (einzahlen)
    // Aufgabe 3: Erstelle eine Methode "withdraw", die nur abhebt, wenn genug Geld da ist
    // Aufgabe 4: Erstelle einen Getter für den Kontostand
};

int main() {
    // Aufgabe 5: Teste dein Konto. Versuche, den Kontostand direkt zu ändern (Error!)
    return 0;
}