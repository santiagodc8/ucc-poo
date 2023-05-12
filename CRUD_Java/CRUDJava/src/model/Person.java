package model;

public class Person {

    private int id;
    private String name;
    private String lastName;
    private String numberPhone;

    public Person(){}

    public Person(int id, String name, String lastName, String numberPhone) {
        this.id = id;
        this.name = name;
        this.lastName = lastName;
        this.numberPhone = numberPhone;
    }

    public int getId() {
        return id;
    }

    public void setId(int id) {
        this.id = id;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getLastName() {
        return lastName;
    }

    public void setLastName(String lastName) {
        this.lastName = lastName;
    }

    public String getNumberPhone() {
        return numberPhone;
    }

    public void setNumberPhone(String numberPhone) {
        this.numberPhone = numberPhone;
    }

    
}
