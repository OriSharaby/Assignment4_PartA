#include "Character.hpp"
#include <iostream>
#include <cmath>
using namespace std;
using namespace ariel;

Character ::Character(string name, Point point,int health) :name(name),point(point),health(health){

}
Character::Character(Character &other) noexcept {}

Character &Character::operator=(const Character &other) noexcept
{
    this->point = other.getPoint();
    this->health = other.getHealth();
    this->name = other.getName();
    return *this;
}
Character::Character(Character &&other) noexcept {}

Character &Character::operator=(Character &&other) noexcept{
    return other = *this;
}

Character::~Character() {}

bool Character::isAlive(){
    return true;
}

Point Character::getPoint()const{
    return this->point;
}

double Character::calcDistance(Character*){
    return 0;
}


void  Character::setHealth(int health){
    this->health = health;
}
void Character::hit(int){

}
string Character::getName()const{
    return "";
}
int Character::getHealth()const{
    return 0;
}
Point Character::getLocation(){
    return Point(0,0);
}

string Character::print(){
    return "";
}

Cowboy ::Cowboy(string name,Point point): Character(name,point,0){
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

Ninja ::Ninja(string name,Point point): Character(name,point,0){

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

