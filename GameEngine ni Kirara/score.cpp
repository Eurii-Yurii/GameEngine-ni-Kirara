#include <iostream>
#include "score.h"
#include "inputs.h"
using namespace std;

int Score::ScoreValue = 0;

Score::Score()
{

}

int Score::ScoreCalc(int streak)
{
        int temp_streak = streak * 1;
        ScoreValue += temp_streak;   // add to score
        return ScoreValue;
}

int Score::getscore()
{
    return ScoreValue;
}




