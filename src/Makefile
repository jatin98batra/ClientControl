APP=clientControl
OBJS=main.o
OUTPUT_DIR=../output


$(APP):$(OBJS)
	gcc -o $(APP) $(OBJS)

install:
	mv $(APP) $(OUTPUT_DIR)










.PHONY: clean all

clean: 
	rm -rf $(OBJS)






all: $(APP) install clean 
