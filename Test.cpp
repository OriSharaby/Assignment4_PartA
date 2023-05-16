#include <iostream>
#include <stdexcept>
#include "doctest.h"
#include "sources/Point.hpp"
#include "sources/Character.hpp"
#include "sources/Team.hpp"
#include "doctest.h"
#include <sstream>
#include <limits>
#include <vector>
using namespace ariel;

TEST_CASE("Test Point class"){
    Point p1(2,10),p2(5.5,13.5),p3(0,0),p4(2,2);
    CHECK(p1.distance(p2) == p2.distance(p1));
    CHECK(p3.distance(p4) == 2.82843);
    CHECK(p2.distance(p3) == 14.5774);
    CHECK(p1.distance(p1) == 0);

}

TEST_CASE("Test Character class"){
    Point p1(0,0),p2(2,2),p3(4,4),p4(6,6);
    Cowboy* cowboy = new Cowboy("Coboy",p1);
    YoungNinja* yNinja = new YoungNinja("YoungNinja",p2);
    TrainedNinja* tNinja = new TrainedNinja("TrainedNinja",p3);
    OldNinja* oNinja = new OldNinja("OldNinja",p4);
    SUBCASE("Check isAlive method"){
        CHECK(yNinja->isAlive());
        CHECK(tNinja->isAlive());
        CHECK(oNinja->isAlive());
    }
    SUBCASE("Check getSpeed method"){
        CHECK(yNinja->getSpeed() > tNinja->getSpeed());
        CHECK(tNinja->getSpeed() > oNinja->getSpeed());
        CHECK(yNinja->getSpeed() > oNinja->getSpeed());
    }
    SUBCASE("Check getHealth method"){
        CHECK(yNinja->getHealth() < tNinja->getHealth());
        CHECK(tNinja->getHealth() < oNinja->getHealth());
        CHECK(yNinja->getHealth() < oNinja->getHealth());
    }
    
    SUBCASE("Check distance method"){
        CHECK(tNinja->calcDistance(yNinja) == yNinja->calcDistance(tNinja));
        CHECK(cowboy->calcDistance(yNinja) == tNinja->calcDistance(oNinja));
        CHECK(cowboy->calcDistance(yNinja) < yNinja->calcDistance(oNinja));
    }
    
    SUBCASE("Check slash and shoot methods"){
        CHECK(cowboy->isAlive());
        int cowboyHealth = cowboy->getHealth();
        int youngHealth = yNinja->getHealth();
        cowboy->shoot(yNinja);
        for(int i=0;i<4;i++){
            oNinja->slash(cowboy);
        }
        CHECK(yNinja->getHealth() == youngHealth - 10);
        CHECK(cowboy->getHealth() == 0);
        CHECK_THROWS(cowboy->isAlive());
    }
    
}

TEST_CASE("Test Team class"){
    Point p1(0,0),p2(2,2),p3(4,4),p4(6,6),p5(8,8),p6(10,10);
    Cowboy *cowboy = new Cowboy("ori",p1);
    YoungNinja *ninja = new YoungNinja("Meir",p2);
    Team team1(cowboy);
    Team team2(ninja);

    CHECK_THROWS(team1.attack(NULL));
    CHECK_THROWS(team1.attack(&team2));
    
    team1.add(new Cowboy("Joni",p3));
    team1.add(new OldNinja("Yossi",p4));
    team1.add(new TrainedNinja("Dor",p5));
    for(int i=0;i<8;i++){
        team2.add(new TrainedNinja("Dor",p5));
    }
    CHECK_THROWS(team2.add(new TrainedNinja("Dor",p5)));

}