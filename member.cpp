// separate interface from implementation 

#include <cstdio>

class C1 {
    int i = 0;

public:
    void setvalue(int value);
    int getvalue();

};

void C1::setvalue(int value) {
    i = value;
}

int C1::getvalue() {
    return i;
}

int main() {
    int i = 47;
    C1 o1;
    o1.setvalue(i);


    printf("the value of o1 is %d\n", o1.getvalue());
}