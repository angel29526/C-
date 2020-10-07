#include "Episodes.h"

Episodes::Episodes(){
    ep_id = 0;
    episode_rate = 0;
    episodios = 0;
    temporada = 0;

}

Episodes::Episodes(int _id, string _title, string _genre, string _type,int _rate, int _ep_id, int _episode_rate, int _episodios, int _temporada) : Sitcoms (_id,_title, _genre,_type, _rate){
    ep_id = _ep_id;
    episode_rate = _episode_rate;
    episodios = _episodios;
    temporada = _temporada;

}

int Episodes::getId(){
    return ep_id;
}

int Episodes::getTemporada(){
    return temporada;
}

int Episodes::getEpisode(){
    return episodios;
}

int Episodes::getEpisode_rate(){
    return episode_rate;
}
