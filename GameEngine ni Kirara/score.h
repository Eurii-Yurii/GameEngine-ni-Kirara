#ifndef SC0RE_H
#define SC0RE_H
class Score {
private:
	int score = 300;
	int hits;
	int misses;

public:

	void scoreAdd();
	void missPenalty();
};
#endif // !SC0RE_H

