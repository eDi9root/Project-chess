#include "Box.h"

#include "pieces.h"

Box::Box(int row, int col) : ROW{row}, COL{col}, pieces{nullptr} {}
    
void Box::empty() {
    if (!isEmpty()) {
        //
    }
}
bool Box::isEmpty() {
    return Pieces == nullptr;
}
int Box::getRow() {
    return ROW;
}
int Box::getCol() {
    return COL;
}
