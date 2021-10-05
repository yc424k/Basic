#include <iostream>
using namespace std;

#define BACKGROUND_PIXEL 0
#define IMAGE_PIXEL 1
#define COUNTED 2

int cells[8][8] = {
    {0, 0, 1, 0, 0, 0, 0, 1},
    {1, 1, 0, 0, 0, 1, 0, 0},
    {0, 0, 1, 0, 1, 0, 1, 0},
    {0, 0, 0, 0, 0, 1, 0, 0},
    {0, 1, 0, 1, 0, 1, 0, 0},
    {0, 1, 0, 1, 0, 1, 0, 0},
    {1, 0, 0, 0, 1, 1, 0, 0},
    {0, 1, 1, 0, 0, 0, 1, 1}};
class cell
{
private:
    int count;

public:
    int countCells(int x, int y);
};

int cell::countCells(int x, int y)
{
    if (cells[x][y] == 0)
        return 0;
    if (cells[x][y] == 2)
        return 0;
    if (x < 0 || x > 7 || y < 0 || y > 7)
    {
        return 0;
    }

    cells[x][y] = COUNTED;

    if(cells[x][y] == IMAGE_PIXEL)
        return 1;

}
    return 1 + countCells(x - 1, y + 1) + countCells(x, y + 1) + countCells(x + 1, y + 1) + countCells(x + 1, y) + countCells(x + 1, y - 1) + countCells(x, y - 1) + countCells(x - 1, y - 1) + countCells(x - 1, y);

int main()
{
    cell CELL;

    cout << CELL.countCells(3, 5);

    return 0;
}