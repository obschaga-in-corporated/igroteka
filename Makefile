all: bin/menu bin/test

build/menu.o: menu.c
	gcc -Wall -Werror -c menu.c -o build/menu.o

build/ygad.o: src/ygad.c
	gcc -Wall -Werror -c src/ygad.c -o build/ygad.o

build/100.o: src/100.c
	gcc -Wall -Werror -c src/100.c -o build/100.o

build/Moneta.o: src/Moneta.c
	gcc -Wall -Werror -c src/Moneta.c -o build/Moneta.o

build/main.o: test/main.c
	gcc -Wall -c test/main.c -o build/main.o -Ithirdparty -Isrc

build/ygad_test.o: test/ygad_test.c 
	gcc -Wall -c test/ygad_test.c -o build/ygad_test.o -Ithirdparty -Isrc

build/100_test.o: test/100_test.c
	gcc -Wall -c test/100_test.c -o build/100_test.o -Ithirdparty -Isrc

build/Moneta_test.o: test/Moneta_test.c
	gcc -Wall -c test/Moneta_test.c -o build/Moneta_test.o -Ithirdparty -Isrc

bin/test: build/ygad_test.o build/100_test.o build/Moneta_test.o build/main.o src/ygad.h src/Moneta.h src/100.h bin/libIgro.so
	gcc -Wall build/ygad_test.o build/100_test.o build/Moneta_test.o build/main.o -fPIC -L./bin -lIgro -o bin/test -Isrc -Ithirdparty -Ibin

test: bin/test
	bin/test	
bin/libIgro.so:  src/ygad.c src/100.c src/Moneta.c src/ygad.h src/100.h src/Moneta.h
	gcc -o bin/libIgro.so -shared -fPIC src/ygad.c src/100.c src/Moneta.c -Isrc

bin/menu: menu.c src/ygad.c src/100.c src/Moneta.c bin/libIgro.so	
	gcc -Wall menu.c -fPIC -L./bin -lIgro -o bin/menu -Isrc -Ibin
	export LD_LIBRARY_PATH=./bin

.PHONY: clean
clean:
	rm -rf build/*.o

