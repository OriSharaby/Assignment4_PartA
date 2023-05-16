#pragma once
#include "Character.hpp"
#include <iostream>
#include <string>

namespace ariel{ 
    class SmartTeam{
        private:
            Character* (*members);
            Character* leader;
            int Size;
            int capacity = 10;

        public:
            ~SmartTeam();
            SmartTeam(const SmartTeam& other);
            SmartTeam(Character *leader);
            void add(Character*);
            void attack(SmartTeam*); 
            int stillAlive();
            void print();
    };
}