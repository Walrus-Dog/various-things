print("\nEnter the amount of DeLIGHTful cones sold: ")
scoop1Amt = float(input())
print("\nEnter the amount of Double DeLIGHTful cones sold: ")
scoop2Amt = float(input())
print("\nEnter the amount of Triple DeLIGHTful cones sold: ")
scoop3Amt = float(input())

scoop1Total = SCOOP1 = 1.49 * scoop1Amt
scoop2Total = SCOOP2 = 2.49 * scoop2Amt
scoop3Total = SCOOP3 = 3.49 * scoop3Amt

overallTotal = scoop1Amt + scoop2Amt + scoop3Amt
overallTotalAmt = scoop1Total + scoop2Total + scoop3Total

print("\nNumber of single scoop cones sold: " + "{:.0f}".format(scoop1Amt))
print("\nNumber of double scoop cones sold: " + "{:.0f}".format(scoop2Amt))
print("\nNuber of triple scoop cones sold: " + "{:.0f}".format(scoop3Amt))

print("\nDeLIGHTful cones        " + "{: >10}".format("{:.0f}".format(scoop1Amt)) + "{: >4}".format("") + "$" + "{: >7}".format(scoop1Total))
print("\nDouble DeLIGHTful cones " + "{: >10}".format("{:.0f}".format(scoop2Amt)) + "{: >4}".format("") + "$" + "{: >7}".format(scoop2Total))
print("\nTriple DeLIGHTful cones " + "{: >10}".format("{:.0f}".format(scoop3Amt)) + "{: >4}".format("") + "$" + "{: >7}".format(scoop3Total))
print("\nTotal                   " + "{: >10}".format("{:.0f}".format(overallAmt)) + "{: >4}".format("") + "$" + "{: >7}".format(overallTotalAmt))
