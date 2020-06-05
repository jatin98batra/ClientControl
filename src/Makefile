BACKEND=clientControl
COMMANDER=commander

BACKEND_OBJS=main.o
COMMANDER_OBJS=commander.o
OBJS=$(BACKEND_OBJS) $(COMMANDER_OBJS)
OUTPUT_DIR=../output


$(COMMANDER):$(COMMANDER_OBJS)
	gcc -o $(COMMANDER) $(COMMANDER_OBJS)

$(BACKEND):$(BACKEND_OBJS)
	gcc -o $(BACKEND) $(BACKEND_OBJS)

install:
	mv $(BACKEND) $(OUTPUT_DIR)
	mv $(COMMANDER) $(OUTPUT_DIR)










.PHONY: clean all

clean: 
	rm -rf $(OBJS)

all: $(COMMANDER) $(BACKEND) install clean 





