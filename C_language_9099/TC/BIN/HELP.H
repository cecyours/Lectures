void display()
{
	textattr(19);
	cprintf("Hello World\n\r");
}
void display_name(char name[100])
{
       textattr(131);
       cprintf("Hello %s %c\n\r",name,3);
}