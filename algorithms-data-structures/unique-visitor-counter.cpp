#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>
#include <chrono>

class Timer
{
    std::chrono::high_resolution_clock::time_point start;

public:
    Timer() { reset(); }
    void reset() { start = std::chrono::high_resolution_clock::now(); }
    double elapsed()
    {
        auto end = std::chrono::high_resolution_clock::now();
        return std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count();
    }
};

// Aufgabe: Zähle, wie viele EINDEUTIGE IP-Adressen im Vektor sind.
// Beispiel: {"192.1, "10.0", "192.1"} -> Ergebnis: 2

// ANSATZ A: Der langsame Weg (Vektor & Lineare Suche)
int countUniqueSlow(const std::vector<std::string> &ips)
{
    std::vector<std::string> uniqueIPs;
    for (const auto &ip : ips)
    {
        bool found = false;
        // TODO: Gehe durch uniqueIPs. Wenn ip schon drin ist, setze found = true.
        // Wenn nicht found, füge ip zu uniqueIPs hinzu.
    }
    return uniqueIPs.size();
}

// ANSATZ B: Der schnelle Weg (Hash Set)
int countUniqueFast(const std::vector<std::string> &ips)
{
    // TODO: Erstelle ein std::unordered_set<std::string>
    // TODO: Füge alle ips ein (Sets erlauben automatisch keine Duplikate)
    // TODO: Gib die Größe des Sets zurück
    return 0;
}

int main()
{
    // Generiere 50.000 IP-Adressen (viele Duplikate)
    std::vector<std::string> data;
    for (int i = 0; i < 50000; ++i)
        data.push_back("192.168.1." + std::to_string(i % 500));

    Timer t;

    std::cout << "Starte Slow Count...\n";
    t.reset();
    int c1 = countUniqueSlow(data);
    std::cout << "Slow: " << c1 << " unique IPs in " << t.elapsed() << " ms\n";

    std::cout << "\nStarte Fast Count...\n";
    t.reset();
    int c2 = countUniqueFast(data);
    std::cout << "Fast: " << c2 << " unique IPs in " << t.elapsed() << " ms\n";

    return 0;
}