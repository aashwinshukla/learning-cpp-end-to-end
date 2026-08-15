// when using polymorphism (base pointer managing derived objects),
// if the base class destructor is NOT virtual, only the base destructor runs on delete
// the derived destructor is SKIPPED — this causes memory leaks

// always make the base class destructor virtual if the class is meant to be inherited

#include <iostream>
using namespace std;

class Shape{
    public:
        Shape(){
            cout << "Shape constructor called" << endl;
        }
        virtual ~Shape(){   // virtual destructor — ensures derived destructor is also called
            cout << "Shape destructor called" << endl;
        }
        virtual void draw() const = 0;
};

class Circle : public Shape{
    public:
        Circle(){
            m_data = new int[10];   // heap allocation
            cout << "Circle constructor called" << endl;
        }
        ~Circle(){
            delete[] m_data;        // released in destructor
            m_data = nullptr;
            cout << "Circle destructor called" << endl;
        }
        void draw() const override{
            cout << "Circle::draw() called" << endl;
        }
    private:
        int* m_data {nullptr};
};

int main(){
    // managing a Circle through a base pointer
    Shape* shape_ptr = new Circle;
    shape_ptr->draw();

    delete shape_ptr;
    // with virtual destructor: Circle destructor called, then Shape destructor called
    // without virtual destructor: only Shape destructor called — m_data never freed (memory leak)

    return 0;
}

// output:
// Shape constructor called
// Circle constructor called
// Circle::draw() called
// Circle destructor called   <- only happens because destructor is virtual
// Shape destructor called

// rule of thumb: if a class has ANY virtual function, give it a virtual destructor
