# 🏛️ C++ OOP Starter-Challenge

Willkommen in der Welt der Objekte! Diese Übungen führen dich Schritt für Schritt von einfachen Datenstrukturen (`structs`) hin zu professioneller Klassenarchitektur in C++.

## 📂 Enthaltene Aufgaben

1.  **`struct-basics.cpp`**:
    * **Thema**: Datenbündelung.
    * **Fokus**: Wie man verschiedene Variablen zu einem logischen Objekt zusammenfasst.

2.  **`class-encapsulation.cpp`**:
    * **Thema**: Kapselung (Data Hiding).
    * **Fokus**: Warum `private` wichtig ist, um Daten vor unerlaubtem Zugriff zu schützen.

3.  **`constructors.cpp`**:
    * **Thema**: Lebenszyklus von Objekten.
    * **Fokus**: Konstruktoren zur Initialisierung und Destruktoren zur Speicherbereinigung.

4.  **`simple-inheritance.cpp`**:
    * **Thema**: Vererbung.
    * **Fokus**: Wie man Code wiederverwendet, indem man spezialisierte Klassen aus Basisklassen ableitet.

5.  **`final-challenge.cpp` (Abschlussaufgabe)**:
    * **Thema**: Full Integration.
    * **Fokus**: Kombination von Structs, dynamischen Arrays, Pointer-Arithmetik und Referenz-Übergabe in einem kleinen Noten-Manager.

## 🚀 Wie man startet

Kompiliere die Aufgaben nacheinander. In C++ ist eine Klasse im Grunde ein Bauplan, während ein Objekt das fertige Haus ist, das nach diesem Plan gebaut wurde.

```bash
g++ class-encapsulation.cpp -o bank
./bank
```

## 🧠 Kernkonzepte der OOP
- **Klasse (Class)**: Der abstrakte Bauplan (Code).
- **Objekt (Object)**: Die konkrete Instanz im Speicher.
- **Methoden**: Funktionen, die "innerhalb" eines Objekts leben und auf dessen Daten operieren.
- **Kapselung**: Der Schutz des internen Zustands durch private. Zugriff erfolgt nur über kontrollierte Schnittstellen (Getter/Setter).