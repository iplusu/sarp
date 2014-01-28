SRC = $(wildcard *.java)
JAVA = $(SRC)
CLASSES = $(JAVA:.java=.class)

all: taskapi $(JAVA) $(CLASSES)

# general rule for java files
%.class: %.java
	javac $<

taskapi:
	make -C ../taskapi

clean:
	rm -rf *.class
	make -C ../taskapi clean
