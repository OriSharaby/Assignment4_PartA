#pragma once
#include "Character.hpp"
#include <iostream>
#include <string>
#include <vector>


namespace ariel{ 
    class SmartTeam{
        private:
            vector<Character *> team;
            Character* leader;
            int Size;
            int capacity;

        public:
            ~SmartTeam();
            SmartTeam(const SmartTeam& other);
            SmartTeam(Character *leader);
            SmartTeam(SmartTeam&& other)noexcept;
            SmartTeam& operator=(const SmartTeam& other);
            SmartTeam& operator=( SmartTeam&& other)noexcept;
            void add(Character*);
            void attack(SmartTeam*); 
            int stillAlive();
            void print();
    };
}