--Number guessing game but in lua!

print("\n\t\t\tWelcome to the number guessing game!" .. "\nYou will have to guess a number between 1 and 100" .. "\nYou will have limited choices based on the level you choose." .. "\nGoodd luck!")

while true do
    print("\nEnter a difficulty level: \n" .. "1 for easy!\t" .. "2 for medium\t" .. "3 for hard\t" .. "0 to close the program!\t\n")
    
    print("\nChoose your level: ")
    local difficultyLevel = tonumber(io.read())

    local secrectNum = math.random(100)

    --Easy level
    if difficultyLevel == 1 then
        print("\nYou have chosen the easy level!" .. "\nYou have 10 guesses to find the number between 1 - 100")
        local guessesLeft = 10
        for i = 1, 10, 1 do

            print("\nEnter your guess: ")
            local playerChoice = tonumber(io.read())

            if playerChoice == secrectNum then
                print("\nGreat job, you got it! The number was " .. playerChoice .. "\n\t\t\tThanks for playing!\nMake sure to play again!\n\n")
                break
            else 
                print("\nNope! " .. playerChoice .. " is not the right number!")

                if playerChoice > secrectNum then
                    print("\nThe number is less than " .. playerChoice .. ". \nPlease choose again!")
                else
                    print("\nThe number is greater than " .. playerChoice .. ". \nPlease choose again!")
                end

                guessesLeft = guessesLeft - 1

                print("\n" .. guessesLeft .. " guesses left!")

                if guessesLeft == 0 then
                    print("\nYou ran out of guesses and could not find the number!\nThe nubmer was " .. secrectNum .. ".\n You loose!\n\nPlay again and try to win!\n\n")
                end
            end
        end

    else if difficultyLevel == 2 then
        print("\nYou have chosen the medium level!" .. "\nYou have 7 guesses to find the number between 1 - 100")
        local guessesLeft = 7
        for i = 1, 7, 1 do

            print("\nEnter your guess: ")
            local playerChoice = tonumber(io.read())

            if playerChoice == secrectNum then
                print("\nGreat job, you got it! The number was " .. playerChoice .. "\n\t\t\tThanks for playing!\nMake sure to play again!\n\n")
                break
            else 
                print("\nNope! " .. playerChoice .. " is not the right number!")

                if playerChoice > secrectNum then
                    print("\nThe number is less than " .. playerChoice .. ". \nPlease choose again!")
                else
                    print("\nThe number is greater than " .. playerChoice .. ". \nPlease choose again!")
                end

                guessesLeft = guessesLeft - 1

                print("\n" .. guessesLeft .. " guesses left!")

                if guessesLeft == 0 then
                    print("\nYou ran out of guesses and could not find the number!\nThe nubmer was " .. secrectNum .. ".\n You loose!\n\nPlay again and try to win!\n\n")
                end
            end
        end
    else if difficultyLevel == 3 then
        print("\nYou have chosen the hard level!" .. "\nYou have 5 guesses to find the number between 1 - 100")
        local guessesLeft = 5
        for i = 1, 5, 1 do

            print("\nEnter your guess: ")
            local playerChoice = tonumber(io.read())

            if playerChoice == secrectNum then
                print("\nGreat job, you got it! The number was " .. playerChoice .. "\n\t\t\tThanks for playing!\nMake sure to play again!\n\n")
                break
            else 
                print("\nNope! " .. playerChoice .. " is not the right number!")

                if playerChoice > secrectNum then
                    print("\nThe number is less than " .. playerChoice .. ". \nPlease choose again!")
                else
                    print("\nThe number is greater than " .. playerChoice .. ". \nPlease choose again!")
                end

                guessesLeft = guessesLeft - 1

                print("\n" .. guessesLeft .. " guesses left!")

                if guessesLeft == 0 then
                    print("\nYou ran out of guesses and could not find the number!\nThe nubmer was " .. secrectNum .. ".\n You loose!\n\nPlay again and try to win!\n\n")
                end
            end
        end
    else if difficultyLevel == 0 then
        os.exit()
    else
        print("\nOops! You did not enter a correct number.\nPlease enter 1, 2 or 3 to start the game.")
    end
    end
    end
    end
end