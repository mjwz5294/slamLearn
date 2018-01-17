#include <iostream>
using namespace std;

extern void useEigen(void);
extern void useGeometry(void);

int main( int argc, char** argv )
{
    useGeometry();
    return 0;
}
