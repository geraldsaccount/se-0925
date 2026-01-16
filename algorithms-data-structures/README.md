# C++ Algorithmen & Datenstrukturen Challenge

Dieses Repository enthält eine Sammlung von Programmierübungen, die darauf abzielen, das Verständnis für **Laufzeitkomplexität (Big O Notation)** und die effiziente Nutzung von **C++ Standard Library (STL)** Datenstrukturen zu schärfen.


## 📂 Enthaltene Aufgaben

1.  **`ordered-lookup.cpp`**:
    * **Thema**: Suchalgorithmen.
    * **Fokus**: Linear Search vs. Binary Search in sortierten Listen.
    
2.  **`frequency-counting.cpp`**:
    * **Thema**: Häufigkeitsanalyse.
    * **Fokus**: Effizientes Zählen von Elementen mittels `std::unordered_map`.

3.  **`finale-challenge.cpp`**: 
    * **Thema**: Datenaggregation (Users & Transactions).
    * **Fokus**: Nested Loops (O(n*m)) vs. Hash Maps (O(n+m)).

4.  **`stack-v-queue.cpp`**:
    * **Thema**: Abstrakte Datentypen (LIFO vs. FIFO).
    * **Fokus**: Simulation einer Undo-Funktion (Stack) und eines Druckers (Queue).

5.  **`unique-visitor-counter.cpp`**:
    * **Thema**: Mengenlehre & Duplikate.
    * **Fokus**: Verwendung von `std::unordered_set` zur Identifizierung eindeutiger Elemente.

## 🚀 Wie man die Aufgaben nutzt

Jede Datei enthält einen `TODO`-Bereich. Dein Ziel ist es, die Funktionen so zu implementieren, dass:
1.  Die Ergebnisse korrekt sind (Verifizierungsschleifen im Code).
2.  Die Performance-Unterschiede in der Konsole sichtbar werden (Timer-Ausgabe).

### Kompilieren
Du kannst die Dateien mit jedem C++ Compiler übersetzen (z.B. g++):

```bash
g++ -O3 finale-challenge.cpp -o challenge
./challenge
```

## 🧠 Wichtige Erkenntnisse
- Maps/Sets sind entscheidend, um "Nested Loop" Probleme zu vermeiden.
- Binary Search reduziert Suchzeiten in sortierten Daten drastisch von O(n) auf O(logn).
- Wähle die Datenstruktur basierend auf dem Zugriffsmuster (Einfügen, Suchen, Löschen).