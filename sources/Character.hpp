#pragma once
#include "Point.hpp"
#include <iostream>
#include <string>

using namespace std;
namespace ariel{ 
    class Character{
        private:
            Point point;
            string name;
            int health;

        public:
            Character(string,Point);
            bool isAlive();
            double calcDistance(Character*);
            void hit(int);
            string getName();
            int getHealth();
            void setHealth(int);
            Point getLocation();
            virtual string print(); 
    };

    class Cowboy : public Character{
        private:
            int amountOfBullets;
        public:
            Cowboy(string,Point);
            void shoot(Character*);
            bool hasboolets();
            void reload();
            string print();

    };
    
    class Ninja : public Character{
        private:
            int speed;

        public:
            Ninja(string,Point);
            void move(Character*);
            void slash(Character *other);
            void setSpeed(int);
            int getSpeed();
            string print();
    };

    class YoungNinja : public Ninja{
        public:
            YoungNinja(string, Point);

    };

    class TrainedNinja : public Ninja{
        public:
            TrainedNinja(string, Point);
    };

    class OldNinja : public Ninja{
        public:
            OldNinja(string,Point);
    };

}