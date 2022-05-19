
class bigY;
class bigX{
public:
    bigX() = default;
    bigX(bigY* pointer) : p2y(pointer){};
    // getter
    bigY* getY(){return (p2y);};
    //setters
    bigX& setP2Y(bigY* Y_obj){
        p2y = Y_obj;
        return *this;
    } 
private:
    bigY* p2y = nullptr;

};
class bigY{
public:
    bigY() = default;
    bigY(bigX x_member) : x(x_member){}; 
private:
    bigX x;
};
int main(int argc, char const *argv[])
{
    bigX newX();
    bigY newY();
    bigY newZ(newX);

    return 0;
}
