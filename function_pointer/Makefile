main: main.bc
	emcc main.bc -o main.html

main.bc:
	emcc main.c -o main.bc

clean:
	rm -rf *.bc *.js *.html *.data
