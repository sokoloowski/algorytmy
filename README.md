# Algorytmy i struktury danych

By korzystać z kodów zaleca się korzystanie z [Visual Studio Code](https://jmeubank.github.io/tdm-gcc/download/) na systemie Linux (kompilator `gcc`, debugger `gdb`). W przypadku systemu Windows, zalecane jest wykorzystanie kompilatora [TDM-GCC](https://jmeubank.github.io/tdm-gcc/download/). Umożliwi to wygodne korzystanie z repozytorium bez potrzeby kopiowania kodu.

## Konfiguracja

Wszystko powinno działać od razu. Wciśnij <kbd>F5</kbd> i gotowe!

## Różnice

Linux wyświetla wyniki w zakładce `Terminal`. W przypadku Windowsa, wyniki pojawiają się w `Debug console`, wśród wiadomości debuggera.

## Wymagania

Do prawidłowego działania wymagane jest rozszerzenie [C/C++](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools). By je zainstalować, przejdź do panelu rozszerzeń lub w wierszu poleceń (<kbd>Ctrl</kbd> + <kbd>P</kbd>) wklej następującą komendę:

    ext install ms-vscode.cpptools

## Algorytmy sortujące

- [ ] bąbelkowe
- [ ] kubełkowe
- [x] przez zliczanie
- [x] przez kopcowanie
- [x] szybkie
- [x] przez scalanie

## Złożoność algorytmów sortujących

*n* - liczba elementów do posortowania\
*k* - liczba różnych elementów

| Nazwa algorytmu  |                                                             Złożoność                                                             |
| :--------------: | :-------------------------------------------------------------------------------------------------------------------------------: |
|    bąbelkowe     |                                                              O(*n*²)                                                              |
| przez wstawianie |                                                              O(*n*²)                                                              |
|  przez scalanie  |                                          O(*n*log*n*), wymaga O(*n*) dodatkowej pamięci                                           |
| przez zliczanie  |                                       O(*n* + *k*), wymaga O(*n* + *k*) dodatkowej pamięci                                        |
|    kubełkowe     |                                             O(*n*²), wymaga O(*k*) dodatkowej pamięci                                             |
|    pozycyjne     | O(*d*(*n* + *k*)), gdzie *k* to wielkość domeny cyfr, a *d* to szerokość kluczy w cyfrach, wymaga O(*n* + *k*) dodatkowej pamięci |
|   biblioteczne   |                                                O(*n*log*n*), pesymistyczny O(*n*²)                                                |
| przez wybieranie |                                                              O(*n*²)                                                              |
|     szybkie      |                                                           Θ(*n*log*n*)                                                            |
| przez kopcowanie |                                                           O(*n*log*n*)                                                            |
