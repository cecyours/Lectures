import requests
from bs4 import BeautifulSoup

def news():
	# the target we want to open	
	url='https://www.myscheme.gov.in/schemes/rkvy'	
	#open with GET method
	resp=requests.get(url)
	#http_respone 200 means OK status
	if resp.status_code==200:
		print("Successfully opened the web page")
		print("The news are as follow :-\n")
	
		# we need a parser,Python built-in HTML parser is enough .
		soup=BeautifulSoup(resp.text,'html.parser')	

		# l is the list which contains all the text i.e news
		l=soup.find_all("span",{"data-slate-string":"true"})
		print(l.get_text)
	else:
		print("Error")
		
news()
