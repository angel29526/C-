#ifndef SITCOMS_H_INCLUDED
#define SITCOMS_H_INCLUDED

#include <iostream>
#include "Video.h"

using namespace std;

class Sitcoms : public Video{
    private:
        int id;
        string title;
        string genre;
        string type;
        int rate;
    public:
        Sitcoms();
        Sitcoms(int,string,string,string,int);
        int getId();
        string getTitle();
        string getType();
        string getGenre();
        int getRate();
};

#endif // SITCOMS_H_INCLUDED
