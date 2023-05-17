#include "SmartTeam.hpp"
#include "Character.hpp"
#include <iostream>
#include <cmath>
using namespace std;
using namespace ariel;

    SmartTeam::SmartTeam(Character *leader) : leader(leader) ,capacity(10){

    }
    
    SmartTeam::SmartTeam(SmartTeam &&other)noexcept {
        leader = other.leader;
        team = other.team;
    }

    SmartTeam &SmartTeam::operator=(const SmartTeam &other) {
        leader = other.leader;
        team = other.team;
        return *this;
    }

    SmartTeam &SmartTeam::operator=( SmartTeam &&other) noexcept{
        leader = other.leader;
        team = other.team;
        return *this;
    }

    SmartTeam::~SmartTeam(){}

    void SmartTeam::add(Character*){

    }
    void SmartTeam::attack(SmartTeam*){

    }
    int SmartTeam::stillAlive(){
        return 0;
    }
    void SmartTeam::print(){

    }
