// in C++, an interface is an abstract class where ALL methods are pure virtual
// and there are no member variables — just a contract that derived classes must fulfill

// this is different from a regular abstract class which can have:
// - some implemented methods
// - member variables
// - constructors

// an interface only defines WHAT must be done, not HOW

#include <iostream>
using namespace std;

// interface — all pure virtual, no member variables, no implementation
class Printable{
    public:
        virtual void print() const = 0;
        virtual ~Printable(){}
};

class Saveable{
    public:
        virtual void save() const = 0;
        virtual ~Saveable(){}
};

// a class can implement multiple interfaces
class Document : public Printable, public Saveable{
    public:
        Document(const string& content) : m_content{content} {}

        void print() const override{
            cout << "Printing: " << m_content << endl;
        }
        void save() const override{
            cout << "Saving: " << m_content << endl;
        }
    private:
        string m_content;
};

class Image : public Printable{
    public:
        Image(const string& filename) : m_filename{filename} {}

        void print() const override{
            cout << "Printing image: " << m_filename << endl;
        }
    private:
        string m_filename;
};

int main(){
    Document doc("Hello World");
    Image    img("photo.png");

    doc.print();
    doc.save();
    img.print();

    // interface polymorphism — anything Printable can be printed
    Printable* items[]{&doc, &img};
    cout << "\nAll printable items:" << endl;
    for(const auto& item : items){
        item->print();
    }

    return 0;
}

// summary:
// abstract class  = has at least one pure virtual, may have data and implemented methods
// interface       = all pure virtual, no data, no implementation — a pure contract
// C++ has no 'interface' keyword like Java/C# — you simulate it with a fully abstract class
