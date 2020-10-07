#ifndef EPISODES_H_INCLUDED
#define EPISODES_H_INCLUDED

#include "Sitcoms.h"

class Episodes : public Sitcoms{
    private:
        int ep_id;
        int episode_rate;
        int episodios;
        int temporada;

    public:
        Episodes();
        Episodes(int, string,string,string,int,int,int,int,int);
        int getId();
        int getTemporada();
        int getEpisode();
        int getEpisode_rate();
};

#endif // EPISODES_H_INCLUDED
