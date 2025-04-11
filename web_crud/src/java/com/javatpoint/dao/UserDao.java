/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.javatpoint.dao;
import java.sql.*;
import java.util.AbstractList;
import java.util.List;
import com.javatpoint.dao.User;
/**
 *
 * @author Administrator
 */
public class UserDao {
    
    
    public static Connection getConnection()
    {
        Connection con = null;
        
        try
        {
            Class.forName("com.mysql.cj.jdbc.Driver");
            con = DriverManager.getConnection("jdbc:mysql://localhost:3306/vijay","root","");
                 
        }
        catch(Exception e)
        {
            System.out.print(e);
        }
        return con;
    }
    
    public static int save(User u)
    {
        int status = 0;
        try
        {
            Connection con = getConnection();
            PreparedStatement ps = con.prepareStatement("insert into user (name,password,email,sex,country) values (?,?,?,?,?)");
            ps.setString(1, u.getName());
            ps.setString(2, u.getPassword());
            ps.setString(3, u.getEmail());
            ps.setString(4, u.getSex());
            ps.setString(5, u.getCountry());
                
            status = ps.executeUpdate();
        }
        catch(Exception e)
        {
            System.out.println(e);
        }
        return status;
    }
    
    
}
