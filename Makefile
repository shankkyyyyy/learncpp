target := build 
compile := g++ 
flags := -Wextra 

all: make_file 
	$(compile) day2.o $(flags) -o $(target)

make_file:
	$(compile) -c day2.cpp -o day2.o $(flags)	

clean:
	rm day2.o 