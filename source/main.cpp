#include <iostream>
#include "Movie.h"
#include "list"
using namespace std;
int main() {

    int average;
    string getMovieName;
    Movie movi;
    int vote;
    char control;
    int voteCount;
    int tmp;
    int one = 0;
    int two = 0;
    int three = 0;
    int four = 0;
    int five = 0;

    do {
        cout<<"[1] add movie"<<endl;
        cout<<"[2] list of movies"<<endl;

        cout<<"Enter selection number"<<endl;
        cin>>vote;
        switch (vote) {
            case 1:
                cout<<"Enter movie name"<<endl;
                cin>>getMovieName;
                cout<<"how many people will vote"<<endl;
                cin>>voteCount;
                voteCount = voteCount -1;
                if (voteCount <= 0){
                    cout<<"wrong entry 0 cannot be entered"<<endl;
                } else if (voteCount >= 1){
                    int *pointList = new int[voteCount];
                    for (int i = 0; i <= voteCount; ++i) {
                        do {
                            cout<<"Enter the score"<<endl;
                            cin>>tmp;
                            if (tmp >=6){
                                cout<<"The score cannot be greater than 5"<<endl;
                            }
                        } while (tmp >=6);
                        switch (tmp) {
                            case 1:
                                one++;
                                break;
                            case 2:
                                two++;
                                break;
                            case 3:
                                three++;
                                break;
                            case 4:
                                four++;
                                break;
                            case 5:
                                five++;
                                break;
                        }
                        pointList[i] = tmp;
                    }
                    average = movi.total(pointList);
                    average = average / (voteCount + 1);
                    movi.Movi(average,getMovieName,one,two,three,four,five);
                    one = 0;
                    two = 0;
                    three = 0;
                    four = 0;
                    five= 0;
                    movi.addMoviList(movi);
                }
                break;

            case 2:
                movi.showMoviList();
                break;
        }
        cout<<"exit [e]"<<endl;
        cin>>control;
    } while (control != 'e');

    return 0;
}
