clean:
	rm -f a.out

build: clean
	g++ readme.cpp
