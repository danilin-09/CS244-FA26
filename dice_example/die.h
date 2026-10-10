#ifndef DIE_H
#define DIE_H

class Die {
    public:
        int sides;
        int value;
    private:
        Die(int);
        void roll();
        int getSize();
        int getValue();
}:
