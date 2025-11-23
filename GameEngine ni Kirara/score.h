#ifndef SCORE_H
#define SCORE_H

class Score
{
private:
	static int ScoreValue;
	
public:
	
	Score();
	static int ScoreCalc(int streak);
	static int getscore();
	
};

#endif // !SCORE_H
