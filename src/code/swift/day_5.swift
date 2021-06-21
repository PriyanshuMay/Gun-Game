import Foundation



guard let n = Int((readLine()?.trimmingCharacters(in: .whitespacesAndNewlines))!)
else { fatalError("Bad input") }

var i = 1
while i<=10 {
    print("\(n) x \(i) = \(n*i)")
    i += 1
}