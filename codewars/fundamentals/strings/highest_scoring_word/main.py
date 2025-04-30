#!/usr/bin/python3


def high(x):
    # Code here
    import string

    letter_scores = {letter: index + 1 for index, letter in enumerate(string.ascii_lowercase)}

    words = x.split()
    max_word = ""
    max_score = 0

    for word in words:
        current_score = sum(letter_scores[letter] for letter in word)
        if current_score > max_score:
            max_score = current_score
            max_word = word

    return max_word


if __name__ == "__main__":
    print(high("man i need a taxi up to ubud"))  # taxi
