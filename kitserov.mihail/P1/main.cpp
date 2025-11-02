#include <iostream>
bool is_dubl(int* row, int num) {
    for (int i = 0; i < num - 1; i++) {
        if (row[i] == row[i + 1]) {
            return true;
        }
    }
    return false;
}
int main()
{

}
