#pragma once
#include <iostream>
#include <string>
using namespace std;
namespace ariel{ 
    class Point{
        private:
            double x;
            double y;
        public:
            Point(double,double);
            Point();
            double getX();
            double getY();
            void setX(double);
            void setY(double);
            double distance(Point);
            void print();
            Point moveTowards(Point&,Point&,double);
    };
}