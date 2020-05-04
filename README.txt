这个demo是介绍如何使用CMakelists来组织工程结构。参照本示例，您可以快速的组织自己的工程项目。

1、目录结构
这是一个多目录结构的示例。目录结构如下：
|
|----addlib
       |------CMakeLists.txt
       |------addlib.h
       |------addlib.cpp
|----subdll
       |------CMakeLists.txt
       |------subdll.h
       |------subdll.cpp
 |----main
       |------CMakeLists.txt
       |------main.cpp
       |------func
        		|------func.h
        		|------func.cpp
 |----CMakeLists.txt
 |
 |----README.txt
 
 2、build
 （1）、windows：windows平台推荐使用visual studio 2010作为编辑和调试器。
		（a）、打开Visual Studio Command Prompt(2010) 命令行终端。
		（b）、通过cd命令进入本示例所在的根目录。例如：cd C:\CMakeDemo
		（c）、在该目录下创建build目录，并进入build目录。依次执行命令：mkdir build；cd build
		（d）、执行命令：cmake -G"Visual Studio 10" ../
		（e）、在build目录下，会生成vs2010的解决方案。 若要编译此解决方案，继续执行：msbuild CMakeDemo.sln /m
	
 