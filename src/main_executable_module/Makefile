all: main

main: main_executable_module.o main_sort.o data_io.o data_stat.o data_process.o decision.o
	gcc -Wall -Wextra -Werror -o ../../build/Quest_3 ../../build/main_executable_module.o ../../build/main_sort.o ../../build/data_io.o ../../build/data_stat.o ../../build/data_process.o ../../build/decision.o

main_executable_module.o:
	gcc -Wall -Wextra -Werror -c -o ../../build/main_executable_module.o main_executable_module.c

main_sort.o:
	gcc -Wall -Wextra -Werror -c -o ../../build/main_sort.o main_sort.c

data_io.o:
	gcc -Wall -Wextra -Werror -c -o ../../build/data_io.o ../data_libs/data_io.c

data_stat.o:
	gcc -Wall -Wextra -Werror -c -o ../../build/data_stat.o ../data_libs/data_stat.c

data_process.o:
	gcc -Wall -Wextra -Werror -c -o ../../build/data_process.o ../data_module/data_process.c

decision.o:
	gcc -Wall -Wextra -Werror -c -o ../../build/decision.o ../yet_another_decision_module/decision.c

clean:
	rm -rf *.o ../../build/*

rebuild: clean all

data_stat.a: data_stat.o
	ar rc ../../build/libdata_stat.a ../../build/data_stat.o
	ranlib ../../build/libdata_stat.a

build_with_static: main_executable_module.o main_sort.o data_io.o data_process.o decision.o data_stat.a
	gcc -Wall -Wextra -Werror -o ../../build/Quest_5 ../../build/main_executable_module.o ../../build/main_sort.o ../../build/data_io.o ../../build/data_process.o ../../build/decision.o -L../../build -ldata_stat

data_process.so: data_process.o data_stat.o
	gcc -shared -o ../../build/libdata_process.so ../../build/data_process.o ../../build/data_stat.o

build_with_dynamic: main_executable_module.o main_sort.o data_io.o data_stat.o decision.o data_process.so
	gcc -Wall -Wextra -Werror -o ../../build/Quest_6 ../../build/main_executable_module.o ../../build/main_sort.o ../../build/data_io.o ../../build/data_stat.o ../../build/decision.o -L../../build -ldata_process -Wl,-rpath,.