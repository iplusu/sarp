NAME=spy-tool
VERSION=1.0-1
ARCH=arm

all: $(NAME)_$(VERSION)_$(ARCH).ipk

$(NAME)_$(VERSION)_$(ARCH).ipk: data-dir
	sh ipkg-build.sh data-dir

data-dir: FORCE
	(cd ..; make)
	./build-data-dir

FORCE:

.phony: FORCE
