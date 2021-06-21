import Foundation



guard let N = Int((readLine()?.trimmingCharacters(in: .whitespacesAndNewlines))!)
else { fatalError("Bad input") }
let isEven = N%2 == 0 ? true : false
        
 if !isEven || (N >= 6 && N <= 20) {
    print("Weird")
} else {
    if (N >= 2 && N <= 5) || N > 20 {
         print("Not Weird")
    }
}