#include <random>
#include "die.h"
using namespace std();

//constructor that accepts # of sides + rolls dice
Die::Die(int num_sides){
    sides = num_sides;
    roll();
}

void Die::roll() {
    const int MIN = 1;
    random_device engine; //can dreate random values
    uniform_int_distribution<int> dice_value(MIN, sides); //sides = max value btw
    value = dice_value(engine);
}

int Die::get_sides(){
    return sides;
}