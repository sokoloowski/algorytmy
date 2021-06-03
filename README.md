# Algorytmy i struktury danych

![cmake - 3.20](https://img.shields.io/badge/cmake-3.20-success)

**Uwaga:** IDE może krzyczeć, że nie zna funkcji, bo nie zostały one zadeklarowane -
wszystko jest dołączane za pomocą CMake, a błędy i ostrzeżenia można zignorować.

## Algorytmy sortujące

- [x] bąbelkowe
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
