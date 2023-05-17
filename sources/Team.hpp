#pragma once
#include "Character.hpp"
#include <iostream>
#include <string>
#include <vector>

namespace ariel{ 
    class Team{
        private:
            vector<Character *> team;
            Character* leader;
            int Size;
            int capacity;

        public:
            Team(const Team& other);
            Team(Character *leader);
            Team(Team&& other)noexcept;
            Team& operator=(const Team& other);
            Team& operator=( Team&& other)noexcept;
            ~Team();
            void add(Character*);
            void attack(Team*); 
            int stillAlive();
            void print();
    };
}