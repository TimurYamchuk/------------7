#include <iostream>
#include <string>

using namespace std;

class Keyboard // композиция
{
public:
    Keyboard()
    {}

    ~Keyboard()
    {}
};

class Processor // композиция
{

public:
    Processor()
    {}

    ~Processor()
    {}
};

class Screen // композиция
{
private:
    double size;

public:
    Screen()
    {}

    ~Screen()
    {}
};

class Camera // агрегация
{
private:
    string brand;

public:
    Camera(const string& brand) : brand(brand) 
    {}

    void Show() 
    {
        cout << "Camera : " << brand << endl;
    }

    ~Camera()
    {}
};

class Mouse // агрегация
{
private:
    string brand;

public:
    Mouse(const string& brand) : brand(brand) 
    {}

    void Show()
    {
        cout << "Mouse : " << brand << endl;
    }

    ~Mouse() {}
};

class Motherboard // композиция
{
private:
    string brand;

public:
    Motherboard(const string& brand) : brand(brand) 
    {}

    void Show()
    {
        cout << "Motherboard : " << brand << endl;
    }

    ~Motherboard() {}
};

class GraphicsCard // композиция
{
private:
    string brand;

public:
    GraphicsCard(const string& brand) : brand(brand) 
    {}

    void Show() 
    {
        cout << "Graphics Card : " << brand << endl;
    }

    ~GraphicsCard() {}
};

class Touchpad // композиция
{
private:
    string brand;

public:
    Touchpad(const string& brand) : brand(brand) 
    {}

    void Show()
    {
        cout << "Touchpad : " << brand << endl;
    }

    ~Touchpad() {}
};

class Laptop 
{
private:
    Keyboard keyboard;
    Processor processor;
    Screen screen;
    Camera camera;
    Mouse mouse;
    Motherboard motherboard;
    GraphicsCard graphicsCard;
    Touchpad touchpad;

public:
    Laptop(const string& camBrand, const string& mouseBrand, const string& mbBrand, const string& gcBrand, const string& tpBrand)
        : camera(camBrand), mouse(mouseBrand), motherboard(mbBrand), graphicsCard(gcBrand), touchpad(tpBrand) 
    {}

    void Show() 
    {
        cout << "Laptop : " << endl;
        camera.Show();
        mouse.Show();
        motherboard.Show();
        graphicsCard.Show();
        touchpad.Show();
    }
};

int main() 
{
    Laptop myNotebook("Sony", "Bloody", "Asus", "Nvidia", "Xaomi");
    myNotebook.Show();

    Laptop newNotebook("Canon", "Logitech", "MSI", "AMD", "Samsung");
    newNotebook.Show();

    return 0;
}
