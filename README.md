# disassembly

## 结构
只有src是需要的代码, 其他的在整合时都要抛弃

## 进度
+ 已整合, 反汇编部分完成
+ 没有对immediate为负时的处理, 因为没看见别人有写, 如果需要我再加上

# 测试
+ 测试写了对全部27条指令的测试, 在build目录中执行以下命令即可启动测试
```cmake
Cmake -G"MinGW Makefiles" ..
cmake --build .
.\test
```
+ 或者在test目录下使用以下命令启动测试
```
g++ -o test test.cpp ../src/mips.cpp ../src/instruction.cpp ../src/utils.cpp
.\test
```