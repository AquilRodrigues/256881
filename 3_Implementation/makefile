PROJECT_NAME = MOTOR.exe

SRC = motor.c\
src\shunt.c\
src\induction.c

INC = inc 

$(PROJECT_NAME) : $(SRC)
	gcc -I $(INC) $(SRC) -o MOTOR.exe

run : $(PROJECT_NAME)
	$(PROJECT_NAME)

clean : 
	del /q*.exe