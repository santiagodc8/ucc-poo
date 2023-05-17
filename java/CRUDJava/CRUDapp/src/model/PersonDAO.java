package model;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.util.ArrayList;

public class PersonDAO {

    private PreparedStatement pst;
    private ResultSet rs;
    
    public boolean addPerson (Person person){

        boolean state = false;
        Connection connect = null;

        try{

            connect = ConnectionPool.getInstance().getConnection();

            if(connect != null){

                String sql = "INSERT INTO persona (name, phone, identification state) VALUES (?,?,?,?)";

                pst = connect.prepareStatement(sql);

                pst.setString(1, person.getName());
                pst.setString(2, person.getPhone());
                pst.setString(3, person.getIdentification());
                pst.setInt(4, 1);

                int res = pst.executeUpdate();

                state = res > 0;

            }else{
                System.out.println("Conexión Fallida");
            }


        }catch(Exception ex){

            System.out.println(ex.getMessage());
        
        }finally{
            try {
                ConnectionPool.getInstance().closeConnection(connect);
            } catch (Exception e) {
                System.out.println(e.getMessage());
            }
        }


        return state;
    }

    public ArrayList<Person> selectPerson(String filter, ArrayList<String> data){

        ArrayList<Person> list = new ArrayList<>();
        Person person;

        Connection connect = null;

        try{

            connect = ConnectionPool.getInstance().getConnection();

            if(connect != null){

                String sql="";

                switch (filter) {
                    
                    case "Name":  
                        sql = "SELECT * FROM persona WHERE name REGEXP ? AND state=1";
                        pst = connect.prepareStatement(sql);
                        pst.setString(1, data.get(0));
                        pst.setString(2, data.get(0));                                             
                    break;
                
                    case "Phone":                        
                        sql = "SELECT * FROM persona WHERE phone=? AND state=1";
                        pst = connect.prepareStatement(sql);
                        pst.setString(1, data.get(0));
                        pst.setInt(2, Integer.parseInt(data.get(1)));                                             
                    break;

                    default:
                        sql = "SELECT * FROM persona WHERE 1 AND state=1";
                        pst = connect.prepareStatement(sql);                    
                    break;

                }

                rs = pst.executeQuery();

                while(rs.next()){

                    person = new Person();
                    
                    person.setId(rs.getInt("id"));
                    person.setName(rs.getString("name"));
                    person.setPhone(rs.getString("phone"));
                    person.setIdentification(rs.getString("identification"));

                    list.add(person);

                }


            }else{
                System.out.println("Conexión Fallida");
            }


        }catch(Exception ex){

            System.out.println(ex.getMessage());
        
        }finally{
            try {
                ConnectionPool.getInstance().closeConnection(connect);
            } catch (Exception e) {
                System.out.println(e.getMessage());
            }
        }        


        return list;

    }

    public boolean updatePerson(Person person){

        boolean state = false;
        Connection connect = null;

        try{

            connect = ConnectionPool.getInstance().getConnection();

            if(connect != null){

                String sql = "UPDATE persona SET name=?, phone=?, identification=? WHERE id=?";

                pst = connect.prepareStatement(sql);
                pst.setString(1, person.getName());
                pst.setString(2, person.getPhone());
                pst.setString(3, person.getIdentification());
                pst.setInt(4, person.getId());

                int res = pst.executeUpdate();

                state = res > 0;

            }else{
                System.out.println("Conexión Fallida");
            }


        }catch(Exception ex){

            System.out.println(ex.getMessage());
        
        }finally{
            try {
                ConnectionPool.getInstance().closeConnection(connect);
            } catch (Exception e) {
                System.out.println(e.getMessage());
            }
        }


        return state;


    }

    public boolean deletePerson(int id){

        boolean state = false;
        Connection connect = null;

        try{

            connect = ConnectionPool.getInstance().getConnection();

            if(connect != null){

                //String sql = "DELETE FROM persona WHERE id=?";

                String sql = "UPDATE persona SET state=? WHERE id=?";

                pst = connect.prepareStatement(sql);
                pst.setInt(1, 0);
                pst.setInt(2, id);

                int res = pst.executeUpdate();

                state = res > 0;

            }else{
                System.out.println("Conexión Fallida");
            }


        }catch(Exception ex){

            System.out.println(ex.getMessage());
        
        }finally{
            try {
                ConnectionPool.getInstance().closeConnection(connect);
            } catch (Exception e) {
                System.out.println(e.getMessage());
            }
        }


        return state;


    }

    

}