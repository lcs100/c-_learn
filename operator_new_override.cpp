void* operator new(size_t size){
    A* ppoint = (A*)malloc(size);
    return ppoint;
}

void* operator new[](size_t size){
    A* ppoint = (A*)malloc(size);
    return ppoint;
}

void operator delete(void* phead){
    free(phead);
}

void operator delete[](void* phead){
    free(phead);
}

class A {
    private:
        
    public:

};