class Solution {
public:
    string addBinary(string a, string b) {
    // 1. Convert binary string 'a' to decimal integer
    long long bina = 0;
    long long p = 1;
    for (int i = a.size() - 1; i >= 0; i--) {
        if (a[i] == '1') bina += p;
        p *= 2;
    }

    // 2. Convert binary string 'b' to decimal integer
    long long binb = 0;
    p = 1;
    for (int i = b.size() - 1; i >= 0; i--) {
        if (b[i] == '1') binb += p;
        p *= 2;
    }

    // 3. Add the two decimal numbers
    long long decc = bina + binb;
    if (decc == 0) return "0";

    // 4. Convert the sum back to a binary string
    string binary = "";
    while (decc > 0) {
        binary = to_string(decc % 2) + binary;
        decc /= 2;
    }
    
    return binary;
}
};