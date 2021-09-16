#include <iostream>
#include <string>
#include <conio.h>
#include "Movies.h"

using namespace std;

void increment_watched(Movies &movies , string name);
void add_movie(Movies &movies , string name , string rating , int watched);

int main() {

    Movies myMovies;

    myMovies.display();

    add_movie(myMovies , "Big" , "PG-13" , 2);
    add_movie(myMovies , "Star Wars" , "PG" , 5);
    add_movie(myMovies , "Cinderella" , "PG" , 7);

    myMovies.display();

    add_movie(myMovies , "Cinderella" , "PG" , 5);
    add_movie(myMovies , "Ice Age" , "PG" , 12);

    myMovies.display();

    increment_watched(myMovies , "Big");
    increment_watched(myMovies , "Ice Age");

    myMovies.display();

    increment_watched(myMovies , "Joker");

    getch();
    return 0;
}

void increment_watched(Movies &movies , string name) {

    if (movies.increment_watched(name)) {

        cout << name << " watch incremented" << endl;

    } else {

        cout << name << " not found" << endl;

    }

}

void add_movie(Movies &movies , string name , string rating , int watched) {

    if (movies.add_movie( name , rating , watched )) {

        cout << name << " added" << endl;

    } else {

        cout << name << " already exists" << endl;

    }

}
