#include <iostream>
#include <cstdlib>

template <class CharacT>
class Character{
    public:

    private:
    //Status
        CharacT hp, atk, mp, dfs, shield;
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
    Map<int> Main_map;
    std::cout << Main_map.get_range() << std::endl;
    return 0;
}