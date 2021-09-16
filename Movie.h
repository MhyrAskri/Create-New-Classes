#ifndef MOVIE_CLASS__MOVIE_H
#define MOVIE_CLASS__MOVIE_H

#include <string>

class Movie {

private:

    std::string name;       //name of the movie
    std::string rating;     //the movie rating G , PG , PG-13 , R
    int watched;            //the number of times you've watched the movie

public:

    //Constructor - expects all 3 movie attributes
    Movie(std::string name , std::string rating , int watched);

    //Copy constructor
    Movie(const Movie &source);

    //Destructor
    ~Movie();

    //Basic getters & setters for private attributes
    //implement these inline and watch your const-correctness

    std::string getName() const { return name; }
    void setName(std::string name) { this->name = name; }

    std::string getRating() const { return rating; }
    void setRating(std::string rating) { this->rating = rating; }

    int getWatched() const { return watched; }
    void setWatched(int watched) { this->watched = watched; }

    //Simply increment the watched attribute by 1
    void increment_watched() { ++watched; }

    //Simply display the movie information
    void display() const;

};


#endif //MOVIE_CLASS__MOVIE_H
