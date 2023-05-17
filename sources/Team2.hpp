#pragma once
#include "Character.hpp"
#include <iostream>
#include <string>
#include <vector>

namespace ariel{ 
    class Team2{
        private:
            vector<Character *> team;
            Character* leader;
            int Size;
            int capacity;

        public:
            ~Team2();
            Team2(const Team2& other);
            Team2(Character *leader);
            Team2(Team2&& other)noexcept;
            Team2& operator=(const Team2& other);
            Team2& operator=( Team2&& other)noexcept;
            void add(Character*);
            void attack(Team2*); 
            int stillAlive();
            void print();
    };
}