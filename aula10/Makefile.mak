CC     = gcc
WINDRES= windres
RM     = rm -f
OBJS   = main.o \
         AppResource.res

LIBS   =
CFLAGS =

.PHONY: aula10.exe clean clean-after

all: aula10.exe

clean:
	$(RM) $(OBJS) aula10.exe

clean-after:
	$(RM) $(OBJS)

aula10.exe: $(OBJS)
	$(CC) -Wall -s -o $@ $(OBJS) $(LIBS)

main.o: main.c
	$(CC) -Wall -s -c $< -o $@ $(CFLAGS)

AppResource.res: AppResource.rc
	$(WINDRES) -i AppResource.rc -J rc -o AppResource.res -O coff

