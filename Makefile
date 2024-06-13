LDFLAGS = -lsfml-graphics -lsfml-window -lsfml-system

CppyBird:
	g++ -Iinclude -Iinclude/headers -o CppyBird src/*.cpp ${LDFLAGS}

clean:
	rm -f CppyBird