// compound operators let us update a variable with a short single statement

int value {45};

value += 5;   // value is now 50   (same as value = value + 5)
value -= 5;   // value is now 45   (same as value = value - 5)
value *= 2;   // value is now 90   (same as value = value * 2)
value /= 3;   // value is now 30   (same as value = value / 3)
value %= 11;  // value is now 8    (same as value = value % 11)

// each line uses the result of the previous line as the new value.
// works the same way for +=, -=, *=, /=, %=
