#include "Sitcoms.h"

Sitcoms::Sitcoms(){
    id = 0;
    title = "";
    genre = "";
    type = "";
    rate = 0;
}

Sitcoms::Sitcoms(int _id, string _title, string _genre, string _type, int _rate){
    id = _id;
    title = _title;
    genre = _genre;
    type = _type;
    rate = _rate;
}

int Sitcoms::getId(){
    return id;
}

string Sitcoms::getTitle(){
    return title;
}

string Sitcoms::getGenre(){
    return genre;
}

string Sitcoms::getType(){
    return type;
}

int Sitcoms::getRate(){
    return rate;
}
