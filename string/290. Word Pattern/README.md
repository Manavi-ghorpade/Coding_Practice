### Intuition:
The problem asks to check if a given pattern matches a string. For a pattern to match a string, each character in the pattern must correspond to a unique word in the string and vice versa. If a character in the pattern corresponds to the same word as another character or if two different characters correspond to the same word, the pattern doesn't match the string.

### Approach:
1. **Splitting the String**: First, we split the input string `s` into individual words. This is done using the `split` function.
2. **Mapping Characters to Words and Words to Characters**: We then iterate through each character in the pattern and the corresponding word in the split string.
    - We use two unordered maps (`mp1` and `mp2`) to maintain the mappings:
        - `mp1`: Maps pattern characters to words.
        - `mp2`: Maps words to pattern characters.
3. **Checking Mappings**: During the iteration, we check if the current character in the pattern has been mapped to a word before. If not, we add the mapping to `mp1`. Similarly, we check if the current word has been mapped to a character before. If not, we add the mapping to `mp2`.
4. **Validity Check**: At each step, we check if the mappings are consistent. If any inconsistency is found, we return `false`. Otherwise, we return `true` after iterating through all characters in the pattern and words in the string.

### Complexity Analysis:
- **Time Complexity**: Let `n` be the length of the pattern and `m` be the number of words in the string. The time complexity is O(n + m) because we iterate through each character in the pattern and each word in the string once.
- **Space Complexity**: The space complexity is O(n + m) as well. We use additional space to store the mappings in `mp1` and `mp2`, which can grow linearly with the size of the input.
