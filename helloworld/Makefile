helloworld: helloworld.bc helloworld_sdl.bc helloworld_file.bc
	emcc helloworld.bc -o helloworld.js
	emcc helloworld.bc -o helloworld.html
	emcc helloworld_sdl.bc -o helloworld_sdl.html
	emcc helloworld_file.bc -o helloworld_file.html --preload-file helloworld_file.txt

helloworld.bc:
	emcc helloworld.c -o helloworld.bc

helloworld_sdl.bc:
	emcc helloworld_sdl.cpp -o helloworld_sdl.bc

helloworld_file.bc:
	emcc helloworld_file.cpp -o helloworld_file.bc

clean:
	rm -rf *.bc *.js *.html *.data
