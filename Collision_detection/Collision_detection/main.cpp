#include <iostream>
#include <SFML/Graphics.hpp>
#include "scenes.hpp"

#define WINDOW_WIDTH 700
#define WINDOW_HEIGHT 500

int main(int, char const**)
{
    std::vector<cScene*> Scenes;
    int scene = 0;
    
    sf::RenderWindow App(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "Collision Detection", sf::Style::Default);
    
    StartMenuSc start_menu_sc;
    Scenes.push_back(&start_menu_sc);
    SecondMenuSc second_menu_sc;
    Scenes.push_back(&second_menu_sc);
    
    while (scene >= 0) {
        scene = Scenes[scene]->Run(App);
    }
    
    return EXIT_SUCCESS;
}


