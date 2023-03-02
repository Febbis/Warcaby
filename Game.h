#ifndef WARCABY_GAME_H
#define WARCABY_GAME_H

#include <iostream>
#include "Board.h"
#include "Figure.h"
#include "Logic.h"
#include <Sfml/Graphics.hpp>

/// Główna klasa zarządzająca całą grą
class Game
{
    /// Zmienna, która reprezentuje
    sf::RenderWindow mainWindow;
    /// Zmienna reprezentująca szachownice
    Board board;
    /// Zmienna reprezentująca logiczne zasady aplikacji
    Logic logic;
    /// Zmienna reprezentująca tekst z gratulacjami dla zwycięskiej strony
    sf::Text text;

public:
    /// Konstruktor bezargumentowy klasy
    Game();

    /// Funkcja zawierająca główną pętlę gry
    void Run();

    /// Funkcja zajmująca się obsługą zdarzeń w grze
    void HandleEvents();

    /// Główna funkcja rysująca wszystkie elementy gry
    void Draw();

    /// Funkcja zmieniająca tekst na gratulacje dla odpowiedniej strony
    /// \param czarne Czy wygrały czarne
    void Win(bool czarne);
};


#endif WARCABY_GAME_H
