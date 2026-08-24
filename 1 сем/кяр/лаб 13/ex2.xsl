<?xml version="1.0" encoding="UTF-8"?> 
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform"> 
<xsl:template match="body"> 
    <html> 
    <head> 
        <title>Задание 2</title> 
    </head> 
    <body> 
        <h1>Аттестация</h1>
        <table border="2px">
            <tr>
                <th>Номер</th>
                <th>ФИ студента</th>
                <th>Оценка</th>
            </tr>
            <xsl:for-each select="student">
            <xsl:sort select="num"/>
             <tr>
                <td><xsl:value-of select="num"/></td>
                <td><xsl:value-of select="name"/></td>
                <xsl:choose>
                    <xsl:when test="value &lt; 4">
                        <td style="background-color:red"><xsl:value-of select="value"/></td>
                    </xsl:when>
                    <xsl:when test="value &gt;= 4 and value &lt;= 8">
                        <td><xsl:value-of select="value"/></td>
                    </xsl:when>
                    <xsl:otherwise>
                        <td style="background-color:green"><xsl:value-of select="value"/></td>
                    </xsl:otherwise>
                </xsl:choose>
             </tr>
            </xsl:for-each>
        </table>
    </body> 
    </html> 
</xsl:template> 
</xsl:stylesheet>