#include "Leaver.h"

std::string Leaver::leave(std::string name)
{
    UserName = name;
    return "\n�� ��������, " + UserName + "!\n";
}
