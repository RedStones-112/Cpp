#include <iostream>
#include <string>

using namespace std;

template <typename T>
class CustomClass
{
private:
    T data;
    
public:
    void test_print(T s);
};

template <typename T>
void CustomClass<T>::test_print(T s){
    data = s;
    cout << data << endl;
}


int main(){
    CustomClass<int> cci;
    cci.test_print(1);
    CustomClass<string> ccs;
    ccs.test_print("test_word");
}
