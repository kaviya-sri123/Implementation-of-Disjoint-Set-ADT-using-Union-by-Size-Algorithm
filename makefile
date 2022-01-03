a.exe:set_app.o set_imp.o
	c++ set_app.o set_imp.o -o a.exe
set_app.o:set_app.cpp
	c++ -c set_app.cpp
set_imp.o:set_imp.cpp
	c++ -c set_imp.cpp