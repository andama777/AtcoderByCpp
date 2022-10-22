# Tips

## 演算子優先順位
https://learn.microsoft.com/ja-jp/cpp/cpp/cpp-built-in-operators-precedence-and-associativity?view=msvc-170

## 2数の平均切り上げ
int main(){
    int a, b;
    cin >> a >> b;
    int s = (a + b + 1) / 2;
    cout << s << endl;
    return 0;
}
