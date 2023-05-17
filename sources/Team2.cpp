#include "Team2.hpp"
#include <iostream>
#include <cmath>
using namespace std;
using namespace ariel;


    Team2::Team2(Character *leader) : leader(leader),capacity(10) {
    }

    Team2::Team2(Team2 &&other)noexcept {
        leader = other.leader;
        team = other.team;
    }

    Team2 &Team2::operator=(const Team2 &other) {
        leader = other.leader;
        team = other.team;
        return *this;
    }

    Team2 &Team2::operator=( Team2 &&other) noexcept{
        leader = other.leader;
        team = other.team;
        return *this;
    }
    Team2::~Team2() {}

    void Team2::add(Character*){

    }
    void Team2::attack(Team2*){

    }
    int Team2::stillAlive(){
        return 0;
    }
    void Team2::print(){

    }
