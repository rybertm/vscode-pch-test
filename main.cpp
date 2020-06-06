namespace nm
{
    class nmspace
    {
    public:
        nmspace(/* args */) {}
        ~nmspace() {}
        static int a;
    };

    int nmspace::a = 0;

} // namespace nm

class test
{
private:
    nm::nmspace n1;
    nm::nmspace n2;
    nm::nmspace n3;
    nm::nmspace n4;
    std::vector<nm::nmspace> itens;
    static int i;

public:
    test(/* args */) {}
    ~test() {}
};

int test::i = nm::nmspace::a;

int main()
{
    nm::nmspace in;
    return 0;
}