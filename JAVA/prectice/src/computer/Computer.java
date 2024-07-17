package computer;

public interface Computer {
  public abstract void compute();

  default void touch(){}
}
