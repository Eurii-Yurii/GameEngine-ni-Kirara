#ifndef SC0RE_H
#define SC0RE_H
class Score {
private:
	int score;
	int hits;
	int misses;
	int streak;

public:

	void hitCounter();
	void streakCounter();
	void scoreAdd();
	void missPenalty();
};
#endif // !SC0RE_H

