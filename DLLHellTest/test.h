#include <iostream>
#include <string>

class vclass{
public:
    std::string name;
    virtual std::string xxxx(){
        return "vclass";
    }
    virtual std::string get_name()=0;
};
class obj : public vclass{
public:
    std::string get_name();//获得name
    obj(){
        name="hello";
    }
};