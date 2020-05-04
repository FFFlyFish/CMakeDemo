// 导出函数声明，若没有这个声明，外部无法调用dll内部的函数，并且不会生成lib符号文件
__declspec(dllexport) int sub(int a, int b);
// 本示例中是C++调用C++编写的dll，因此没有加extern "C"