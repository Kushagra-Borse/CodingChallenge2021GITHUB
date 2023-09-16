class Solution {
    public int compress(char[] chars) {
        int write_index = 0;
        int i = 0;
        
        while (i < chars.length) {
            char currentChar = chars[i];
            int count = 0;
            
            while (i < chars.length && chars[i] == currentChar) {
                i++;
                count++;
            }
            
            chars[write_index++] = currentChar;
            
            if (count > 1) {
                for (char digit : String.valueOf(count).toCharArray()) {
                    chars[write_index++] = digit;
                }
            }
        }
        
        return write_index;
    }
}
