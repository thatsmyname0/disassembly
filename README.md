# disassembly

## 结构
只有src是需要的代码, 其他的在整合时都要抛弃

## 进度
+ 完成了个人部分, 待整合. 
+ 测试写了对自己指令的简单测试, 在build目录中执行以下命令即可启动测试
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
+ 突然发现没有对immediate为负数时的处理, 如果汇编组写了针对负数的处理的话我就再补充上吧