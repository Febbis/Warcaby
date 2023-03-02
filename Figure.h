#ifndef WARCABY_FIGURE_H
#define WARCABY_FIGURE_H

#include <SFML/Graphics.hpp>


/// Klasa reprezentująca pojedynczy pionek
class Figure
{
protected:
    /// Kolor pionka
    sf::Color figureColor;
    /// Kształt pionka (koło)
    sf::CircleShape cShape;
    /// Pozycja x na szachownicy
    int xPos;
    /// Pozycja y na szachownicy
    int yPos;
    /// Rozmiar pionka
    int size;
    /// Skala pionka
    float scale;
    /// Czy pionek jest czarny
    bool isBlack;
public:
    /// Konstruktor pionka
    /// \param x Pozycja x na szachownicy pionka
    /// \param y Pozycja y na szachownicy pionka
    /// \param isBlack Czy pionek jest czarny, domyślnie nie
    Figure(int x, int y, bool isBlack = false);

    /// Getter dla zmiennej xPos
    inline int getXPos()
    {
        return xPos;
    }

    /// Getter dla zmiennej yPos
    inline int getYPos()
    {
        return yPos;
    }

    /// Getter dla zmiennej isBlack
    inline bool getIsBlack()
    {
        return isBlack;
    }

    /// Funkcja dla ewentualnej zmiany koloru pionka
    void ChangeColor(bool changeBack = false);

    /// Czysto wirtualna funkcja odpowiadająca za ruch pionka
    /// \param x Nowa pozycja x, na którą ma sie przenieść pionek
    /// \param y Nowa pozycja y, na którą ma się przenieść pionek
    virtual void Move(int x, int y) = 0;

    /// Czysto wirtualna funkcja, która odpowiada za rysowanie pionka
    /// \param window Referencja do głównego okna aplikacji
    virtual void Draw(sf::RenderWindow &window) = 0;
};


#endif WARCABY_FIGURE_H
