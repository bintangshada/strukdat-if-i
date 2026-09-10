#include <iostream>
using namespace std;

struct Karakter{
    int health;
};

void tambahDamage(Karakter *player, int damage)
{
    player->health -= damage;
};

int main()
{
    Karakter player;
    player.health = 100;
    cout << player.health << endl;
    tambahDamage(&player, 25);
    cout << player.health << endl;
}