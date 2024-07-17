public class Main {
  public static void main(String[] args) {
    // 예시 출력
    System.out.println("콘솔이 .");
    System.out.println("콘솔이 .");
    System.out.println("콘솔이 .");

    // 콘솔 화면을 지우고 커서를 홈 위치로 이동시키는 ANSI escape 코드
    clearConsole();

    // 새로운 메시지 출력
    System.out.println("콘솔이 지워졌습니다.");
  }

  public static void clearConsole() {
    // ANSI escape 코드를 사용하여 콘솔을 지움
    System.out.print("\033[H\033[2J");
    System.out.flush();
  }
}
