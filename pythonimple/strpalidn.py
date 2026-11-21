

def check_palindrome(s):
    # If the string length is 1, it is a palindrome
    if len(s) == 1:
        return True

    n = len(s)

    # Loop to check characters from both ends
    for i in range(n):
        if s[i] != s[n - i - 1]:
            return False

    return True


if __name__ == "__main__":
    # Input string from user
    s = input("Enter a string: ")

    # Check if the string is a palindrome
    if check_palindrome(s):
        print("String is a palindrome")
    else:
        print("String is not a palindrome")
