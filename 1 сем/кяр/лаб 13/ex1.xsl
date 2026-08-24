<?xml version="1.0" encoding="UTF-8"?> 
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform"> 
<xsl:template match="body"> 
    <html> 
    <head> 
        <title>Задание 1</title> 
    </head> 
    <body> 
        <h1>Заголовок</h1>
        <table border="1px">
            <tr>
                <th>Номер</th>
                <th>Название</th>
                <th>Информация</th>
            </tr>
            <xsl:for-each select="content">
            <xsl:sort select="num"/>
             <tr>
                <td><xsl:value-of select="num"/></td>
                <td><xsl:value-of select="about"/></td>
                <td><xsl:value-of select="text"/></td>
             </tr>
            </xsl:for-each>
        </table>
    </body> 
    </html> 
</xsl:template> 
</xsl:stylesheet>