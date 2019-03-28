CC     = gcc
WINDRES= windres
RM     = rm -f
OBJS   = main.o \
         AppResource.res

LIBS   =
CFLAGS =

.PHONY: aula11.exe clean clean-after

all: aula11.exe

clean:
	$(RM) $(OBJS) aula11.exe

clean-after:
	$(RM) $(OBJS)

aula11.exe: $(OBJS)
	$(CC) -Wall -s -o $@ $(OBJS) $(LIBS)

main.o: main.c
	$(CC) -Wall -s -c $< -o $@ $(CFLAGS)

AppResource.res: AppResource.rc
	$(WINDRES) -i AppResource.rc -J rc -o AppResource.res -O coff

