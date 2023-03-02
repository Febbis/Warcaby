#ifndef WARCABY_NORMALFIGURE_H
#define WARCABY_NORMALFIGURE_H

#include "Figure.h"

/// Klasa reprezentująca normalny pionek
class NormalFigure : public Figure
{
public:
    /// Konstruktor normalnego pionka
    /// \param x Pozycja x pionka
    /// \param y Pozycja y pionka
    /// \param isBlack Czy pionek jest czarny
    NormalFigure(int x,int y, bool isBlack=false);

    /// Funkcja poruszająca pionkiem
    /// \param x Nowa pozycja x pionka
    /// \param y Nowa pozycja y pionka
    virtual void Move(int x,int y) override;

    /// Funkcja rysująca pionka
    /// \param window Referencja do głównego okna aplikacji
    virtual void Draw(sf::RenderWindow &window) override;
};


#endif WARCABY_NORMALFIGURE_H
