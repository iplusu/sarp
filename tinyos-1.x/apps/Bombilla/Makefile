COMPONENT=MateTopLevel
CFLAGS=-I/root/src/tinyos-1.x/tos/lib/VM/opcodes -I/root/src/tinyos-1.x/tos/lib/VM/contexts -I/root/src/tinyos-1.x/tos/lib/VM/languages -I/root/src/tinyos-1.x/tos/sensorboards/micasb  -I%T/lib/VM/components -I%T/lib/VM/opcodes -I%T/lib/VM/contexts -I%T/lib/VM/types -I%T/lib/VM/interfaces -I%T/lib/Queue -I%T/lib/VM/route -I.
MSG_SIZE=36
BUILD_EXTRA_DEPS=BombillaConstants.class CapsuleChunkMsg.class CapsuleStatusMsg.class CapsuleMsg.class

include ../Makerules

BombillaConstants.java:
	mkdir -p vm_specific
	MSG_SIZE=36 ncg java $(CFLAGS) -java-classname=vm_specific.BombillaConstants MateTopLevel.nc MateConstants.h -o vm_specific/$@ -DTOSH_DATA_LENGTH=36

CapsuleMsg.java:
	mkdir -p vm_specific
	mig java $(CFLAGS) -java-classname=vm_specific.CapsuleMsg ../../tos/lib/VM/types/Mate.h MateCapsuleMsg -o vm_specific/$@ -DTOSH_DATA_LENGTH=36

CapsuleChunkMsg.java:
	mkdir -p vm_specific
	mig java $(CFLAGS) -java-classname=vm_specific.CapsuleChunkMsg ../../tos/lib/VM/types/Mate.h MateCapsuleChunkMsg -o vm_specific/$@ -DTOSH_DATA_LENGTH=36

CapsuleStatusMsg.java:
	mkdir -p vm_specific
	mig java $(CFLAGS) -java-classname=vm_specific.CapsuleStatusMsg ../../tos/lib/VM/types/Mate.h MateCapsuleStatusMsg -o vm_specific/$@ -DTOSH_DATA_LENGTH=36

%.class: %.java
	javac $<

BombillaConstants.class: BombillaConstants.java
	javac vm_specific/$<

CapsuleMsg.class: CapsuleMsg.java
	javac vm_specific/$<

CapsuleChunkMsg.class: CapsuleChunkMsg.java
	javac vm_specific/$<

CapsuleStatusMsg.class: CapsuleStatusMsg.java
	javac vm_specific/$<

cleanmig:
	rm -f BombillaConstants.*

clean: cleanmig
	rm -rf build/ vm_specific/
	rm -f core.* *.class *.java
	rm -f *~
