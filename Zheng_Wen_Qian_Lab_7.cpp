//Wen Qian Zheng
//Lab 7

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream inFile("game_scores.txt"); // opens our input file

    string playerName;
    double score1, score2, score3;

    while (inFile >> playerName >> score1 >> score2 >> score3) { // reads the player's names and score
        
        double average = (score1 * 0.2) + (score2 * 0.3) + (score3 * 0.5); // calculates average
        cout << playerName << " - "; // shows the player's name and their performance level

        if (average > 2000)
        {
            cout << "Congrats! You are an Expert!"; // expert
        } 
        else if (average >= 1800)
        {
            cout << "Master - Good Job!"; // master
        }
        else if (average >= 1500)
        {
            cout << "Advanced - Good Job!"; // advanced
        }
        else if (average >= 1000)
        {
            cout << "Intermediate"; // intermediate
        }
        else
        {
            cout << "Beginner - Keep Practicing!"; // beginner
        }
        cout << endl;
    }

    inFile.close(); // file close
    return 0;
}
