// Bipartite.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include "Functions.h"

int main()
{
    std::string filePath;
    std::cout << "Witaj :)" << std::endl;
    std::cout << "Podaj sciezke do pliku tekstowego z grafem: ";
    std::cin >> filePath;
    std::ifstream inputFile;

    if (!inputFile.good())
    {
        std::cout << "Nie udalo sie otworzyc pliku" << std::endl;
    }
    else
    {
        std::cout << "Plik zostal otworzony" << std::endl;
    }


    //std::map<int, int> mapa = { {2,9} };

    //mapa.insert({1,1});

    //for (std::pair<int,int> i : mapa)
    //{
    //    std::cout << "key == " << i.first << " and value == " << i.second << std::endl;
    //}
    //std::cout << mapa.at(1) << std::endl;

    



    //std::ifstream plik;
    //plik.open("../../test_files_2/test1.txt");
    //if (!plik.good())
    //{
    //    std::cout << "Nie udało się otworzyć pliku" << std::endl;
    //}
    //else
    //{
    //    std::string linijka;
    //    while (std::getline(plik, linijka))
    //    {
    //        std::cout << linijka << std::endl;
    //    }
    //    plik.close();
    //    std::cout << "Odczyt pliku powiódł się" << std::endl;
    //}
}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
