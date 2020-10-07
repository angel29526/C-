#ifndef MOVIE_H_INCLUDED
#define MOVIE_H_INCLUDED

#include <iostream>
#include "Video.h"

using namespace std;

class Movie : public Video{
    private:
        int id;
        string title;
        string genre;
        string type;
        int rate;
    public:
        Movie();
        Movie(int,string,string,string,int);
        int getId();
        string getTitle();
        string getGenre();
        string getType();
        int getRate();

};

#endif // MOVIE_H_INCLUDED
