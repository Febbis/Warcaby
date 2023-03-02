#ifndef WARCABY_QUEENFIGURE_H
#define WARCABY_QUEENFIGURE_H

#include "Figure.h"

/// Klasa reprezentująca królową
class QueenFigure : public Figure
{
public:
    /// Konstruktor królowej
    /// \param x Pozycja x królowej
    /// \param y Pozycja y królowej
    /// \param isBlack Czy królowa jest czarna
    QueenFigure(int x,int y,bool isBlack=false);

    /// Funkcja poruszająca królową
    /// \param x Nowa pozycja x królowej
    /// \param y Nowa pozycja y królowej
    virtual void Move(int x,int y) override;

    /// Funkcja rysująca królową
    /// \param window Referencja do głównego okna aplikacji
    virtual void Draw(sf::RenderWindow &window) override;
};


#endif WARCABY_QUEENFIGURE_H
