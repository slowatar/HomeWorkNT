Action()
{
	int iter;
lr_start_transaction("action_1");
 
//int iter;

	web_set_sockets_option("SSL_VERSION", "AUTO");

	
	web_reg_find("Text=Авторизация", 
		LAST);

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_reg_save_param_regexp(
		"ParamName=act_token",
		"RegExp=act=(.*?);",
		SEARCH_FILTERS,
		"Scope=Cookies",
		"IgnoreRedirections=No",
		"RequestUrl=*/inbox*",
		LAST);

	web_url("light.mail.ru", 
		"URL=https://light.mail.ru/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t139.inf", 
		"Mode=HTML", 
		LAST);

	
	web_add_auto_header("Origin", 
		"https://account.mail.ru");


	lr_start_transaction("LOG_IN");

		web_submit_data("info", 
		"Action=https://auth.mail.ru/api/v1/pushauth/info", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://account.mail.ru/", 
		"Snapshot=t168.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=login", "Value=test_nt_1@mail.ru", ENDITEM, 
		"Name=htmlencoded", "Value=false", ENDITEM, 
		"Name=email", "Value=test_nt_1@mail.ru", ENDITEM, 
		LAST);

			
	web_revert_auto_header("Origin");

	
	web_submit_data("auth",
		"Action=https://auth.mail.ru/cgi-bin/auth",
		"Method=POST",
		"EncodeAtSign=YES",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=https://account.mail.ru/",
		"Snapshot=t174.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=username", "Value=test_nt_1@mail.ru", ENDITEM,
		"Name=Login", "Value=test_nt_1@mail.ru", ENDITEM,
		"Name=password", "Value=F5g784r3", ENDITEM,
		"Name=Password", "Value=F5g784r3", ENDITEM,
		"Name=saveauth", "Value=1", ENDITEM,
		"Name=new_auth_form", "Value=1", ENDITEM,
		"Name=FromAccount", "Value=opener=account&allow_external=1&twoSteps=1", ENDITEM,
		"Name=act_token", "Value={act_token}", ENDITEM,
		"Name=page", "Value=https://light.mail.ru/messages/inbox?authid=kpgj5prz.fko&dwhsplit=s10273.b1s&from=login", ENDITEM,
		"Name=lang", "Value=ru_RU", ENDITEM,
		LAST);

			
	lr_end_transaction("LOG_IN",LR_AUTO);


	lr_start_transaction("CREATE_LETTER");
	

for (iter=0;iter<3;iter++)
{
	web_reg_save_param_attrib(
		"ParamName=form_token",
		"TagName=input",
		"Extract=value",
		"Name=form_token",
		"Type=hidden",
		SEARCH_FILTERS,
		"IgnoreRedirections=No",
		LAST);

/*Correlation comment - Do not change!  Original value='410128643619954147831296167803621882439' Name ='form_sign' Type ='Manual'*/
	web_reg_save_param_attrib(
		"ParamName=form_sign",
		"TagName=input",
		"Extract=value",
		"Name=form_sign",
		"Type=hidden",
		SEARCH_FILTERS,
		"IgnoreRedirections=No",
		LAST);
		

	web_reg_save_param_attrib(
		"ParamName=message",
		"TagName=input",
		"Extract=value",
		"Name=message",
		"Type=hidden",
		SEARCH_FILTERS,
		"IgnoreRedirections=No",
		LAST);

	web_url("compose", 
		"URL=https://light.mail.ru/compose/?folder=0", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://light.mail.ru/messages/inbox?authid=kpgj5prz.fko&dwhsplit=s10273.b1s&from=login", 
		"Snapshot=t191.inf", 
		"Mode=HTML", 
		LAST);

	
	
	GenerateRandomText("MyMessage");
	GenerateTema("Tema");
	
	web_submit_data("compose_2",
		"Action=https://light.mail.ru/compose/",
		"Method=POST",
		"EncType=multipart/form-data",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=https://light.mail.ru/compose/?folder=0",
		"Snapshot=t229.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=form_sign", "Value={form_sign}", ENDITEM,
		"Name=form_token", "Value={form_token}", ENDITEM,
		"Name=message", "Value={message}", ENDITEM,
		"Name=old_charset", "Value=", ENDITEM,
		"Name=draft_msg", "Value=", ENDITEM,
		"Name=text", "Value=", ENDITEM,
		"Name=HTMLMessage", "Value=0", ENDITEM,
		"Name=htmlencoded", "Value=0", ENDITEM,
		"Name=template_id", "Value=", ENDITEM,
		"Name=direction", "Value=re", ENDITEM,
		"Name=orfo", "Value=rus", ENDITEM,
		"Name=formessage", "Value=1", ENDITEM,
		"Name=last_msg_id", "Value=", ENDITEM,
		"Name=sendauto", "Value=0", ENDITEM,
		"Name=draftauto", "Value=0", ENDITEM,
		"Name=as_msg", "Value=", ENDITEM,
		"Name=clickFrom", "Value=", ENDITEM,
		"Name=copy", "Value=yes", ENDITEM,
		"Name=RealName", "Value=0", ENDITEM,
		"Name=attached_ids", "Value=", ENDITEM,
		"Name=send", "Value=Отправить", ENDITEM,
		"Name=To", "Value=test_nt_2@mail.ru", ENDITEM,
		"Name=CC", "Value=", ENDITEM,
		"Name=BCC", "Value=", ENDITEM,
		"Name=Subject", "Value={Tema}", ENDITEM,
		"Name=File", "Value=", "File=yes", ENDITEM,
		"Name=Body", "Value={MyMessage}", ENDITEM,
		"Name=captcha", "Value=", ENDITEM,
		LAST);

}
	lr_end_transaction("CREATE_LETTER",LR_AUTO);

	
	lr_start_transaction("LOG_OUT");
			
	web_url("logout", 
		"URL=https://auth.mail.ru/cgi-bin/logout?page=https%3A%2F%2Fmail.ru%2F%3Ffrom%3Dlogout", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t247.inf", 
		"Mode=HTML", 
		LAST);


		lr_end_transaction("LOG_OUT",LR_AUTO);
		lr_end_transaction("action_1", LR_AUTO);


	return 0;
}