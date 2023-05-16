#pragma once
#include "Character.hpp"
#include <iostream>
#include <string>

namespace ariel{ 
    class Team{
        private:
            Character* (*members);
            Character* leader;
            int Size;
            int capacity = 10;

        public:
            ~Team();
            Team(const Team& other);
            Team(Character *leader);
            void add(Character*);
            void attack(Team*); 
            int stillAlive();
            void print();
    };
}