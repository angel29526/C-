#ifndef VIDEO_H_INCLUDED
#define VIDEO_H_INCLUDED

#include <iostream>

using namespace std;

class Video{
    private:
        int id;
        string title;
        string genre;
        string type;
        int rate;

    public:
        Video();
        Video(int, string, string, string,int);
        int virtual getId();
        string virtual getTitle();
        string virtual getGenre();
        string virtual getType();
        int virtual getRate();

};

#endif // VIDEO_H_INCLUDED
