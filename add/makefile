obj = main.o add.o  
target = a.out  
$(target): $(obj)
	$(CXX) $(obj) -o $(target) 
%.o: %.c
	$(CXX) -c $< -o $@
