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
            Character(string ,Point,int);
            Character(Character &) noexcept;
            Character &operator=(const Character &) noexcept;
            Character(Character &&) noexcept;
            Character &operator=(Character &&) noexcept;
            virtual ~Character();
            bool isAlive();
            Point getPoint()const;
            double calcDistance(Character*);
            void hit(int);
            string getName()const;
            int getHealth()const;
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
            string print()override;

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
            string print()override;
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