CC = g++
TARGET_MAIN = bin/executavel
TARGET_TEST = bin/testeRegressivo.exe

all: $(TARGET_MAIN)

$(TARGET_MAIN): src/main.cpp
	$(CC) src/main.cpp -o $(TARGET_MAIN)
