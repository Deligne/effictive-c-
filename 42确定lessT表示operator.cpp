w

template<> // 这是一个std::less
struct std::less<Widget>: // 的Widget的特化；
 public // 也是非常坏的主意
 std::binary_function<Widget,
 Widget, // 关于这个基类更多
 bool> { // 的信息参见条款40
 bool operator()(const Widget& lhs, const Widget& rhs) const
 {
 return lhs.maxSpeed() < rhs.maxSpeed();
 }
};