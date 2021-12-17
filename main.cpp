#include <iostream>
#include <string>
class Animal
{
public:
    virtual void voice() = 0;
    virtual std::string getType() = 0;
};

class Dog : public Animal
{
public:
    virtual void voice(){
        std::cout << "gaf\n";
    }
    virtual std::string getType(){
        return "dog";
    }
};

class Cat : public Animal
{
public:
    virtual void voice(){
        std::cout << "maow\n";
    }
    virtual std::string getType(){
        return "cat";
    }
};
void meeting(Animal* a, Animal* b){
#define TYPE_A a->getType()
#define TYPE_B b->getType()
    if (TYPE_A + TYPE_B == "dogdog"){
        std::cout << "Woof-Woof" << std::endl;
    }else if (TYPE_A + TYPE_B == "dogcat"){
        std::cout << "Bark Meow" << std::endl;
    }else if (TYPE_A + TYPE_B == "catdog"){
        std::cout << "Meow Bark" << std::endl;
    }else if (TYPE_A + TYPE_B == "catcat"){
        std::cout << "Purr Purr" << std::endl;
    }

}
int main() {
    Animal* d = new Dog();
    Animal* c = new Cat();
    meeting(c, c);
    return 0;
}
