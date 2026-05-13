class Solution {
    public boolean canConstruct(String ransomNote, String magazine) {
        //Tạo bảng đếm
        int[] count = new int[26];
        char[] magArr = magazine.toCharArray();
        char[] ransomArr = ransomNote.toCharArray();

        //Duyệt từng chữ trong chuỗi magazine sau đó tăng 
        //biến đếm cho từng ký tự tương ứng lên 1
        for (int i = 0; i < magArr.length; i++) {
            char c = magArr[i];
            count[c - 'a']++;
        }

        //Kiểm tra từng chữ trong ransomNote
        for (int j = 0; j < ransomArr.length; j++) {
            char c = ransomArr[j];
            count[c - 'a']--;
            if (count[c - 'a'] < 0) {
                return false;
            }
        }

        return true;
    }
}