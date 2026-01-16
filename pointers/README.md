# 🧠 C++ Pointer & Referenzen Workshop

Dieses Repository enthält die Übungsmaterialien für den 90-minütigen Workshop über **Speichermanagement in C++**. Ziel ist es, die Konzepte von Adressen, Pointern und Referenzen durch praktisches Experimentieren zu verstehen.

## 📂 Enthaltene Aufgaben

1.  **`intro.cpp` (Phase 1: Die Landkarte des Speichers)**:
    * **Thema**: Adressoperator `&` und Dereferenzierung `*`.
    * **Fokus**: Verstehen, dass jede Variable eine "Hausnummer" (Adresse) im RAM hat.

2.  **`swap.cpp` (Phase 2: Call-by-Value vs. Call-by-Reference)**:
    * **Thema**: Funktionsparameter richtig übergeben.
    * **Fokus**: Den Unterschied zwischen einer Kopie, einem Pointer und einer Referenz beim Manipulieren von Daten verstehen.

3.  **`arrays.cpp` (Phase 3: Array-Pointer-Duality)**:
    * **Thema**: Pointer-Arithmetik.
    * **Fokus**: Warum Arrays eigentlich nur getarnte Pointer sind und wie man mit `p++` durch den Speicher navigiert.

4.  **`memory.cpp` (Phase 4: Dynamic Memory & Heap)**:
    * **Thema**: Manuelle Speicherverwaltung mit `new[]` und `delete[]`.
    * **Fokus**: Die Gefahr von Memory Leaks erkennen und lernen, wie man Speicher auf dem Heap korrekt anfordert und wieder freigibt.

5.  **`pitfalls.cpp` (Phase 5: Das Gefahren-Quiz)**:
    * **Thema**: Debugging und Code-Analyse.
    * **Fokus**: Typische C++ Fehler wie Dangling Pointer, Memory Leaks und Null-Pointer-Dereferenzierung identifizieren.

## 🚀 Wie man die Aufgaben nutzt

Jede Datei enthält `Aufgabe`-Kommentare. Dein Ziel ist es, die Funktionen so zu implementieren, dass die Logik korrekt ist und du die Speichervorgänge in der Konsole nachvollziehen kannst.

### Kompilieren
Du kannst die Dateien einzeln mit einem C++ Compiler übersetzen (z.B. g++):

```bash
g++ intro.cpp -o intro
./intro
```

## 🧠 Wichtige Erkenntnisse
- Pointer (`*`) sind Variablen, die Adressen speichern. Sie können "null" sein (`nullptr`) oder auf andere Variablen umgebogen werden.
- Referenzen (`&`) sind Alias-Namen für bestehende Variablen. Sie sind sicherer, da sie niemals leer sein können und fest mit ihrem Ziel verbunden sind.
- Pointer-Arithmetik: Ein `+1` bei einem `int*` springt im Speicher um die Größe des Datentyps weiter (meist 4 Bytes), nicht um 1 Byte.
- Heap vs. Stack: Daten auf dem Stack werden automatisch gelöscht. Daten auf dem Heap (`new`) bleiben bestehen, bis du sie manuell mit delete entfernst. Ein vergessenes delete führt zu einem Memory Leak.
