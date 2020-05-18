public class Main{
  public static void main(String args[]){
    // printと違い、一つ一つ改行していく
    System.out.println(2 * 15);
    int num = 5;
    String str = "Java";
    // print formatという意味で、変数をprint
    System.out.printf("%d分で%sで文字列を出力", num, str);
  }
}