#include "Village.h"
#include "OOP4H.h"

// person의 내부를 알아야 되기 때문에 OO4H.h를 include해야됨
void Village::add(Person person)
{
    persons.push_back(person);
}
// int main()
// {
// }