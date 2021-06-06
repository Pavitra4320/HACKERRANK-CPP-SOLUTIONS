#include <iostream>

using namespace std;
/*
 * Create classes Rectangle and RectangleArea
 */

class Rectangle {
public:
    Rectangle() = default;
    ~Rectangle() = default;

    int m_iWidth = 0;
    int m_iHeight = 0;

    void display() {
        cout << m_iWidth << " " << m_iHeight << endl;
    }
};
class RectangleArea : public Rectangle {
public:
    RectangleArea() = default;
    virtual ~RectangleArea() = default;

    void read_input() {
        cin >> m_iWidth >> m_iHeight;
    }
    
    void display() {
        cout << m_iWidth * m_iHeight << endl;
    }
};

int main()
{
    /*
     * Declare a RectangleArea object
     */
    RectangleArea r_area;
    
    /*
     * Read the width and height
     */
    r_area.read_input();
    
    /*
     * Print the width and height
     */
    r_area.Rectangle::display();
    
    /*
     * Print the area
     */
    r_area.display();
    
    return 0;
}
