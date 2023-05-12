#include "main.h"
//-------------------------------------------------------------

using namespace std;

int main() {
	LinuxForm* lin_form = new LinuxForm(700, 600, "Форма на основе GTK3 для Linux и Windows");

	DialogF* dlg = new DialogF();

	NameMenu* name_menu_file = lin_form->add_name_menu("Файл");
	name_menu_file->add_name_sub_menu("open", dlg, NULL);
	name_menu_file->add_name_sub_menu("exit", NULL, NULL);

	NameMenu* name_menu_file1 = lin_form->add_name_menu("Setup");
	name_menu_file1->add_name_sub_menu("Com Port", NULL, NULL);

	T_Tab* tab_cntr = lin_form->add_tab();
	Page_Tab* page = tab_cntr->add_page("Page1", 50, 50);

	page->color = clAquan; 

	page->add_button("test button2", 50, 300, NULL, NULL);

	Page_Tab* page1 = tab_cntr->add_page("Page2", 50, 50);
	TextEdit* txed = page1->add_text_edit("test Русский 2", 200, 300);
	page1->add_button("test button2", 50, 100, dlg, txed);
	page1->color = clRed;

	lin_form->open_linux_form();
	return 0;
}



