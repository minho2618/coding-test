CC = g++

$(TARGET): $(OBJECTS)
	$(CC) $(OBJECTS) -o $@

clean:
  rm -f
