#ifndef WARCABY_BOARD_H
#define WARCABY_BOARD_H

#include "Square.h"
#include <SFML/Graphics.hpp>

/// Klasa reprezentująca szachownice
class Board
{
    /// Tablica zawierająca 8x8 pól szachownicy
    Square square[8][8];

public:
    /// Konstruktor bezparametrowy klasy Board
    Board();

    /// Funkcja rysująca całą szachownicę
    /// \param window Referencja do okna aplikacji
    void Draw(sf::RenderWindow &window);
};


#endif WARCABY_BOARD_H
