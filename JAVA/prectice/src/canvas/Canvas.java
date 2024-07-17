package canvas;

public class Canvas {
  Pen tool;

  public Canvas(){}

  public Canvas(Pen tool){
    this.tool = tool;
  }
  public void setPen(Pen tool){
    this.tool = tool;
  }
  public void render(String contents){
    tool.write(contents);
  }

}
