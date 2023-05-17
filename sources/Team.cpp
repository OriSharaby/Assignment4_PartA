#include "Team.hpp"
#include <iostream>
#include <cmath>
using namespace std;
using namespace ariel;


    Team::Team(Character *leader) : leader(leader) ,capacity(10){
        team.push_back(leader);
    }
    
    Team::Team(Team &&other)noexcept {
        leader = other.leader;
        team = other.team;
    }


    Team &Team::operator=(const Team &other) {
        leader = other.leader;
        team = other.team;
        return *this;
    }

    Team &Team::operator=( Team &&other) noexcept{
        leader = other.leader;
        team = other.team;
        return *this;
    }
    Team::~Team() {}

    void Team::add(Character*){

    }
    void Team::attack(Team*){

    }
    int Team::stillAlive(){
        return 0;
    }
    void Team::print(){

    }
