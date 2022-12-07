class Solution {
    public boolean canBeEqual(int[] target, int[] arr) {
        int[] cnt = new int[1001];
        for(int i=0;i<target.length;i++)
            ++cnt[target[i]];
        for (int i=0;i<arr.length;i++) {
            if (--cnt[arr[i]] < 0) {
                return false;
            }
        }
        return true;
    }
}
