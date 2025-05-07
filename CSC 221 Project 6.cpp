// CSC 221 Project 6.cpp : Project 4: Star Search
//

#include <iostream>
#include <iomanip>
#include <random>
#include <string>
#include <fstream>
#include <iostream>
using namespace std;

int getScore()
{
    random_device rd;
    mt19937 gen(rd());
    uniform_real_distribution<float> dis(0.0, 10.0);
    float score = dis(gen);
    return score;
}

bool isLower()
{

}

bool isHigher()
{

}

double calcAverage()
{

}

int main()
{
    float minScore, maxScore, score = getScore();



    return 0;
}


