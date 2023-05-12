package model;

import java.sql.Connection;
import java.sql.PreparedStatement;

public class PersonDAO {

    private PreparedStatement pst;

    public boolean addPerson(Person person) {

        boolean state = false;
        Connection connect = null;

        try {

            connect = ConnectionPool.getInstance().getConnection();

            if (connect != null) {

                String sql = "INSERT INTO persona (name, last_name, number_phone) VALUES (?,?,?)";

                pst = connect.prepareStatement(sql);

                pst.setString(1, person.getName());
                pst.setString(2, person.getLastName());
                pst.setString(3, person.getNumberPhone());

                int res = pst.executeUpdate();

                state = res > 0;

            } else {
                System.out.println("Conexion Fallida");
            }

        } catch (Exception ex) {
            System.out.println(ex.getMessage());

        } finally {
            try {
                ConnectionPool.getInstance().closeConnection(connect);
            } catch (Exception e) {
                System.out.println(e.getMessage());
            }
        }
        return state;
    }

}
