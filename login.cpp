#include <cstring>
#include <string>

using namespace std;

void copyName(string username)
{
    char buffer[10];
    strcpy(buffer, username.c_str());
}
