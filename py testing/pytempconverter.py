import sys
import logging

inputTemp = str

print("\nEnter the degree type you want to convert!")
print("\n(Celsuis or Fahrenheit)")
inputTemp = input()

if inputTemp == "f" or inputTemp == "F" or inputTemp == "Fahrenheit" or inputTemp == "fahrenheit": 

    print("\nInput the temp in Fahrenheit to convert it to Celsuis!: ")
    fTemp = float(input())

    cTemp = 9.0 / 5.0 * (fTemp - 32)

    print("\nThe conversion from " + str(fTemp) + " degrees F is " + str(cTemp) + " degrees C!" )

elif inputTemp == "c" or inputTemp == "C" or inputTemp == "Celsuis" or inputTemp == "celsuis":
    
    print("\nInput the temp in Celsuis to convert it to Fahrenheit!: ")
    cTemp = float(input())

    fTemp = (9.0 / 5.0) * cTemp + 32.0

    print("\nThe conversion from " + str(cTemp) + " degrees C is " + str(fTemp) + " degrees F!")
else: 
    
    print("\nUh oh, something broke!")
