#include "Movie.h"

Movie::Movie(){
    id = 0;
    title = "";
    genre = "";
    type = "";
    rate = 0;
}

Movie::Movie(int _id, string _title, string _genre, string _type, int _rate){
    id = _id;
    title = _title;
    genre = _genre;
    type = _type;
    rate = _rate;
}

int Movie::getId(){
    return id;
}

string Movie::getTitle(){
    return title;
}

string Movie::getGenre(){
    return genre;
}

string Movie::getType(){
    return type;
}

int Movie::getRate(){
    return rate;
}

