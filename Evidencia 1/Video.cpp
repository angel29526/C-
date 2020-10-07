#include "Video.h"

Video::Video(){
    id = 0;
    title = "";
    genre = "";
    type = "";
    rate = 0;
}

Video::Video(int _id, string _title, string _genre, string _type, int _rate){
    id = _id;
    title = _title;
    genre = _genre;
    type = _type;
    rate = _rate;
}

int Video::getId(){
    return id;
}

string Video::getTitle(){
    return title;
}

string Video::getGenre(){
    return genre;
}

string Video::getType(){
    return type;
}

int Video::getRate(){
    return rate;
}

