#ifndef MOVIE_CLASS__MOVIES_H
#define MOVIE_CLASS__MOVIES_H

#include <vector>
#include <string>
#include "Movie.h"


class Movies {

private:

    std::vector<Movie> movies;

public:

    Movies();       //Constructor
    ~Movies();      //Destructor

    /****************************************************************************
     add_movie expects the name of the movie , rating & watched count

     it will search movies vector to see if a movie object already exists with the same name.

     if it does, then return false since the movie already exists.
     otherwise, create a movie object from the provided information
     and add that movie object to the movies vector and return true.
    ****************************************************************************/

    bool add_movie(std::string name , std::string rating , int watched);

    /****************************************************************************
     increment_watched expects the name of the movie to increment the watched count

     it will search the movies vector to see if a movie object already exists with the same name.

     if it does, then increment that objects watched by 1 and return true.
     otherwise, return false since then no movie object with the movie name
     provided exists to increment.
    ****************************************************************************/

    bool increment_watched(std::string name);

    /****************************************************************************
     display

     display all the movie objects in the movies vector.
     for each movie call the movie.display method so the movie
     object displays itself.
    ****************************************************************************/

    void display() const;

};


#endif //MOVIE_CLASS__MOVIES_H
