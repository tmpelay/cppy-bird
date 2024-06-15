LDFLAGS = -lsfml-graphics -lsfml-window -lsfml-system

CppyBird:
	g++ -Iinclude -o CppyBird main.cpp src/*.cpp ${LDFLAGS}

clean:
	rm -f CppyBird