import Foundation
import Darwin

let numStrings = Int(readLine()!)!

func printEvenAndOdd(string: String) {
    // This prints inputString to stderr for debugging:
    fputs("string: " + string + "\n", stderr)
	let charArray = Array(string)
    // Print the even-indexed characters
    // Write your code here
    var newStr = ""
        var newStr2 = ""
        var i: Int = 0
        while i < charArray.count {
            newStr = newStr+String(charArray[i])
            if i < charArray.count-1 {
                newStr2 = newStr2+String(charArray[i+1])
            }
            i += 2
        }
    // Print a space
    print(newStr + " " + newStr2)
   // print(" ",terminator: "")
	
    // Print the odd-indexed characters
    // Write your code here
    
    // Print a newline
   // print(newStr2)
}

for _ in 1...numStrings {
    let inputString = readLine()!
    printEvenAndOdd(string: inputString)
}