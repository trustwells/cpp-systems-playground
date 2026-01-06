

// use = delete vs privatizing function you don't want people using
class Example {


    int i;
public:
    Example() { i = 12; }


    int getNum() { return i; }

    Example(const Example&) = delete;

    Example& operator=(const Example&) = delete;
};


int main() {





    return 0;



}
