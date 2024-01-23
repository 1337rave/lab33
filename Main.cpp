#include <iostream>
#include <stack>
#include <queue>

// Базовий клас "Список"
class List {
public:
    virtual void insert(int value) = 0;
    virtual void remove() = 0;
    virtual void display() const = 0;
    virtual ~List() {}
};

// Похідний клас "Стек"
class Stack : public List {
private:
    std::stack<int> elements;

public:
    void insert(int value) override {
        elements.push(value);
    }

    void remove() override {
        if (!elements.empty()) {
            elements.pop();
        }
    }

    void display() const override {
        std::stack<int> temp = elements;
        while (!temp.empty()) {
            std::cout << temp.top() << " ";
            temp.pop();
        }
        std::cout << std::endl;
    }
};

// Похідний клас "Черга"
class Queue : public List {
private:
    std::queue<int> elements;

public:
    void insert(int value) override {
        elements.push(value);
    }

    void remove() override {
        if (!elements.empty()) {
            elements.pop();
        }
    }

    void display() const override {
        std::queue<int> temp = elements;
        while (!temp.empty()) {
            std::cout << temp.front() << " ";
            temp.pop();
        }
        std::cout << std::endl;
    }
};

int main() {
    // Використання стеку
    List* stack = new Stack();
    stack->insert(10);
    stack->insert(20);
    stack->insert(30);
    stack->display();

    stack->remove();
    stack->display();

    // Використання черги
    List* queue = new Queue();
    queue->insert(5);
    queue->insert(15);
    queue->insert(25);
    queue->display();

    queue->remove();
    queue->display();

    delete stack;
    delete queue;

    return 0;
}
