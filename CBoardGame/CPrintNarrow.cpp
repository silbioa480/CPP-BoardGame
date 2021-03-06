#include "CPrintNarrow.h"

void CPrintNarrow::printUITop()
{
	cout << " 0 1 2 3 4 5 6 7 8 9 a b c d e f";
	cout << "\n";
}

void CPrintNarrow::printUIRight(int _r)
{
    char cRowNumber = (char)(_r < 10) ? _r + '0' : _r + 'a' - 10;
    cout << cRowNumber << "\n";
}

void CPrintNarrow::printLine(int si, int _r)
{
    string s = m_sLINE[si];
    cout << getLine(s, _r, 0);

    s = m_sLINE[si + 1];
    for (int i = 1; i <= getColSize() - 2; i++) cout << getLine(s, _r, i);

    s = m_sLINE[si + 2];
    cout << getLine(s, _r, getColSize() - 1);
    printUIRight(_r);
}

void CPrintNarrow::printLineWide(int _r)
{
}

string CPrintNarrow::getLine(string _line, int _r, int _c)
{
    int data = getData(_r, _c);
    return (data != 0) ? m_sSTONE[data + 1] : _line;
}

void CPrintNarrow::printBoard()
{
    system("cls");
    printUITop();

    printLine(TL, 0);

    for (int row = 1; row < getRowSize() - 1; row++)
    {
        printLine(ML, row);
    }
    printLine(BL, getRowSize() - 1);
    printf("\n");
}
