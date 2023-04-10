package com.sample.in;

import jakarta.servlet.jsp.JspException;
import jakarta.servlet.jsp.JspWriter;
import jakarta.servlet.jsp.tagext.TagSupport;

public class TagHandler extends TagSupport {

	public int doStartTag() throws JspException{
		
		JspWriter out = pageContext.getOut();
		
		try {
			out.print("<table border='1'>");
			for(int i=1;i<=10;i++)
			{
				out.print("<tr><td>"+i+"</td> <td>"+5+"</td> <td>"+(5*i)+"</td></tr>");
			}

			out.print("</table>");
		}
		catch(Exception e)
		{
		
		}
		
		return SKIP_BODY;
	}
}
