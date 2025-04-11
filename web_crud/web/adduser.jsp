<%-- 
    Document   : adduser
    Created on : Sep 10, 2024, 1:12:20 PM
    Author     : Administrator
--%>

<%@page contentType="text/html" pageEncoding="UTF-8" import="com.javatpoint.dao.UserDao" %>
<jsp:useBean id="u" class="com.javatpoint.dao.User"></jsp:useBean>
<jsp:setProperty property="*" name="u"/>
<!DOCTYPE html>
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title> JSP Page </title>
    </head>
    <body>
        <% 
            int i = UserDao.save(u);
            if(i>0)
            {
                response.sendRedirect("adduser-success.jsp");
            }
            else
            {
                response.sendRedirect("adduser-error.jsp");
            }
        %>
    </body>
</html>
