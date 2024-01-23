#include <iostream>
#include <string>

// Базовий клас "Домашня тварина"
class Pet {
protected:
    std::string name;

public:
    Pet(const std::string& petName) : name(petName) {}

    virtual void Sound() const = 0;
    virtual void Show() const {
        std::cout << "Name: " << name << std::endl;
    }
    virtual void Type() const = 0;

    virtual ~Pet() {}
};

// Похідний клас "Собака"
class Dog : public Pet {
public:
    Dog(const std::string& dogName) : Pet(dogName) {}

    void Sound() const override {
        std::cout << "Woof! Woof!" << std::endl;
    }

    void Type() const override {
        std::cout << "Type: Dog" << std::endl;
    }
};

// Похідний клас "Кішка"
class Cat : public Pet {
public:
    Cat(const std::string& catName) : Pet(catName) {}

    void Sound() const override {
        std::cout << "Meow! Meow!" << std::endl;
    }

    void Type() const override {
        std::cout << "Type: Cat" << std::endl;
    }
};

// Похідний клас "Папуга"
class Parrot : public Pet {
public:
    Parrot(const std::string& parrotName) : Pet(parrotName) {}

    void Sound() const override {
        std::cout << "Squawk! Squawk!" << std::endl;
    }

    void Type() const override {
        std::cout << "Type: Parrot" << std::endl;
    }
};

// Похідний клас "Хом'як"
class Hamster : public Pet {
public:
    Hamster(const std::string& hamsterName) : Pet(hamsterName) {}

    void Sound() const override {
        std::cout << "Squeak! Squeak!" << std::endl;
    }

    void Type() const override {
        std::cout << "Type: Hamster" << std::endl;
    }
};

int main() {
    Dog myDog("Buddy");
    Cat myCat("Whiskers");
    Parrot myParrot("Polly");
    Hamster myHamster("Nibbles");

    // Виклики методів для кожної тварини
    myDog.Show();
    myDog.Type();
    myDog.Sound();
    std::cout << std::endl;

    myCat.Show();
    myCat.Type();
    myCat.Sound();
    std::cout << std::endl;

    myParrot.Show();
    myParrot.Type();
    myParrot.Sound();
    std::cout << std::endl;

    myHamster.Show();
    myHamster.Type();
    myHamster.Sound();
    std::cout << std::endl;

    return 0;
}
