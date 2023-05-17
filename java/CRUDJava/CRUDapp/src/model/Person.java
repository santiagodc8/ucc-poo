package model;

public class Person {

    private int id;
    private String name;
    private String phone;
    private String identification;


    public Person(){}

    public Person(int id, String name, String phone, String identification){

        this.id=id;
        this.name = name;
        this.phone = phone;
        this.identification = identification;

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

    public String getPhone() {
        return phone;
    }

    public void setPhone(String phone) {
        this.phone = phone;
    }

    public String getIdentification() {
        return identification;
    }

    public void setIdentification(String identification) {
        this.identification = identification;
    }


}