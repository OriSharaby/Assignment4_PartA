#include "Character.hpp"
#include <iostream>
#include <cmath>
using namespace std;
using namespace ariel;

Character ::Character(string name, Point point) :name(name),point(point){

}

bool Character::isAlive(){
    return true;
}
double Character::calcDistance(Character*){
    return 0;
}


void  Character::setHealth(int health){
    this->health = health;
}
void Character::hit(int){

}
string Character::getName(){
    return "";
}
int Character::getHealth(){
    return 0;
}
Point Character::getLocation(){
    return Point(0,0);
}

string Character::print(){
    return "";
}

Cowboy ::Cowboy(string name,Point point): Character(name,point){
    this -> amountOfBullets = 6;
    this->setHealth(110);
}

void Cowboy::shoot(Character*){

}

bool Cowboy::hasboolets(){
    return false;
}

void Cowboy::reload(){

}

string Cowboy::print(){
    return "";
}

Ninja ::Ninja(string name,Point point): Character(name,point){

}
void  Ninja::setSpeed(int speed){
    this->speed = speed;
}
void Ninja::move(Character*){

}

void Ninja::slash(Character *other){

}

int Ninja::getSpeed(){
    return 0;
}

string Ninja::print(){
    return "";
}

OldNinja::OldNinja(string name, Point point) : Ninja(name, point){
    this->setSpeed(8);
    this->setHealth(150);
}

TrainedNinja::TrainedNinja(string name, Point point) : Ninja(name, point){
    this->setSpeed(12);
    this->setHealth(120);
}

YoungNinja::YoungNinja(string name, Point point) : Ninja(name, point){
    this->setSpeed(14);
    this->setHealth(100);
}
