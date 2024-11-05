--Temp converter in lua for some reason

print("Enter a temperature. If it is in F it will convert to C.\nIf it is in C it will convert to F\nEnter the type of degrees: ")
local input = io.read()

if input == "f" or input == "F" then
    print("\nInput the temp in Fahrenheit: ")
    local fTemp = io.read()
    local cTemp = 9.0 / 5.0 * (fTemp - 32.0)

    print("The conversion from " .. fTemp .. " degrees F is " .. cTemp .. " degrees C!")

elseif input == "c" or input == "C" then
    print("\nInput the temp in Celsius: ")
    local cTemp = io.read()
    local fTemp = (9.0 / 5.0) * cTemp + 32.0

    print("The conversion from " .. cTemp .. " degrees C is " .. fTemp .. " degrees F!")

else
    print("\nSomething went wrong!")
end
