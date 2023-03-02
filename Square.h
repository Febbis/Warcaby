#ifndef WARCABY_SQUARE_H
#define WARCABY_SQUARE_H

#include <SFML/Graphics.hpp>

/// Klasa reprezentująca pojedyncze pole na szachownicy
class Square
{
    /// Kolor pola
    sf::Color squareColor;
    /// Kształt pola (kwadrat)
    sf::RectangleShape rShape;
    /// Pozycja x pola
    int xPos;
    /// Pozycja y pola
    int yPos;
    /// Rozmiar pola
    int size;

public:
    /// Konstruktor bezargumentowy pola
    Square();

    /// Konstruktor argumentowy pola
    /// \param x Pozycja x pola
    /// \param y Pozycja y pola
    /// \param isBlack Czy pole jest czarny
    Square(int x, int y, bool isBlack = false);

    /// Funkcja rysująca pole
    /// \param window Referencja do głównego okna aplikacji
    void Draw(sf::RenderWindow &window);

};


#endif WARCABY_SQUARE_H
