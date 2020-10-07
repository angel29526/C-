#include <iostream>
#include "Video.h"
#include "Movie.h"
#include "Sitcoms.h"
#include "Episodes.h"

using namespace std;

int main()
{
        Video * lista_General[21];

        lista_General[0] = new Video(101,"Dolphin doing something idk", "Animals","Video",3);
        lista_General[1] = new Video(102,"Cat being cute", "Entertainment","Video",5);
        lista_General[2] = new Video(103,"How to make a breakfast with 0.01 cent", "Food","Video",1);
        lista_General[3] = new Video(104,"Speedrun Mario 64 4:34 World Record", "Videogames","Video",4);
        lista_General[4] = new Video(105,"Easter Egg Kino der Toten", "Videogames","Video",2);
        lista_General[5] = new Movie(201,"Inglorious Basterds","Action","Movie",5);
        lista_General[6] = new Movie(202,"Pulp fiction","Thriller‎","Movie",5);
        lista_General[7] = new Movie(203,"Kill Bill vol: 1","Action","Movie",4);
        lista_General[8] = new Movie(204,"Kill Bill vol: 2","Action‎","Movie",3);
        lista_General[9] = new Movie(205,"Once Upon a Time in Hollywood","Thriller","Movie",4);
        lista_General[10] = new Sitcoms(301,"The Office","Sitcom","Serie",4);
        lista_General[11] = new Sitcoms(302,"Seinfield","Sitcom","Serie",3);

        Episodes * lista_capitulos[10];
        lista_capitulos[0] = new Episodes(301,"The Office","Sitcom","Episodio",5,3011,4,1,1);
        lista_capitulos[1] = new Episodes(301,"The Office","Sitcom","Episodio",5,3012,5,2,1);
        lista_capitulos[2] = new Episodes(302,"The Office","Sitcom","Episodio",5,3021,3,1,2);
        lista_capitulos[3] = new Episodes(302,"The Office","Sitcom","Episodio",5,3022,5,2,2);
        lista_capitulos[4] = new Episodes(302,"The Office","Sitcom","Episodio",5,3023,2,3,2);
        lista_capitulos[5] = new Episodes(303,"Seinfield","Sitcom","Episodio",4,3031,4,1,1);
        lista_capitulos[6] = new Episodes(303,"Seinfield","Sitcom","Episodio",4,3031,3,1,1);
        lista_capitulos[7] = new Episodes(303,"Seinfield","Sitcom","Episodio",4,3031,2,1,1);
        lista_capitulos[8] = new Episodes(304,"Seinfield","Sitcom","Episodio",4,3031,4,1,1);
        lista_capitulos[9] = new Episodes(304,"Seinfield","Sitcom","Episodio",4,3031,5,1,1);

        cout << "Archivos cargados\n"
        "Todo listo para la correcta operacion del sistema.\n" << endl;

    cout << "1. Cargar archivo de datos \n"
"2. Mostrar los videos por calificacion o genero\n"
//con una cierta calificación o de un cierto género
"3. Mostrar los episodios de una serie con cierta calificacion\n"
//con una calificación determinada
"4. Mostrar las peliculas con cierta calificacion \n"
"5. Calificar un video \n"
//pedir titulo a calificar
//pedir valor otorgado
"6. Salir" << endl;

    int option = 0;

    while (option != 6){
    cin >> option;

    if (option == 1){

        Video * lista_General[21];

        lista_General[0] = new Video(101,"Dolphin doing something idk", "Animals","Video",3);
        lista_General[1] = new Video(102,"Cat being cute", "Entertainment","Video",5);
        lista_General[2] = new Video(103,"How to make a breakfast with 0.01 cent", "Food","Video",1);
        lista_General[3] = new Video(104,"Speedrun Mario 64 4:34 World Record", "Videogames","Video",4);
        lista_General[4] = new Video(105,"Easter Egg Kino der Toten", "Videogames","Video",2);
        lista_General[5] = new Movie(201,"Inglorious Basterds","Action","Movie",5);
        lista_General[6] = new Movie(202,"Pulp fiction","Thriller‎","Movie",5);
        lista_General[7] = new Movie(203,"Kill Bill vol: 1","Action","Movie",4);
        lista_General[8] = new Movie(204,"Kill Bill vol: 2","Action‎","Movie",3);
        lista_General[9] = new Movie(205,"Once Upon a Time in Hollywood","Thriller","Movie",4);
        lista_General[10] = new Sitcoms(301,"The Office","Sitcom","Serie",4);
        lista_General[11] = new Sitcoms(302,"Seinfield","Sitcom","Serie",3);

        Episodes * lista_capitulos[10];
        lista_capitulos[0] = new Episodes(301,"The Office","Sitcom","Episodio",5,3011,4,1,1);
        lista_capitulos[1] = new Episodes(301,"The Office","Sitcom","Episodio",5,3012,5,2,1);
        lista_capitulos[2] = new Episodes(302,"The Office","Sitcom","Episodio",5,3021,3,1,2);
        lista_capitulos[3] = new Episodes(302,"The Office","Sitcom","Episodio",5,3022,5,2,2);
        lista_capitulos[4] = new Episodes(302,"The Office","Sitcom","Episodio",5,3023,2,3,2);
        lista_capitulos[5] = new Episodes(303,"Seinfield","Sitcom","Episodio",4,3031,4,1,1);
        lista_capitulos[6] = new Episodes(303,"Seinfield","Sitcom","Episodio",4,3031,3,1,1);
        lista_capitulos[7] = new Episodes(303,"Seinfield","Sitcom","Episodio",4,3031,2,1,1);
        lista_capitulos[8] = new Episodes(304,"Seinfield","Sitcom","Episodio",4,3031,4,1,1);
        lista_capitulos[9] = new Episodes(304,"Seinfield","Sitcom","Episodio",4,3031,5,1,1);

        cout << "Archivos cargados\n"
        "Todo listo para la correcta operacion del sistema.\n" << endl;

        cin >> option;
    }

    if (option == 2){

        cout << "1. Mostrar todo\n"
        "2. Filtrar videos por calificacion\n"
        "3. Filtar videos por genero" << endl;
        int option2 = 0;
        cin >> option2;
        while (option2 <= 3){

            if (option2 == 1){
                cout << "Todo el material multimedia del sitio: "<<endl;
                for (int i = 0; i <= 11; i++){
                        cout << lista_General[i] -> getTitle() << endl;
                        cout <<"ID numb: " <<lista_General[i] -> getId() << endl;
                        cout << "Genero: "<< lista_General[i] -> getGenre() << endl;
                        cout << "Tipo: "<<lista_General[i] -> getType() << endl;
                        cout << "Calificacion: "<<lista_General[i] -> getRate() <<"\n" <<endl;
                    }
                    cout << "\nSeleccionar otra opcion:\n"
                    "1. Mostrar todo\n"
                    "2. Filtrar videos por calificacion\n"
                    "3. Filtar videos por genero" << endl;
                    cin >> option2;
                    cout << "" << endl;
                }

            if (option2 == 2){
                cout << "ingresa la calififacion a filtrar" << endl;
                int rate = 0;
                cin >> rate;
                cout <<"\nContenido multimedia con calificacion: " << rate <<endl;

                for (int i = 0; i <= 11; i++){
                    if (lista_General[i] -> getRate() == rate){
                        cout << lista_General[i] -> getTitle() << endl;
                    }
                }
                cout << "\nSeleccionar otra opcion:\n"
                    "1. Mostrar todo\n"
                    "2. Filtrar videos por calificacion\n"
                    "3. Filtar videos por genero" << endl;
                    cin >> option2;
                    cout << "" << endl;
            }
            if (option2 == 3){
                cout << "ingresa el genero a filtrar" << endl;
                string choise_genre = "";
                cin >> choise_genre;
                cout <<"\nContenido multimedia con genero: " << choise_genre << "\n"<<endl;
                for (int i = 0; i <= 11; i++){
                    if (lista_General[i] -> getGenre() == choise_genre){
                        cout << lista_General[i] -> getTitle() << endl;
                    }

                }
                cout<< "En caso de no haber ningun resutado, ese genero no existe o esta mal escrito.\n" << endl;
                cout << "\nSeleccionar otra opcion:\n"
                    "1. Mostrar todo\n"
                    "2. Filtrar videos por calificacion\n"
                    "3. Filtar videos por genero" << endl;
                    cin >> option2;
                    cout << "" << endl;
            }
        }
    }

    if (option == 3){
        cout << "Seleccione la serie:\n" <<endl;

        for (int i = 0; i <= 11; i++){
            if(lista_General[i] -> getType() == "Serie"){
                cout << "." << lista_General[i] -> getTitle() << endl;
                }
            }

        int option2 = 0;
        cin >> option2;

        string choise = "";
        if (option2 == 1){
            choise = "The Office";
        }
        if (option2 == 2){
            choise = "Seinfield";
        }

        while (option2 <= 2){

            if (option = 1){
                cout << "Ingresa la calififacion a filtrar" << endl;
                int rate_ep = 0;
                cin >> rate_ep;
                cout <<"\nEpisodios de "<< choise << "con calificacion: " << rate_ep <<endl;
                for (int i = 0; i <= 21; i++){
                    if (lista_capitulos[i] -> getTitle() == choise && lista_capitulos[i] -> getEpisode_rate() == rate_ep ){
                        cout << lista_capitulos[i] -> getTitle() << " episodio " << lista_capitulos[i] -> getEpisode() << " de la " << lista_capitulos[i] -> getTemporada() << " temporada"<< endl;
                    }
                }
                cout << "" << endl;
            }
        }

    }


    if (option == 4){
        while (option <=4){
        cout << "\ningresa la calififacion a filtrar" << endl;
        int rate = 0;
        cin >> rate;
        cout <<"\nPeliculas con calificacion: " << rate <<endl;
        for (int i = 0; i <= 11; i++){
            if (lista_General[i] -> getType() == "Movie" && lista_General[i] -> getRate() == rate){
                cout << lista_General[i] -> getTitle() << endl;
                }
            }
        }
        cout << "" << endl;
    }


    if (option == 5){
        cout << "Selecciona el video a calificar:" << endl;
        for (int i = 0; i <= 4; i++){
            cout << i+1 << "." << lista_General[i] -> getTitle() << endl;
            }
        int i = 0;
        cin >> i;

        while (i <= 5){
            cout << "Ingresa la nueva calificacion: " << endl;
            int new_cal = 0;
            cin >> new_cal;

            lista_General[i-1] = new Video(lista_General[i-1] -> getId(), lista_General[i-1] -> getTitle(), lista_General[i-1] -> getGenre(),lista_General[i-1] -> getType(), new_cal);
            cout << "La nueva calificacion de " << lista_General[i-1] -> getTitle() << " es " << lista_General[i-1] -> getRate() << endl;
            cout << "" << endl;

            cin >> i;
            }
    }


cout << "Que tenga buen dia." << endl;
return 0;

}
}



//cout << "Todos los contenidos:" << endl;
    //for (int i = 0; i <= 1; i++){
        //cout << lista[i] -> getTitle() << endl;
