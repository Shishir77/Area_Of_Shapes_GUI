CXXFLAGS = -std=c++11
GTKFLAGS = `/usr/bin/pkg-config gtkmm-3.0 --cflags --libs`

	
ex: shapes.o shape_main.o
	@$(CXX) $(CXXFLAGS) -o shapes shapes.o shape_main.o $(GTKFLAGS)
	@./shapes
shapes.o: shapes.cpp shapes.h
	@$(CXX) $(CXXFLAGS) -c shapes.cpp $(GTKFLAGS)
shape_main.o: shape_main.cpp shapes.h
	@$(CXX) $(CXXFLAGS) -c shape_main.cpp $(GTKFLAGS)
