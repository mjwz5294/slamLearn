#include <iostream>
using namespace std;

extern void useEigen(void);
extern void useGeometry(void);
extern void visualizeGeometry (void);

int main( int argc, char** argv )
{
    visualizeGeometry();
    return 0;
}
