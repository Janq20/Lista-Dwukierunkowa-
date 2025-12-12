# 🔁 Lista Dwukierunkowa (Doubly Linked List) — C++

Repozytorium **Lista-Dwukierunkowa-** zawiera prostą implementację **listy dwukierunkowej** w języku **C++**. Projekt jest nastawiony na naukę struktur danych: pokazuje jak działa węzeł z dwoma wskaźnikami (*prev/next*) oraz jak wykonywać podstawowe operacje na liście.

---

## 💡 Opis projektu

**Lista dwukierunkowa** to dynamiczna struktura danych, w której każdy element (węzeł) przechowuje:
- wartość (dane),
- wskaźnik na **następny** element (`next`),
- wskaźnik na **poprzedni** element (`prev`).

Dzięki temu można wygodnie przechodzić listę w obie strony, a operacje wstawiania/usuwania elementów na początku/końcu są zwykle bardzo szybkie.

---

## ✨ Najważniejsze cechy

- Implementacja listy dwukierunkowej w C++
- Oddzielny plik nagłówkowy z klasą listy: `DoublyLinkedList.h`
- Prosty plik uruchomieniowy/demo: `lista.cpp`
- Kod w stylu edukacyjnym — łatwy do rozwijania o kolejne metody

---

## 📁 Struktura repozytorium

```
Lista-Dwukierunkowa-/
├── DoublyLinkedList.h   # Implementacja listy dwukierunkowej (struktura + operacje)
└── lista.cpp            # Program demonstracyjny / użycie listy
```

---

## 🛠 Kompilacja i uruchomienie

### Linux / macOS (g++)
```bash
g++ -std=c++17 -O2 lista.cpp -o lista
./lista
```

### Windows (MinGW)
```bash
g++ -std=c++17 -O2 lista.cpp -o lista.exe
lista.exe
```

> Jeśli w `lista.cpp` nie ma `main()` lub jest tylko szkic, dopisz prosty `main()` i przetestuj metody z `DoublyLinkedList.h`.

---

## 🧠 Jak działa lista dwukierunkowa?

W skrócie:

- **Dodawanie elementu**:
  - tworzymy nowy węzeł,
  - ustawiamy mu `prev/next`,
  - aktualizujemy wskaźniki sąsiednich węzłów oraz wskaźnik `head`/`tail` (początek/koniec listy).

- **Usuwanie elementu**:
  - przepinamy wskaźniki (`prev->next` i `next->prev`),
  - zwalniamy pamięć po usuwanym węźle.

- **Przechodzenie po liście**:
  - od `head` do `tail` (po `next`),
  - od `tail` do `head` (po `prev`).

---

## 📌 Co warto dodać dalej (propozycje ulepszeń)

- metody: `push_front`, `push_back`, `pop_front`, `pop_back`
- `insert(index, value)` i `erase(index)`
- `find(value)` i `size()`
- obsługa iteratorów (żeby działało jak STL)
- testy jednostkowe (np. GoogleTest)
- zabezpieczenia: reguła 3/5 (kopiowanie / przenoszenie)

---

## 👤 Autor

**Janq20**  
