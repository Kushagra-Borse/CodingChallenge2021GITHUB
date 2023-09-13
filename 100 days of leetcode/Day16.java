class Solution {
    public String reverseWords(String s) {
        List<String> li = Arrays.asList(s.split("\\s+"));
        Collections.reverse(li);
        String ans = String.join(" ", li).trim();
        return ans;
    }
}