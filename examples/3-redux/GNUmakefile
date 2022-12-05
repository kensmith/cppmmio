main.S: main.o; arm-none-eabi-objdump -S main.o > main.S

.INTERMEDIATE: main.o
main.o: main.cpp tests-passed; arm-none-eabi-g++ -mthumb -mno-thumb-interwork -nostartfiles -std=c++11 -mcpu=cortex-m3 -fno-rtti -fno-exceptions -g -Og -I . -MMD -std=c++11 main.cpp -c -o main.o

tests-passed: tests; ./tests

tests: tests.o; g++ -std=c++11 -g -Og $< -o $@

tests.o: tests.cpp; g++ -c -std=c++11 -g -Og $< -o $@

.PHONY: clean
clean:;rm -f *.o tests

-include $(wildcard *.d)
