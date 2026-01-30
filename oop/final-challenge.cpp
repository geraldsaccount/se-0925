#include <iostream>
#include <string>

using namespace std;

struct Student {
    string name;
    int note;
};

// Aufgabe 1: Implementiere die Ausgabe per Referenz (Effizienz!)
void printStudent(const Student& s) {
    // TODO: Gib Name und Note aus
}

// Aufgabe 2: Implementiere die Noten-Änderung per Pointer
void updateNote(Student* s, int neueNote) {
    // TODO: Ändere die Note des Studenten über den Pointer
}

int main() {
    int anzahl;
    cout << "Wie viele Studenten? ";
    cin >> anzahl;

    // Aufgabe 3: Reserviere dynamisch Speicher für ein Array von Studenten
    // TODO: Student* klasse = ...

    for (int i = 0; i < anzahl; i++) {
        klasse[i].name = "Student_" + to_string(i);
        klasse[i].note = 4; // Standardnote
    }

    // Aufgabe 4: Nutze Pointer-Arithmetik (ptr++), um die Note 
    // des zweiten Studenten auf 1 zu setzen (falls vorhanden)
    if (anzahl >= 2) {
        // TODO: Nutze updateNote mit Pointer-Arithmetik
    }

    // Aufgabe 5: Gib alle Studenten aus (nutze printStudent)
    
    // Aufgabe 6: Denke an das Aufräumen!
    // TODO: Speicher freigeben

    return 0;
}