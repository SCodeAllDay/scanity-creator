.PHONY: all creator client_ pb clean

all:
	make creator

creator:
	mkdir -p ../output/mods
	$(MAKE) -C build

client_:
	cd .. && make client_


clean:
	rm -r build

pb:
	mkdir -p build
	cd build && cmake -S .. -B . -G "Unix Makefiles"
