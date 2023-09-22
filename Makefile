all: build

build:
	qmake -makefile -o qmakefile ./src/chess.pro
	make -f qmakefile

doxygen:
	@doxygen src/doxy.config
	
run: build
	./chess