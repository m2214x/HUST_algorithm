template<typename T, int x = 0>
T g = T(10 + x);
template float g<float>;
template<typename T>
T& f() {
    T& a = g<T, 0>;
    return ++a;
}
float g1 = g<float>;
float& g2 = g<float>;
const float& g3 = g<float>;
const float& g4 = g<float, 4>;
int main()
{
    float a1 = g<float>;
    float& a2 = g<float>;
    const float& a3 = g<float>;
    const float& a4 = g<float, sizeof(float)>;
    float& a5 = f<float>();
    float a6 = f<float>();
}
