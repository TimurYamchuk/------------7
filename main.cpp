#include <iostream>
#include <string>

using namespace std;

class Component {
public:
    Component(const string& name, const string& brand)
        : name(name), brand(brand) {}

    void Show() const {
        cout << name << ": " << brand << endl;
    }

private:
    string name;
    string brand;
};

class Camera {
private:
    string brand;

public:
    Camera(const string& brand) : brand(brand) {}

    void Show() {
        cout << "Camera : " << brand << endl;
    }
};

class Mouse {
private:
    string brand;

public:
    Mouse(const string& brand) : brand(brand) {}

    void Show() {
        cout << "Mouse : " << brand << endl;
    }
};

class Motherboard {
private:
    string brand;

public:
    Motherboard(const string& brand) : brand(brand) {}

    void Show() {
        cout << "Motherboard : " << brand << endl;
    }
};

class GraphicsCard {
private:
    string brand;

public:
    GraphicsCard(const string& brand) : brand(brand) {}

    void Show() {
        cout << "Graphics Card : " << brand << endl;
    }
};

class Touchpad {
private:
    string brand;

public:
    Touchpad(const string& brand) : brand(brand) {}

    void Show() {
        cout << "Touchpad : " << brand << endl;
    }
};

class Laptop 
{
private:
    Camera* camera;
    Mouse* mouse;

public:
    Laptop(Camera* cam, Mouse* m)
        : camera(cam), mouse(m)
    {}

    void Show() 
    {
        cout << "Laptop : " << endl;
        camera->Show();
        mouse->Show();
    }

    ~Laptop() {}
};
int main() {
    Camera myCamera("Sony");
    Mouse myMouse("Raizer");
    Motherboard myMotherboard("Asus");
    GraphicsCard myGraphicsCard("Nvidia");
    Touchpad myTouchpad("Xaomi");

    Laptop myNotebook(&myCamera, &myMouse, &myMotherboard, &myGraphicsCard, &myTouchpad);
    myNotebook.Show();

    Camera newCamera("Samsung");
    Mouse newMouse("Hyper x");
    Motherboard newMotherboard("MSI");
    GraphicsCard newGraphicsCard("AMD");
    Touchpad newTouchpad("samsung");

    Laptop newNotebook(&newCamera, &newMouse, &newMotherboard, &newGraphicsCard, &newTouchpad);
    newNotebook.Show();

    return 0;
}
