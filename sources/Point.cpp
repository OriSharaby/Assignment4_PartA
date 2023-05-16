#include "Point.hpp"
#include <iostream>
#include <math.h>
#include <algorithm>

namespace ariel{ 
    Point ::Point(double x,double y): x(x),y(y){
    }

    Point::Point(): x(0),y(0){
    }

    double Point::getX(){
        return this->x;
    }
            
    double Point::getY(){
        return this->y;
    }
    void Point::setX(double x){
        this->x = x;
    }

    void Point::setY(double y){
        this->y = y;
    }

    double Point::distance(Point p){
        double distance = sqrt(pow((this->getX())-(p.getX()),2)+pow((this->getY())-(p.getY()),2));
        return distance;
    }
    
    void Point::print(){
        cout << "( " << this->getX() <<", "<<this->getY()<<" )"<< endl;
    }
    
    Point Point::moveTowards(Point&,Point&,double){
        return Point(0.0, 0.0);
    }
        


}