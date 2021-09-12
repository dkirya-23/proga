# Способы инициализации

## Условие

Определите тип `Incognizable`, для которого следующий код будет корректен:

```cpp
int main() {
  Incognizable a;
  Incognizable b = {};
  Incognizable c = {0};
  Incognizable d = {0, 1};
  return 0;
}
```

## Как тестировать локально

Собрать программу с помощью `cmake` и запустить `ctest`:

```bash
mkdir build; cd build
cmake ..; cmake --build .
ctest -V
```
