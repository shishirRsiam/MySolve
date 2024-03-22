def is_palindrome(seq):
    return seq == seq[::-1]

def is_kalindrome(sequence):
    for i in range(len(sequence)):
        removed_element_sequence = sequence[:i] + sequence[i+1:]
        if is_palindrome(removed_element_sequence):
            return True
    return False

# Function to process each test case
def process_test_case():
    n = int(input())  # Number of elements in the sequence
    sequence = list(map(int, input().split()))  # Sequence of elements
    if is_kalindrome(sequence):
        print("YES")
    else:
        print("NO")

# Number of test cases
t = int(input())

# Process each test case
for _ in range(t):
    process_test_case()
