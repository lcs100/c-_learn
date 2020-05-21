namespace test
{
    class A {
        private:
            int a;
    };

    void func(){
        void* p = (void*)new char[sizeof(A)];
        A* a = new(p)A();  //placement new

    }

} // namespace test
