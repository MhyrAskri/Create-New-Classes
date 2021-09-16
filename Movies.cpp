#include <iostream>
#include "Movies.h"

/****************************************************************************
 Movies no-args constructor
****************************************************************************/
Movies::Movies() {

}

/****************************************************************************
 Movies destructor
****************************************************************************/
Movies::~Movies() {

}

/****************************************************************************
 add_movie expects the name of the movie , rating & watched count

 it will search movies vector to see if a movie object already exists with the same name.

 if it does, then return false since the movie already exists.
 otherwise, create a movie object from the provided information
 and add that movie object to the movies vector and return true.
****************************************************************************/
bool Movies::add_movie(std::string name, std::string rating, int watched) {

    for (const Movie &movie: movies) {

        if (movie.getName() == name) {

            return false;

        }

    }

    Movie temp { name , rating , watched };
    movies.push_back(temp);
    return true;

}

/****************************************************************************
 increment_watched expects the name of the movie to increment the watched count

 it will search the movies vector to see if a movie object already exists with the same name.

 if it does, then increment that objects watched by 1 and return true.
 otherwise, return false since then no movie object with the movie name
 provided exists to increment.
****************************************************************************/
bool Movies::increment_watched(std::string name) {

    for (Movie &movie: movies) {

        if (movie.getName() == name) {

            movie.increment_watched();
            return true;

        }

    }

    return false;

}

/****************************************************************************
 display

 display all the movie objects in the movies vector.
 for each movie call the movie.display method so the movie
 object displays itself.
****************************************************************************/
void Movies::display() const {

    if (movies.empty()) {

        std::cout << "Sorry, no movies to display.\n" << std::endl;

    } else {

        std::cout << "\n===========================================" << std::endl;

        for (const auto &movie: movies) {

            movie.display();

        }

        std::cout << "===========================================\n" << std::endl;

    }

}