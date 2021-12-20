#include "list"
using namespace std;

class Movie {
    int point;
    string movieName;
    int one;
    int two;
    int three;
    int four;
    int five;

public:
    list<Movie> moviList;
    void Movi(int point,string moviName,int one,int two,int three,int four,int five){
        this->point = point;
        this->movieName = moviName;
        this->one = one;
        this->two = two;
        this->three = three;
        this->four = four;
        this->five = five;
    }
    int total(int arry[]){
        int conclusion;
        int tmp;
        int listLenght = (sizeof(arry));
        for (int i = 0; i <= listLenght; ++i) {
            tmp = arry[i];
            conclusion =  conclusion + tmp ;
        }
        conclusion = conclusion -1;
        return conclusion;
    }
    void addMoviList(Movie movie){
        moviList.push_back(movie);
    }
    void showMoviList(){
        for (auto const &i: moviList) {
            cout<<"----------------------------------------"<<endl;
            cout<<"Movi Name:"<<i.movieName<<endl;
            cout<<"Movi Point: "<<i.point<<endl;
            cout<<"[1]: "<<i.one<<endl;
            cout<<"[2]: "<<i.two<<endl;
            cout<<"[3]: "<<i.three<<endl;
            cout<<"[4]: "<<i.four<<endl;
            cout<<"[5]: "<<i.five<<endl;
            cout<<"----------------------------------------"<<endl;
        }
    }
};


