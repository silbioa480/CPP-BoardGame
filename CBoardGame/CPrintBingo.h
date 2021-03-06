#ifndef __C_PRINT_BINGO_H__
#define __C_PRINT_BINGO_H__
#include "CPrintWide.h"

class CPrintBingo : public CPrintWide
{
private:
	virtual void printUITop();
	virtual void printLine(int, int);
	virtual void printLineWide(int);

public:
	CPrintBingo(int** a_dat, int a_nRowSize, int a_nColSize) : CPrintWide(a_dat, a_nRowSize + 1, a_nColSize + 2) { 
		m_sPlayer[0] = "1P";
		m_sPlayer[1] = "2P";
	}
};
#endif