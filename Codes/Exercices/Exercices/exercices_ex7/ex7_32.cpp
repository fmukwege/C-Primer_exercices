#include <iostream>
#include <string>
#include <vector>

// Here I define as friend a method of Window_mgr that will be then able to access private attribute of Screen

// For this :  
// 1. First, define the friend class, which declares, but cannot define, the desired method.
// 2. Next, define the target class, including a friend declaration for the desired method.
// 3. Finally, define the method, which can now refer to the members in the target class 
// Note : if defined outside the class, use the scope operator ::

using namespace std;
class Window_mgr {
public:
    // location ID for each screen on the window
    using ScreenIndex = std::vector<Screen>::size_type;
    // reset the Screen at the given position to all blanks
    void clear(ScreenIndex);
private:
    std::vector<Screen> screens{Screen(24, 80, " ")};
    };
    void Window_mgr::clear(ScreenIndex i)
    {
    // s is a reference to the Screen we want to clear
    Screen &s = screens[i];
    // reset the contents of that Screen to all blanks
    s.contents = string(s.height * s.width,' ');
}

class Screen{
typedef string::size_type pos;
//friend functions  
friend ostream& print(ostream& out, Screen& screen){
    out << screen.getContents() << endl;
    return out; // if not return no output in commandline
};
friend void Window_mgr::clear(std::vector<Screen>::size_type);
public:

// 7.25 : Can Screen safely rely on the default versions of copy and assignment? If so, why? If not, why not?
// Answer : 
// Yes, because all the data members of `Screen` are built-in types or `string`,
//  which can rely on synthesized versions for copy and assignment.
    // constructors
    Screen()= default;
    //Screen(pos w, pos h, pos c) : cursor(c), height(h), width(w){};
    Screen(pos w, pos h,string text) : height(h), width(w),contents(text){};
    // getters
    string::size_type getCursor() const {return cursor;}
    string::size_type getHeight() const{return height;}
    string::size_type getWidth() const{return width;}
    string getContents() const{return contents;}
    // setters - Note how important the & is : you do not want to return a copy of the object each time you set smthg
    inline const Screen set(char c){
        if (cursor > contents.size())
        {   
            size_t n_blank =cursor-contents.size()+1; 
            contents.append(n_blank,' ');
        }
        contents[cursor] = c; // beware ! subscripting a string gives char
        return *this;
    }
    // overload of set which allow also to move 
    inline const Screen set(char c, pos row, pos col){
        this->move(row,col);        
        return this->set(c);       
    }
    // members function
    // inline to optimize since it does not do a lot 
    inline Screen move(string::size_type r ,string::size_type col){
        pos row = r * width; // compute the row location
        cursor = row + col; // move cursor to the column within that row
        return *this;
    }
    Screen &display(std::ostream &os){ do_display(os); return *this; }
    const Screen &display(std::ostream &os) const{ do_display(os); return *this; }
private:
    string::size_type cursor = 0;
    string::size_type height = 0;
    string::size_type width = 0;
    string contents = " Init";
    void do_display(std::ostream &os) const {os << contents;}


};

int main(){

}