package database_jstl;

import jakarta.servlet.jsp.JspException;
import jakarta.servlet.jsp.JspWriter;
import jakarta.servlet.jsp.PageContext;
import jakarta.servlet.jsp.tagext.TagSupport;

public class StudentHandlerJSP extends TagSupport {
	
	public int doStartTag() throws JspException{
		
		JspWriter out = pageContext.getOut();
		
		try 
		{
			out.print("<h1>I am !you</h1>");
		}
		catch(Exception e)
		{
			
		}
//		TODO : code
		return SKIP_BODY;
	}
}
