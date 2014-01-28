SRC = $(wildcard *.java)
JAVA = $(SRC)
CLASSES = $(JAVA:.java=.class)

all: taskserver $(JAVA) $(CLASSES)

# general rule for java files
%.class: %.java
	javac $<

taskserver:
	make -C ../tasksvr

clean:
	rm -rf *.class
	make -C ../tasksvr clean
