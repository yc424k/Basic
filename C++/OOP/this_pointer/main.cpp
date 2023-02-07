#include <iostream>

using namespace std;

class Person
{
private:
    float weight;
    float height;
    const string name;

public:
    Person(float weight, float height, const string& name)
    : weight(weight), height(height), name(name)
    {
    }
    void lostWeight(float weight)
    {
        this->weight -= weight;
        if(this->weight < 0)
            this->weight = 0;
    }
    void skipMeals(int times)
    {
        this->lostWeight(times * 0.5f);
    }
    float getBMI()
    {
        return weight / (height * 100 * height * 100);
    }
    Person& complete(Person& person)
    {
        if(this->getBMI() < person.getBMI())
            return *this;
        else
            return person;
    }
    void doCeremony()
    {
        cout << name << " win!" << endl;
    }
};
int main() {
    Person person(76.3f, 172.3f, "Kim");
    Person person0(76.3f, 172.3f, "Park");
    Person person1(58.2f, 167.3f, "Yun");

    person0.complete(person1).doCeremony();
}
