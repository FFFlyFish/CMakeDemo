���demo�ǽ������ʹ��CMakelists����֯���̽ṹ�����ձ�ʾ���������Կ��ٵ���֯�Լ��Ĺ�����Ŀ��

1��Ŀ¼�ṹ
����һ����Ŀ¼�ṹ��ʾ����Ŀ¼�ṹ���£�
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
 
 2��build
 ��1����windows��windowsƽ̨�Ƽ�ʹ��visual studio 2010��Ϊ�༭�͵�������
		��a������Visual Studio Command Prompt(2010) �������նˡ�
		��b����ͨ��cd������뱾ʾ�����ڵĸ�Ŀ¼�����磺cd C:\CMakeDemo
		��c�����ڸ�Ŀ¼�´���buildĿ¼��������buildĿ¼������ִ�����mkdir build��cd build
		��d����ִ�����cmake -G"Visual Studio 10" ../
		��e������buildĿ¼�£�������vs2010�Ľ�������� ��Ҫ����˽������������ִ�У�msbuild CMakeDemo.sln /m
	
 