all: tests Conversion

Conversion: Conversion.o
	gcc TablasDeConversion.c Conversion.o -o tablaDeConversion

Conversion.o: Conversion.c
	gcc -c Conversion.c

ConversionTest: Conversion.o
	gcc ConversionTest.c Conversion.o -o test

tests: ConversionTest
	test

clean:
	del /q test.exe Conversion.o tablaDeConversion.exe
