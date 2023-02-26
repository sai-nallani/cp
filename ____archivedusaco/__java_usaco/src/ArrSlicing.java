import java.util.Arrays;

public class ArrSlicing {
    public static int[] getSlice(int[] arr, int start, int end) {
        int[] slicedArr = new int[end - start];
        System.arraycopy(arr, start, slicedArr, 0, slicedArr.length);
        return slicedArr;
    }

    public static void main(String[] args) {
        int[] arr = new int[]{1, 2, 3, 4, 5, 6}; // End = 5; Start = 2 (End is excluded) [3,4,5]
        arr = getSlice(arr, 2, 5);
        System.out.println(Arrays.toString(arr));
    }
}
