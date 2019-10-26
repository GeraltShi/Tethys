#include <iostream>
#include <cstdlib>

#define KEY_UP 'w'
#define KEY_DOWN 's'
#define KEY_LEFT 'a'
#define KEY_RIGHT 'd'

using namespace std;

template <class CharacT, class PosT>
class Character{
    public:
        PosT get_posx(){return x;}
        PosT get_posy(){return y;}
        void move(PosT x_inc, PosT y_inc){
            x = x + x_inc;
            y = y + y_inc;
        }
    private:
    //Status
        CharacT hp, atk, mp, dfs, shield;
        PosT x, y;
};

template <class MapT>
class Map{
    public:
        MapT get_range(){return range;}
    private:
    //Range
        MapT range;
};

template <class MenuT>
class Menu{
    private:
        MenuT alpha, width, height, anchor;
};

template <class HudT>
class Hud{
    private:
        HudT alpha, width, height, anchor;
};

template <class SoundT, class BgmT>
class Sound{
    private:
        SoundT sound_effect;
        BgmT bgm;
};

int main(int argc, char **argv){
    Character<double, double> main_cha;
    std::cout << main_cha.get_posx() << std::endl;
    std::cout << main_cha.get_posy() << std::endl;
    main_cha.move(3,3);
    std::cout << main_cha.get_posx() << std::endl;
    std::cout << main_cha.get_posy() << std::endl;

    Map<int> main_map;
    std::cout << main_map.get_range() << std::endl;
    char c;
    while(1){
        c = std::cin.get();
        cout << "GETINPUT" << c << endl;
        switch(c) {
        case KEY_UP:
            cout << endl << "Up" << endl;//key up
            main_cha.move(0,1);
            break;
        case KEY_DOWN:
            cout << endl << "Down" << endl;   // key down
            main_cha.move(0,-1);
            break;
        case KEY_LEFT:
            cout << endl << "Left" << endl;  // key left
            main_cha.move(-1,0);
            break;
        case KEY_RIGHT:
            cout << endl << "Right" << endl;  // key right
            main_cha.move(1,0);
            break;
        default:
            break;
        }
        std::cout << main_cha.get_posx() << std::endl;
        std::cout << main_cha.get_posy() << std::endl;
    }
    return 0;
}