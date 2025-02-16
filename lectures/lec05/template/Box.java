// type-safe reusable code
public class Box<T> {   // 'T' is a type parameter
    private T content;

    public void setContent(T content) {
        this.content = content;
    }

    public T getContent() {
        return content;
    }

    public static void main(String[] args) {
        Box<String> stringBox = new Box<>();
        stringBox.setContent("Hello Generics");
        System.out.println(stringBox.getContent());

        Box<Integer> intBox = new Box<>();
        intBox.setContent(123);
        System.out.println(intBox.getContent());
    }
}
a
