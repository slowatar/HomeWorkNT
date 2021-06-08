Action()
{

	int Id_count,selectedParam;
	web_set_sockets_option("SSL_VERSION", "AUTO");

					
	web_reg_find("Text=Авторизация", 
		LAST);

	web_add_header("Upgrade-Insecure-Requests", 
		"1");
	
/*Correlation comment - Do not change!  Original value='290fa4be17404859b35b6d18da3af6dd' Name ='act_token' Type ='Manual'*/
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
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		LAST);

		
	web_add_auto_header("Origin", 
		"https://account.mail.ru");

		/*Connection ID 0 received buffer WebSocketReceive0*/

	
	web_revert_auto_header("Origin");

							
			
	web_submit_data("info", 
		"Action=https://auth.mail.ru/api/v1/pushauth/info", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://account.mail.ru/", 
		"Snapshot=t50.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=login", "Value=test_nt_2@mail.ru", ENDITEM, 
		"Name=htmlencoded", "Value=false", ENDITEM, 
		"Name=email", "Value=test_nt_2@mail.ru", ENDITEM, 
		LAST);

		

	do
	{
		lr_start_transaction("LOG_IN");
	web_reg_save_param_regexp(
		"ParamName=CorrelationParameter",
		"RegExp=msglist-(.*?)\"\\ class",
		"Ordinal=All",
		"Notfound=warning",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=Yes",
		"RequestUrl=*/inbox*",
		LAST);

	web_submit_data("auth",
		"Action=https://auth.mail.ru/cgi-bin/auth",
		"Method=POST",
		"EncodeAtSign=YES",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=https://account.mail.ru/",
		"Snapshot=t56.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=username", "Value=test_nt_2@mail.ru", ENDITEM,
		"Name=Login", "Value=test_nt_2@mail.ru", ENDITEM,
		"Name=password", "Value=G68r53kd", ENDITEM,
		"Name=Password", "Value=G68r53kd", ENDITEM,
		"Name=saveauth", "Value=1", ENDITEM,
		"Name=new_auth_form", "Value=1", ENDITEM,
		"Name=FromAccount", "Value=opener=account&allow_external=1&twoSteps=1", ENDITEM,
		"Name=act_token", "Value={act_token}", ENDITEM,
		"Name=page", "Value=https://light.mail.ru/messages/inbox?authid=kphzomki.nah&dwhsplit=s10273.b1s&from=login", ENDITEM,
		"Name=lang", "Value=ru_RU", ENDITEM,
		LAST);
   lr_end_transaction("LOG_IN",LR_AUTO);
    
	Id_count = lr_paramarr_len("CorrelationParameter");
	

	if (Id_count==0)
		lr_message ("Письма закончились!");
	else
	{
    lr_start_transaction("OPEN_LETTER");
	selectedParam = rand()%Id_count+1;
	lr_save_string( lr_paramarr_idx("CorrelationParameter",selectedParam), "MessageID" );						
	web_url("16227902031523885733",
		"URL=https://light.mail.ru/message/{MessageID}/?folder=0",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://light.mail.ru/messages/inbox?authid=kphzomki.nah&dwhsplit=s10273.b1s&from=login",
		"Snapshot=t69.inf",
		"Mode=HTML",
		LAST);
		
/*Correlation comment - Do not change!  Original value='2924375438221095163116619180071070272607' Name ='form_sign' Type ='Manual'*/
	web_reg_save_param_attrib(
		"ParamName=form_sign",
		"TagName=input",
		"Extract=value",
		"Name=form_sign",
		"Type=hidden",
		SEARCH_FILTERS,
		"IgnoreRedirections=No",
		"RequestUrl=*/{MessageID}/*",
		LAST);

/*Correlation comment - Do not change!  Original value='015d40056064554319060b050d00060006070b010708070c000702020503070f010e00010908060101000505020302070e105d594e575f4b5e' Name ='form_token' Type ='Manual'*/
	web_reg_save_param_attrib(
		"ParamName=form_token",
		"TagName=input",
		"Extract=value",
		"Name=form_token",
		"Type=hidden",
		SEARCH_FILTERS,
		"IgnoreRedirections=No",
		"RequestUrl=*/{MessageID}/*",
		LAST);

/*Correlation comment - Do not change!  Original value='324383182538804469542194510557788637561:015d400560645543190700030a0b02040a0606000d01070101000d0400000000040200090c0d0607090f0304020402061850405f674403' Name ='token' Type ='Manual'*/
	web_reg_save_param_attrib(
		"ParamName=token",
		"TagName=input",
		"Extract=value",
		"Name=token",
		"Type=hidden",
		SEARCH_FILTERS,
		"IgnoreRedirections=No",
		"RequestUrl=*/{MessageID}/*",
		LAST);

	web_url("16227902031523885733_2",
		"URL=https://light.mail.ru/message/{MessageID}/?folder=0",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://light.mail.ru/messages/inbox?authid=kphzomki.nah&dwhsplit=s10273.b1s&from=login",
		"Snapshot=t74.inf",
		"Mode=HTML",
		LAST);

	lr_end_transaction("OPEN_LETTER",LR_AUTO);
				
		
	lr_start_transaction("TRANSFER_LETTER");

	web_submit_data("movemsg",
		"Action=https://light.mail.ru/cgi-bin/movemsg",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=https://light.mail.ru/message/{MessageID}/?folder=0",
		"Snapshot=t118.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=form_sign", "Value={form_sign}", ENDITEM,
		"Name=form_token", "Value={form_token}", ENDITEM,
		"Name=token", "Value={token}", ENDITEM,
		"Name=confirm", "Value=", ENDITEM,
		"Name=page", "Value=", ENDITEM,
		"Name=id", "Value={MessageID}", ENDITEM,
		"Name=back", "Value=/message/16227901950678881342/?folder=0", ENDITEM,
		"Name=folder", "Value=1", ENDITEM,
		"Name=move", "Value=Ok", ENDITEM,
		LAST);
			
		
	lr_end_transaction("TRANSFER_LETTER",LR_AUTO);
	}
	}while(Id_count!= 0);
	return 0;
}