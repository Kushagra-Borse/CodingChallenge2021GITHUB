class Solution:
    def compress(self, chars):
        if len(chars) <= 1:
            return len(chars)
        
        writeIndex = 0
        currentChar = chars[0]
        count = 1
        
        for i in range(1, len(chars)):
            if chars[i] == currentChar:
                count += 1
            else:
                chars[writeIndex] = currentChar
                writeIndex += 1
                if count > 1:
                    countStr = str(count)
                    for digit in countStr:
                        chars[writeIndex] = digit
                        writeIndex += 1
                
                currentChar = chars[i]
                count = 1
        
        chars[writeIndex] = currentChar
        writeIndex += 1
        if count > 1:
            countStr = str(count)
            for digit in countStr:
                chars[writeIndex] = digit
                writeIndex += 1
        
        return writeIndex
