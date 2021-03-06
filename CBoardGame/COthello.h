#ifndef __C_OTHELLO_H__
#define __C_OTHELLO_H__
#define OTHELLO_SIZE 8
#include "CBoardGame.h"
#include <vector>
using namespace std;

class COthello : public CBoardGame
{
private:
	vector<pair<int, int>> m_VectorPairReversePoint;

public:
	COthello(int a_nRowSize, int a_nColSize) : CBoardGame(a_nRowSize, a_nColSize) 
	{
		setData(3, 3, -1);
		setData(3, 4, 1);
		setData(4, 3, 1);
		setData(4, 4, -1);
	}

	virtual bool isBreak(int, int, int, int&, bool&);
	virtual bool check(int, int, int);
	virtual void putStone() {
		CBoardGame::putStone();
		for (auto p : m_VectorPairReversePoint) setData(p.first, p.second, (getColor() * -1));
	}
	virtual bool isInvalidPosition(char, char, int);
	virtual bool countStone();
	virtual bool passCheck();
};
#endif