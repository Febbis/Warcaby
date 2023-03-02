#ifndef WARCABY_LOGIC_H
#define WARCABY_LOGIC_H

#include "QueenFigure.h"
#include "NormalFigure.h"
#include <vector>

class Logic
{
    /// Tablica reprezentująca wszystkie pionki czarnych
    std::vector<Figure *> p1Figures;
    /// Tablica reprezentująca wszystkie pionki białych
    std::vector<Figure *> p2Figures;
    /// Czy jest aktualnie ruch czarnego gracza
    bool isP1Move;
    /// Czy jest aktualnie jakis wybrany pionek
    bool isClicked;
    /// Referencja do figury, ktora sie aktualnie rusza
    Figure* playerToMove;

    /// Struktura punktu na szachownicy
    struct Point
    {
        /// Zmienna x na szachownicy
        int x;
        /// Zmienna y na szachownicy
        int y;
    };

public:
    /// Konstruktor bezargumentowy klasy
    Logic();

    /// Funkcja do obsługi ruchów pionkami
    /// \param event Referencja do zmiennej ze zdarzeniami okna głównego
    void MoveEventHandler(sf::Event &event);

    /// Funkcja rysująca wszystkie pionki graczy
    /// \param window Referencja do okna głównego aplikacji
    void Draw(sf::RenderWindow &window);

private:
    /// Funkcja dla sprawdzania poprawności ruchu
    /// \param xPos Pozycja x ruchu do sprawdzenia
    /// \param yPos Pozycja y ruchu do sprawdzenia
    /// \return Zwraca true w przypadku, gdy ruch jest poprawny, w innym zwraca false
    bool MoveChecker(int xPos,int yPos);

    /// Funkcja, która sprawdza czy jest jakieś wymuszenie bicia na szachownicy aktualnie, oraz sprawdza czy aktualny ruch jest jednym z nich
    /// \param xPos Pozycja x ruchu do sprawdzenia
    /// \param yPos Pozycja y ruchu do sprawdzenia
    /// \param size Referencja do ile jest ruchów, które są przymusowymi ruchami
    /// \return Zwraca true, gdy size jest równy 0 lub gdy ruch jest poprawny i znajduje się w liscie bic
    bool TakingPieces(int xPos, int yPos, int &size);

    /// Funkcja pomocnicza do sprawdzania bicia, sprawdza czy jest ono możliwe z danego miejsca
    /// \param figureXPos Miejsce x figury, która zbija
    /// \param figureYPos Miejsce y figury, która zbija
    /// \param offsetX W którą stronę x jest bicie sprawdzane
    /// \param offsetY W którą stronę y jest bicie sprawdzane
    /// \param moves Referencja do tablicy ruchów zbić, gdy bicie jest poprawne
    void TakingPieces2(int figureXPos, int figureYPos, int offsetX, int offsetY, std::vector<std::pair<Point,Point>> &moves);

    /// Funkcja pomocnicza do sprawdzania czy jest możliwość jakiegoś bicia
    /// \param p1Players Tablica pionków gracza wykonującego ruch
    /// \param p2Players Tablica pionków gracza przeciwnego
    /// \param p1PlayersSize Rozmiar tablicy pionków gracza wykonującego ruch
    /// \param p2PlayersSize Rozmiar tablicy pionków gracza przeciwnego
    /// \param possibleMoves Referencja do tablicy ruchów zawierających wymuszone bicia
    /// \param black Czy tablica pionków gracza 1 jest czarna
    void TakingPieces3(std::vector<Figure *>p1Players, std::vector<Figure*>p2Players, int p1PlayersSize, int p2PlayersSize, std::vector<std::pair<Point,Point>> &possibleMoves, bool black);
};


#endif WARCABY_LOGIC_H
