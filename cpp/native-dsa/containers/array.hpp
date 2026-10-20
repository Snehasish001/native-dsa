template <typename T>
class Array {
private:
    T* data;
    std::size_t size_;
    std::size_t capacity_;

public:
    Array();
    explicit Array(std::size_t capacity);

    void append(const T& value);
    T pop();

    T& operator[](std::size_t index);

    std::size_t size() const;
    std::size_t capacity() const;
};