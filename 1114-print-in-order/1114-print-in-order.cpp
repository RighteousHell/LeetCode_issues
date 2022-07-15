class Foo {
    std::promise<void> sec;
    std::promise<void> thi;
public:
    Foo() {
        
    }

    void first(function<void()> printFirst) {
        
        // printFirst() outputs "first". Do not change or remove this line.
        printFirst();
        sec.set_value();
    }

    void second(function<void()> printSecond) {
        sec.get_future().wait();
        // printSecond() outputs "second". Do not change or remove this line.
        printSecond();
        thi.set_value();
    }

    void third(function<void()> printThird) {
        thi.get_future().wait();
        // printThird() outputs "third". Do not change or remove this line.
        printThird();
    }
};