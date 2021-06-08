Action()
{

	web_url("canonical.html", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "AUTO");

	lr_think_time(19);

	web_custom_request("status.geotrust.com", 
		"URL=http://status.geotrust.com/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"Body=0Q0O0M0K0I0\t+", 
		LAST);

	web_custom_request("ocsp.digicert.com", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"Body=0Q0O0M0K0I0\t+", 
		LAST);

	web_url("changeset", 
		"URL=https://firefox.settings.services.mozilla.com/v1/buckets/monitor/collections/changes/changeset?collection=nimbus-desktop-defaults&bucket=main&_expected=0", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("ocsp.digicert.com_2", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"Body=0Q0O0M0K0I0\t+", 
		LAST);

	web_custom_request("ocsp.digicert.com_3", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"Body=0Q0O0M0K0I0\t+", 
		LAST);

	web_custom_request("ocsp.digicert.com_4", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"Body=0Q0O0M0K0I0\t+", 
		LAST);

	web_url("canonical.html_2", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("changeset_2", 
		"URL=https://firefox.settings.services.mozilla.com/v1/buckets/main/collections/nimbus-desktop-defaults/changeset?_expected=1619710366638", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		LAST);

	web_custom_request("ocsp.digicert.com_5", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"Body=0Q0O0M0K0I0\t+", 
		LAST);

	web_custom_request("91e80bb1-645a-45f5-a20e-8b03d05d9a75", 
		"URL=https://incoming.telemetry.mozilla.org/submit/messaging-system/undesired-events/1/91e80bb1-645a-45f5-a20e-8b03d05d9a75", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t22.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body={\"experiments\":{},\"locale\":\"ru\",\"version\":\"89.0\",\"release_channel\":\"release\",\"event\":\"ASR_RS_NO_MESSAGES\",\"message_id\":\"n/a\",\"event_context\":\"whats-new-panel\",\"addon_version\":\"20210527174632\",\"impression_id\":\"{3d38b630-3cd6-4770-9f69-a19dd7074189}\"}", 
		LAST);

	web_custom_request("1e4f7d9b-70dc-4b58-9ef0-b7223f52150a", 
		"URL=https://incoming.telemetry.mozilla.org/submit/messaging-system/whats-new-panel/1/1e4f7d9b-70dc-4b58-9ef0-b7223f52150a", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t23.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body={\"experiments\":{},\"locale\":\"ru\",\"version\":\"89.0\",\"release_channel\":\"release\",\"message_id\":\"FXA_ACCOUNTS_BADGE\",\"event\":\"IMPRESSION\",\"addon_version\":\"20210527174632\",\"client_id\":\"6f375794-79e5-4070-8b47-ae5f290622f0\",\"browser_session_id\":\"d13646b6-3b02-4232-89bd-193e8145d9d4\"}", 
		LAST);

	web_add_cookie("mrcu=CE2D60B5DDCF61BFBB5A1324FC6D; DOMAIN=account.mail.ru");

	web_add_cookie("p=Do8AACWvkQAA; DOMAIN=account.mail.ru");

	web_add_cookie("i=AQDxzrlgAwATAAgEAXseAr0HCAQBghUBiQ0FAgH/; DOMAIN=account.mail.ru");

	web_add_cookie("s=octavius=1|fver=0|ww=1920|wh=976; DOMAIN=account.mail.ru");

	web_add_cookie("tmr_reqNum=299; DOMAIN=account.mail.ru");

	web_add_cookie("tmr_lvid=80978b2cdef2874c0abc9091fc38bf0c; DOMAIN=account.mail.ru");

	web_add_cookie("tmr_lvidTS=1622531536446; DOMAIN=account.mail.ru");

	web_add_cookie("b=XUkKAKDlQBUA96OFEYkt0REPp28MSZ9TDMnukwoBAAAIr1tIGqe9igrj/jcJMwAACKbDZ5gB; DOMAIN=account.mail.ru");

	web_add_cookie("VID=2vLEvU2oV6o200000U0yD4o2:::5d427d2-0-0-5d03690:CAASEHYBIMunc-PddL86vcL_ReQaYHs0HKCHK8Z7DdooLe2A8eCdlxXBady7eCw-HPn4gIE7KqV89TzYs3ZceVmw9AXtB_sj_McpVMVotGWUNGxHCaim7vCygDRxcHxA_XSBcKedLb6R8pweIHmeb5I92ikCHw; DOMAIN=account.mail.ru");

	web_add_cookie("searchuid=2383026761622531533; DOMAIN=account.mail.ru");

	web_add_cookie("c=kNG5YAQAEHsTAAAUAAAAQ/74OEo+01wnAIAA; DOMAIN=account.mail.ru");

	web_add_cookie("t=obLD1AAAAAAIAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAACAAAAAAAAAAAAAACAAAQIwgcA; DOMAIN=account.mail.ru");

	web_add_cookie("Mpop=1620021948:625f5966435f005b1905000017031f051c054f6c5150445e05190401041d455c43436e574d6703115c565c5b1b4341:test_nt_2@mail.ru:; DOMAIN=account.mail.ru");

	web_reg_find("Text=Авторизация", 
		LAST);

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(4);

	web_url("light.mail.ru", 
		"URL=https://light.mail.ru/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		LAST);

	web_url("v1", 
		"URL=https://normandy.cdn.mozilla.net/api/v1/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(4);

	web_websocket_connect("ID=0", 
		"URI=wss://account.mail.ru/api/v1/utils/xray/batch?p=login&split=s10273.b1s&pgid=kphzomr6.4ys", 
		"Origin=wss://push.services.mozilla.com/", 
		"OnOpenCB=OnOpenCB0", 
		"OnMessageCB=OnMessageCB0", 
		"OnErrorCB=OnErrorCB0", 
		"OnCloseCB=OnCloseCB0", 
		LAST);

	web_custom_request("status.geotrust.com_2", 
		"URL=http://status.geotrust.com/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"Body=0Q0O0M0K0I0\t+", 
		LAST);

	web_websocket_send("ID=0", 
		"Buffer={\"messageType\":\"hello\",\"broadcasts\":{\"remote-settings/monitor_changes\":\"\\\"1622775448122\\\"\"},\"use_webpush\":true}", 
		"IsBinary=0", 
		LAST);

	web_add_auto_header("Origin", 
		"https://account.mail.ru");

	web_custom_request("batch_2", 
		"URL=https://account.mail.ru/api/v1/utils/xray/batch?p=login&split=s10273.b1s&pgid=kphzomr6.4ys", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://account.mail.ru/login?page=https%3A%2F%2Flight.mail.ru%2Fmessages%2Finbox&allow_external=1", 
		"Snapshot=t28.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=batch=%5B%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22i%22%3A%22all%3A1%2Cip%3A1%2Cfail_false%3A1%22%2C%22t%22%3A%22app_startup%22%2C%22uid%22%3A%228%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22i%22%3A%22false%3A1%22%2C%22t%22%3A%22pa-available%22%2C%22uid%22%3A%2210%22%7D%5D", 
		LAST);

	/*Connection ID 0 received buffer WebSocketReceive0*/

	web_custom_request("batch_3", 
		"URL=https://account.mail.ru/api/v1/utils/xray/batch?p=login&split=s10273.b1s&pgid=kphzomr6.4ys", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://account.mail.ru/login?page=https%3A%2F%2Flight.mail.ru%2Fmessages%2Finbox&allow_external=1", 
		"Snapshot=t29.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=batch=%5B%7B%22v%22%3A%2222%22%2C%22skipdwh%22%3A%22true%22%2C%22t%22%3A%22pk-fid%22%2C%22i%22%3A%22value%3A22%2Cscore_good%3A22%22%2C%22uid%22%3A%2229%22%7D%5D", 
		LAST);

	web_revert_auto_header("Origin");

	web_custom_request("ocsp.digicert.com_6", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"Body=0Q0O0M0K0I0\t+", 
		LAST);

	web_custom_request("status.geotrust.com_3", 
		"URL=http://status.geotrust.com/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"Body=0Q0O0M0K0I0\t+", 
		LAST);

	web_add_cookie("mrcu=CE2D60B5DDCF61BFBB5A1324FC6D; DOMAIN=portal.mail.ru");

	web_add_cookie("p=Do8AACWvkQAA; DOMAIN=portal.mail.ru");

	web_add_cookie("s=octavius=1|fver=0|ww=1920|wh=976; DOMAIN=portal.mail.ru");

	web_add_cookie("tmr_reqNum=299; DOMAIN=portal.mail.ru");

	web_add_cookie("tmr_lvid=80978b2cdef2874c0abc9091fc38bf0c; DOMAIN=portal.mail.ru");

	web_add_cookie("tmr_lvidTS=1622531536446; DOMAIN=portal.mail.ru");

	web_add_cookie("VID=2vLEvU2oV6o200000U0yD4o2:::5d427d2-0-0-5d03690:CAASEHYBIMunc-PddL86vcL_ReQaYHs0HKCHK8Z7DdooLe2A8eCdlxXBady7eCw-HPn4gIE7KqV89TzYs3ZceVmw9AXtB_sj_McpVMVotGWUNGxHCaim7vCygDRxcHxA_XSBcKedLb6R8pweIHmeb5I92ikCHw; DOMAIN=portal.mail.ru");

	web_add_cookie("searchuid=2383026761622531533; DOMAIN=portal.mail.ru");

	web_add_cookie("c=kNG5YAQAEHsTAAAUAAAAQ/74OEo+01wnAIAA; DOMAIN=portal.mail.ru");

	web_add_cookie("t=obLD1AAAAAAIAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAACAAAAAAAAAAAAAACAAAQIwgcA; DOMAIN=portal.mail.ru");

	web_add_cookie("Mpop=1620021948:625f5966435f005b1905000017031f051c054f6c5150445e05190401041d455c43436e574d6703115c565c5b1b4341:test_nt_2@mail.ru:; DOMAIN=portal.mail.ru");

	web_add_auto_header("Origin", 
		"https://account.mail.ru");

	web_url("NaviData", 
		"URL=https://portal.mail.ru/NaviData?mac=1&gamescnt=1&Socials=1&rnd=1622790701181", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://account.mail.ru/", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("batch_4", 
		"URL=https://account.mail.ru/api/v1/utils/xray/batch?p=login&split=s10273.b1s&pgid=kphzomr6.4ys", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://account.mail.ru/login?page=https%3A%2F%2Flight.mail.ru%2Fmessages%2Finbox&allow_external=1", 
		"Snapshot=t33.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=batch=%5B%7B%22v%22%3A%2228640%22%2C%22skipdwh%22%3A%22true%22%2C%22t%22%3A%22pk-app-ready%22%2C%22i%22%3A%22success%3A28640%2Cscore_very-slow%3A28640%22%2C%22uid%22%3A%2211%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22i%22%3A%222s-vid-yes%3A28673%22%2C%22t%22%3A%22xsplit%22%2C%22uid%22%3A%2212%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22i%22%3A%222s-app-ready%3A28674%22%2C%22t%22%3A%22no-split%22%2C%22uid%22%3A%2213%22%7D%5D", 
		LAST);

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

	web_custom_request("init", 
		"URL=https://account.mail.ru/api/v1/auth/qr/init?login=&page=https%3A%2F%2Faccount.mail.ru%2Flogin%3Fpage%3Dhttps%253A%252F%252Flight.mail.ru%252Fmessages%252Finbox%26allow_external%3D1&redirect=https%3A%2F%2Flight.mail.ru%2Fmessages%2Finbox%3Fauthid%3Dkphzomki.nah%26dwhsplit%3Ds10273.b1s%26from%3Dlogin&source=polling", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://account.mail.ru/login?page=https%3A%2F%2Flight.mail.ru%2Fmessages%2Finbox&allow_external=1", 
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_revert_auto_header("Origin");

	web_url("classify_client", 
		"URL=https://classify-client.services.mozilla.com/api/v1/classify_client/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Origin", 
		"https://account.mail.ru");

	web_custom_request("batch_5", 
		"URL=https://account.mail.ru/api/v1/utils/xray/batch?p=login&split=s10273.b1s&pgid=kphzomr6.4ys", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://account.mail.ru/login?page=https%3A%2F%2Flight.mail.ru%2Fmessages%2Finbox&allow_external=1", 
		"Snapshot=t36.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=batch="
		"%5B%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22i%22%3A%222s-device-type-desktop%3A28675%22%2C%22t%22%3A%22xsplit%22%2C%22uid%22%3A%2214%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22dwh%22%3A%22%7B%5C%22id%5C%22%3A%5C%22kphzonvr0.gv79xpmqud5%5C%22%7D%22%2C%22i%22%3A%22desktop_enabled%3A1%22%2C%22t%22%3A%22qrauth%22%2C%22uid%22%3A%2215%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22dwh%22%3A%22%7B%5C%22id%5C%22%3A%5C%22kphzonvr0.gv79xpmqud5%5C%22%7D%22"
		"%2C%22i%22%3A%22desktop_available_true%3A1%22%2C%22t%22%3A%22qrauth%22%2C%22uid%22%3A%2216%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22i%22%3A%22agload%3A2077%22%2C%22t%22%3A%22perf%22%2C%22uid%22%3A%2217%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22i%22%3A%22render-time%3A28915%22%2C%22t%22%3A%22perf%22%2C%22uid%22%3A%2218%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22i%22%3A%22ssr%3A14%2Cfrt%3A2078%22%2C%22t%22%3A%22perf%22%2C%22uid%22%3A%"
		"2219%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22i%22%3A%22default%3A1%22%2C%22t%22%3A%22render%22%2C%22uid%22%3A%2220%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22i%22%3A%22default%3A1%2Cp_light%3A1%22%2C%22t%22%3A%22render-login%22%2C%22uid%22%3A%2221%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22t%22%3A%22show%22%2C%22uid%22%3A%2222%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22t%22%3A%22xsplit-log_vid_yes%22%2C%22uid%22"
		"%3A%2223%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22t%22%3A%22xsplit-log_device-type_desktop%22%2C%22uid%22%3A%2224%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22t%22%3A%22xsplit-log_fast-auth-skin_skin-0%22%2C%22uid%22%3A%2225%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22t%22%3A%22xsplit-log_beard-skin_skin-0%22%2C%22uid%22%3A%2226%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22i%22%3A%22login_vk-show%3A1%2Cp_light%3A1%2Cl"
		"ogin_vk-show_p_light%3A1%22%2C%22t%22%3A%22bind_web%22%2C%22uid%22%3A%2227%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22dwh%22%3A%22%7B%5C%22id%5C%22%3A%5C%22kphzonvr0.gv79xpmqud5%5C%22%7D%22%2C%22i%22%3A%22desktop_compact_mount%3A1%22%2C%22t%22%3A%22qrauth_1s%22%2C%22uid%22%3A%2228%22%7D%5D", 
		LAST);

	web_revert_auto_header("Origin");

	web_custom_request("batch_6", 
		"URL=https://account.mail.ru/api/v1/utils/xray/batch?p=thirdpty&split=s10273.b1s&pgid=kphzomr6.4ys", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://account.mail.ru/login?page=https%3A%2F%2Flight.mail.ru%2Fmessages%2Finbox&allow_external=1", 
		"Snapshot=t37.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=batch=%5B%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22t%22%3A%22call-set_c%22%2C%22uid%22%3A%229%22%7D%5D", 
		LAST);

	web_custom_request("status.geotrust.com_4", 
		"URL=http://status.geotrust.com/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t38.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"Body=0Q0O0M0K0I0\t+", 
		LAST);

	lr_think_time(9);

	lr_start_transaction("LOG_IN");

	web_custom_request("gsorganizationvalsha2g2", 
		"URL=http://ocsp2.globalsign.com/gsorganizationvalsha2g2", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t39.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"Body=0M0K0I0G0E0\t+", 
		LAST);

	web_add_auto_header("Origin", 
		"https://account.mail.ru");

	web_add_header("qr-polling-retry", 
		"false");

	web_custom_request("polling", 
		"URL=https://account.mail.ru/api/v1/auth/qr/polling?token=AG_Y92n7jRyW5HJskfwd4KCS&sign=4250a1yYs1wTOg1Oo4jr-7VHUQuSuaANdsEA5rv7De8U0aeNHDcL_A-NlBA8ChC3zFDaxmGrt_o-HwjO8ZIdhz4=", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://account.mail.ru/login?page=https%3A%2F%2Flight.mail.ru%2Fmessages%2Finbox&allow_external=1", 
		"Snapshot=t40.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_url("login.vk.com", 
		"URL=https://login.vk.com/?act=connect&app_id=7539952&response_type=silent_token&uuid=iRTyUx0n0YZY1f5zJZYa8&v=0.0.2", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://account.mail.ru/", 
		"Snapshot=t41.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("Origin");

	web_custom_request("gsorganizationvalsha2g2_2", 
		"URL=http://ocsp2.globalsign.com/gsorganizationvalsha2g2", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t42.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"Body=0M0K0I0G0E0\t+", 
		LAST);

	lr_think_time(4);

	web_custom_request("gsrsaovsslca2018", 
		"URL=http://ocsp.globalsign.com/gsrsaovsslca2018", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t43.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"Body=0M0K0I0G0E0\t+", 
		LAST);

	web_add_auto_header("Origin", 
		"https://account.mail.ru");

	web_custom_request("batch_7", 
		"URL=https://account.mail.ru/api/v1/utils/xray/batch?p=thirdpty&split=s10273.b1s&pgid=kphzomr6.4ys", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://account.mail.ru/login?page=https%3A%2F%2Flight.mail.ru%2Fmessages%2Finbox&allow_external=1", 
		"Snapshot=t44.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=batch=%5B%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22i%22%3A%22true%3A1%22%2C%22t%22%3A%22resolve-set_c%22%2C%22uid%22%3A%2230%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22t%22%3A%22call-check_c_one%22%2C%22uid%22%3A%2231%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22t%22%3A%22call-check_c_two%22%2C%22uid%22%3A%2232%22%7D%5D", 
		LAST);

	web_custom_request("batch_8", 
		"URL=https://account.mail.ru/api/v1/utils/xray/batch?p=login&split=s10273.b1s&pgid=kphzomr6.4ys", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://account.mail.ru/login?page=https%3A%2F%2Flight.mail.ru%2Fmessages%2Finbox&allow_external=1", 
		"Snapshot=t45.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=batch=%5B%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22t%22%3A%22vkc-btn-user-fail%22%2C%22uid%22%3A%2233%22%7D%5D", 
		LAST);

	web_revert_auto_header("Origin");

	web_url("canonical.html_3", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t46.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("20210527174632", 
		"URL=https://incoming.telemetry.mozilla.org/submit/telemetry/e7b1c532-d273-4545-acfb-ce44c3303801/update/Firefox/89.0/release/20210527174632?v=4", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t47.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body={\"type\":\"update\",\"id\":\"e7b1c532-d273-4545-acfb-ce44c3303801\",\"creationDate\":\"2021-06-04T07:11:12.466Z\",\"version\":4,\"application\":{\"architecture\":\"x86-64\",\"buildId\":\"20210527174632\",\"name\":\"Firefox\",\"version\":\"89.0\",\"displayVersion\":\"89.0\",\"vendor\":\"Mozilla\",\"platformVersion\":\"89.0\",\"xpcomAbi\":\"x86_64-msvc\",\"channel\":\"release\"},\"payload\":{\"reason\":\"success\",\"previousChannel\":\"release\",\"previousVersion\":\"88.0.1\",\""
		"previousBuildId\":\"20210504152106\"},\"clientId\":\"6f375794-79e5-4070-8b47-ae5f290622f0\",\"environment\":{\"build\":{\"applicationId\":\"{ec8030f7-c20a-464f-9b0e-13a3a9e97384}\",\"applicationName\":\"Firefox\",\"architecture\":\"x86-64\",\"buildId\":\"20210527174632\",\"version\":\"89.0\",\"vendor\":\"Mozilla\",\"displayVersion\":\"89.0\",\"platformVersion\":\"89.0\",\"xpcomAbi\":\"x86_64-msvc\",\"updaterAvailable\":true},\"partner\":{\"distributionId\":null,\"distributionVersion\":null,\""
		"partnerId\":null,\"distributor\":null,\"distributorChannel\":null,\"partnerNames\":[]},\"system\":{\"memoryMB\":8089,\"virtualMaxMB\":134217728,\"cpu\":{\"extensions\":[\"hasMMX\",\"hasSSE\",\"hasSSE2\",\"hasSSE3\",\"hasSSSE3\",\"hasSSE4_1\",\"hasSSE4_2\",\"hasAVX\",\"hasAVX2\",\"hasAES\"]},\"os\":{\"name\":\"Windows_NT\",\"version\":\"10.0\",\"locale\":\"ru-RU\",\"servicePackMajor\":0,\"servicePackMinor\":0,\"windowsBuildNumber\":19042,\"windowsUBR\":985},\"hdd\":{\"profile\":{\"model\":null,\""
		"revision\":null,\"type\":null},\"binary\":{\"model\":null,\"revision\":null,\"type\":null},\"system\":{\"model\":null,\"revision\":null,\"type\":null}},\"gfx\":{\"D2DEnabled\":true,\"DWriteEnabled\":true,\"ContentBackend\":\"Skia\",\"Headless\":false,\"EmbeddedInFirefoxReality\":false,\"adapters\":[{\"description\":\"Intel(R) HD Graphics 620\",\"vendorID\":\"0x8086\",\"deviceID\":\"0x5916\",\"subsysID\":\"00000000\",\"RAM\":0,\"driver\":\"igdumdim64 igd10iumd64 igd10iumd64 igd12umd64 igdumdim32 "
		"igd10iumd32 igd10iumd32 igd12umd32\",\"driverVendor\":null,\"driverVersion\":\"27.20.100.8854\",\"driverDate\":\"10-14-2020\",\"GPUActive\":true}],\"monitors\":[{\"screenWidth\":1920,\"screenHeight\":1080,\"refreshRate\":60,\"pseudoDisplay\":false}],\"features\":{\"compositor\":\"none\",\"hwCompositing\":{\"status\":\"available\"},\"gpuProcess\":{\"status\":\"available\"},\"wrQualified\":{\"status\":\"available\"},\"webrender\":{\"status\":\"available\"},\"wrCompositor\":{\"status\":\"available\"}"
		",\"wrSoftware\":{\"status\":\"available\"},\"openglCompositing\":{\"status\":\"unused\"},\"omtp\":{\"status\":\"disabled:FEATURE_FAILURE_DISABLED\"},\"d3d11\":{\"status\":\"available\",\"version\":45312,\"warp\":false,\"textureSharing\":true,\"blocklisted\":false},\"d2d\":{\"status\":\"available\",\"version\":\"1.1\"}}},\"appleModelId\":null,\"sec\":{\"antivirus\":[\"Антивирусная программа Microsoft Defender\"],\"antispyware\":null,\"firewall\":[\"Брандмауэр Windows"
		"\"]}},\"settings\":{\"blocklistEnabled\":true,\"e10sEnabled\":true,\"e10sMultiProcesses\":8,\"fissionEnabled\":false,\"telemetryEnabled\":false,\"locale\":\"ru\",\"intl\":{},\"update\":{\"channel\":\"release\",\"enabled\":true},\"userPrefs\":{\"browser.shell.checkDefaultBrowser\":false,\"browser.search.region\":\"RU\",\"browser.search.widget.inNavBar\":false,\"security.enterprise_roots.auto-enabled\":true,\"security.enterprise_roots.enabled\":true,\"widget.content.allow-gtk-dark-theme\":false,\""
		"widget.content.gtk-high-contrast.enabled\":true},\"sandbox\":{\"effectiveContentProcessLevel\":6},\"launcherProcessState\":0,\"addonCompatibilityCheckEnabled\":true,\"isDefaultBrowser\":null,\"attribution\":{\"campaign\":\"%2528not%2Bset%2529\",\"content\":\"%2528not%2Bset%2529\",\"dltoken\":\"ece63bbb-e8a7-4e8f-9a32-93f8c1aad9c6\",\"experiment\":\"%2528not%2Bset%2529\",\"medium\":\"referral\",\"source\":\"www.google.com\",\"ua\":\"chrome\",\"variation\":\"%2528not%2Bset%2529\"}},\"profile\":{\""
		"creationDate\":18779,\"firstUseDate\":18779},\"addons\":{\"activeAddons\":{\"doh-rollout@mozilla.org\":{\"version\":\"2.0.0\",\"scope\":1,\"type\":\"extension\",\"updateDay\":18751,\"isSystem\":true,\"isWebExtension\":true,\"multiprocessCompatible\":true,\"blocklisted\":false,\"description\":\"This used to be a Mozilla add-on that supported the roll-out of DoH, but now only exists as a stub t\",\"name\":\"DoH Roll-Out\",\"userDisabled\":false,\"appDisabled\":false,\"foreignInstall\":false,\""
		"hasBinaryComponents\":false,\"installDay\":18751},\"formautofill@mozilla.org\":{\"version\":\"1.0.1\",\"scope\":1,\"type\":\"extension\",\"updateDay\":18782,\"isSystem\":true,\"isWebExtension\":true,\"multiprocessCompatible\":true,\"blocklisted\":false,\"description\":null,\"name\":\"Form Autofill\",\"userDisabled\":false,\"appDisabled\":false,\"foreignInstall\":false,\"hasBinaryComponents\":false,\"installDay\":18751},\"pictureinpicture@mozilla.org\":{\"version\":\"1.0.0\",\"scope\":1,\"type\":\""
		"extension\",\"updateDay\":18782,\"isSystem\":true,\"isWebExtension\":true,\"multiprocessCompatible\":true,\"blocklisted\":false,\"description\":\"Fixes for web compatibility with Picture-in-Picture\",\"name\":\"Picture-In-Picture\",\"userDisabled\":false,\"appDisabled\":false,\"foreignInstall\":false,\"hasBinaryComponents\":false,\"installDay\":18751},\"screenshots@mozilla.org\":{\"version\":\"39.0.1\",\"scope\":1,\"type\":\"extension\",\"updateDay\":18782,\"isSystem\":true,\"isWebExtension\":true"
		",\"multiprocessCompatible\":true,\"blocklisted\":false,\"description\":\"Take clips and screenshots from the Web and save them temporarily or permanently.\",\"name\":\"Firefox Screenshots\",\"userDisabled\":false,\"appDisabled\":false,\"foreignInstall\":false,\"hasBinaryComponents\":false,\"installDay\":18751},\"webcompat@mozilla.org\":{\"version\":\"22.2.0\",\"scope\":1,\"type\":\"extension\",\"updateDay\":18782,\"isSystem\":true,\"isWebExtension\":true,\"multiprocessCompatible\":true,\""
		"blocklisted\":false,\"description\":\"Urgent post-release fixes for web compatibility.\",\"name\":\"Web Compatibility Interventions\",\"userDisabled\":false,\"appDisabled\":false,\"foreignInstall\":false,\"hasBinaryComponents\":false,\"installDay\":18751}},\"theme\":{\"id\":\"default-theme@mozilla.org\",\"blocklisted\":false,\"description\":\"Следовать настройкам операционной системы для кнопок, меню и окон.\",\"name\":\"Системная "
		"тема\",\"userDisabled\":false,\"appDisabled\":false,\"version\":\"1.2\",\"scope\":4,\"foreignInstall\":false,\"hasBinaryComponents\":false,\"installDay\":18779,\"updateDay\":18779},\"activeGMPlugins\":{\"dummy-gmp\":{\"version\":\"0.1\",\"userDisabled\":false,\"applyBackgroundUpdates\":1}}}}}", 
		LAST);

	web_add_auto_header("Origin", 
		"https://account.mail.ru");

	web_custom_request("batch_9", 
		"URL=https://account.mail.ru/api/v1/utils/xray/batch?p=thirdpty&split=s10273.b1s&pgid=kphzomr6.4ys", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://account.mail.ru/login?page=https%3A%2F%2Flight.mail.ru%2Fmessages%2Finbox&allow_external=1", 
		"Snapshot=t48.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=batch="
		"%5B%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22i%22%3A%22true%3A1%22%2C%22t%22%3A%22resolve-check_c_two%22%2C%22uid%22%3A%2234%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22i%22%3A%22true%3A1%22%2C%22t%22%3A%22resolve-check_c_one%22%2C%22uid%22%3A%2235%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22i%22%3A%22true_true%3A1%22%2C%22t%22%3A%22result%22%2C%22uid%22%3A%2236%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22t%22%3A%22ok%22%2C%"
		"22uid%22%3A%2237%22%7D%5D", 
		LAST);

	web_revert_auto_header("Origin");

	web_custom_request("batch_10", 
		"URL=https://account.mail.ru/api/v1/utils/xray/batch?p=login&split=s10273.b1s&pgid=kphzomr6.4ys", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://account.mail.ru/login?page=https%3A%2F%2Flight.mail.ru%2Fmessages%2Finbox&allow_external=1", 
		"Snapshot=t49.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=batch="
		"%5B%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22i%22%3A%22full-load-time%3A61706%22%2C%22t%22%3A%22perf%22%2C%22uid%22%3A%2238%22%7D%2C%7B%22v%22%3A%2234916%22%2C%22skipdwh%22%3A%22true%22%2C%22t%22%3A%22pk-nav-dom-ready%22%2C%22i%22%3A%22interactive%3A381%2Ccontent-loaded%3A49%2Ccomplete%3A34486%22%2C%22uid%22%3A%2239%22%7D%2C%7B%22v%22%3A%2234916%22%2C%22skipdwh%22%3A%22true%22%2C%22t%22%3A%22pk-nav-dom-load%22%2C%22i%22%3A%22ready%3A34916%2Cload%3A0%22%2C%22uid%22%3A%2240%22%7D%5D", 
		LAST);

	web_add_cookie("mrcu=CE2D60B5DDCF61BFBB5A1324FC6D; DOMAIN=auth.mail.ru");

	web_add_cookie("p=Do8AACWvkQAA; DOMAIN=auth.mail.ru");

	web_add_cookie("s=octavius=1|fver=0|ww=1920|wh=976; DOMAIN=auth.mail.ru");

	web_add_cookie("tmr_reqNum=299; DOMAIN=auth.mail.ru");

	web_add_cookie("tmr_lvid=80978b2cdef2874c0abc9091fc38bf0c; DOMAIN=auth.mail.ru");

	web_add_cookie("tmr_lvidTS=1622531536446; DOMAIN=auth.mail.ru");

	web_add_cookie("VID=2vLEvU2oV6o200000U0yD4o2:::5d427d2-0-0-5d03690:CAASEHYBIMunc-PddL86vcL_ReQaYHs0HKCHK8Z7DdooLe2A8eCdlxXBady7eCw-HPn4gIE7KqV89TzYs3ZceVmw9AXtB_sj_McpVMVotGWUNGxHCaim7vCygDRxcHxA_XSBcKedLb6R8pweIHmeb5I92ikCHw; DOMAIN=auth.mail.ru");

	web_add_cookie("searchuid=2383026761622531533; DOMAIN=auth.mail.ru");

	web_add_cookie("c=kNG5YAQAEHsTAAAUAAAAQ/74OEo+01wnAIAA; DOMAIN=auth.mail.ru");

	web_add_cookie("GarageID=1cce872166ff447fb6c39cd55f703c10; DOMAIN=auth.mail.ru");

	web_add_cookie("ssdc_info=b057:0:1622789906; DOMAIN=auth.mail.ru");

	web_add_cookie("t=obLD1AAAAAAIAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAACAAAAAAAAAAAAAACAAAQIwgcA; DOMAIN=auth.mail.ru");

	web_add_cookie("Mpop=1620021948:625f5966435f005b1905000017031f051c054f6c5150445e05190401041d455c43436e574d6703115c565c5b1b4341:test_nt_2@mail.ru:; DOMAIN=auth.mail.ru");

	web_add_cookie("ssdc=b057c625db06481a8fcae25c36734db6; DOMAIN=auth.mail.ru");

	web_add_auto_header("Origin", 
		"https://account.mail.ru");

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

	web_custom_request("batch_11", 
		"URL=https://account.mail.ru/api/v1/utils/xray/batch?p=login&split=s10273.b1s&pgid=kphzomr6.4ys", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://account.mail.ru/login?page=https%3A%2F%2Flight.mail.ru%2Fmessages%2Finbox&allow_external=1", 
		"Snapshot=t51.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=batch="
		"%5B%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22t%22%3A%22next-step-psw%22%2C%22uid%22%3A%2241%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22t%22%3A%22webauthn%22%2C%22uid%22%3A%2242%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22t%22%3A%22authinfo_auth_password%22%2C%22uid%22%3A%2243%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22t%22%3A%22authinfo_available_false%22%2C%22uid%22%3A%2244%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%"
		"22false%22%2C%22t%22%3A%22authinfo_canpush_false%22%2C%22uid%22%3A%2245%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22t%22%3A%22authinfo_hasphone_false%22%2C%22uid%22%3A%2246%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22t%22%3A%22authinfo_hasemail_false%22%2C%22uid%22%3A%2247%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22i%22%3A%22user_exists_true%3A1%22%2C%22t%22%3A%22ref_lightmailru%22%2C%22uid%22%3A%2248%22%7D%2C%7B%22v%22%3A%221%22%2C%22sk"
		"ipdwh%22%3A%22false%22%2C%22i%22%3A%22pushauth_set-type_password%3A1%22%2C%22t%22%3A%22ref_lightmailru%22%2C%22uid%22%3A%2249%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22i%22%3A%22pushauth_default-type_%3A1%22%2C%22t%22%3A%22ref_lightmailru%22%2C%22uid%22%3A%2250%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22dwh%22%3A%22%7B%5C%22id%5C%22%3A%5C%22kphzonvr0.gv79xpmqud5%5C%22%7D%22%2C%22i%22%3A%22desktop_compact_unmount%3A1%22%2C%22t%22%3A%22qrauth_2s%22%2C%22uid"
		"%22%3A%2251%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22dwh%22%3A%22%7B%5C%22id%5C%22%3A%5C%22kphzonvr0.gv79xpmqud5%5C%22%7D%22%2C%22i%22%3A%22desktop_fastlink_mount%3A1%22%2C%22t%22%3A%22qrauth_2s%22%2C%22uid%22%3A%2252%22%7D%2C%7B%22v%22%3A%22516%22%2C%22skipdwh%22%3A%22true%22%2C%22t%22%3A%22pk-api%22%2C%22i%22%3A%22x-pushauth_info-hit%3A516%2Cx-pushauth_info-l_1%3A264%2Cx-pushauth_info-h_200%3A516%2Cx-pushauth_info-a_200%3A516%22%2C%22uid%22%3A%2253%22%7D%5D", 
		LAST);

	web_revert_auto_header("Origin");

	web_add_auto_header("Origin", 
		"https://account.mail.ru");

	web_custom_request("init_2", 
		"URL=https://account.mail.ru/api/v1/auth/qr/init?login=test_nt_2@mail.ru&page=https%3A%2F%2Faccount.mail.ru%2Flogin%3Fpage%3Dhttps%253A%252F%252Flight.mail.ru%252Fmessages%252Finbox%26allow_external%3D1&redirect=https%3A%2F%2Flight.mail.ru%2Fmessages%2Finbox%3Fauthid%3Dkphzomki.nah%26dwhsplit%3Ds10273.b1s%26from%3Dlogin&source=polling", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://account.mail.ru/login?page=https%3A%2F%2Flight.mail.ru%2Fmessages%2Finbox&allow_external=1", 
		"Snapshot=t52.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_add_header("qr-polling-retry", 
		"false");

	web_custom_request("polling_2", 
		"URL=https://account.mail.ru/api/v1/auth/qr/polling?token=AG_zA5wWUqHOmNBt9Y4Dke68&sign=zPgtl-IdYYdXboYoElFwaFIewCsCruFriLcQ0hIOAmKzxxSxXFuZ0da1BC-HqJ_O5aO8f5ocEyODWuubNLXhqmk=", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://account.mail.ru/login?page=https%3A%2F%2Flight.mail.ru%2Fmessages%2Finbox&allow_external=1", 
		"Snapshot=t53.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_add_header("qr-polling-retry", 
		"true");

	lr_think_time(10);

	web_custom_request("polling_3", 
		"URL=https://account.mail.ru/api/v1/auth/qr/polling?token=AG_zA5wWUqHOmNBt9Y4Dke68&sign=zPgtl-IdYYdXboYoElFwaFIewCsCruFriLcQ0hIOAmKzxxSxXFuZ0da1BC-HqJ_O5aO8f5ocEyODWuubNLXhqmk=", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://account.mail.ru/login?page=https%3A%2F%2Flight.mail.ru%2Fmessages%2Finbox&allow_external=1", 
		"Snapshot=t54.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_custom_request("batch_12", 
		"URL=https://account.mail.ru/api/v1/utils/xray/batch?p=login&email=test_nt_2%40mail.ru&split=s10273.b1s&pgid=kphzomr6.4ys", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://account.mail.ru/login?page=https%3A%2F%2Flight.mail.ru%2Fmessages%2Finbox&allow_external=1", 
		"Snapshot=t55.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=batch=%5B%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22dwh%22%3A%22%7B%5C%22id%5C%22%3A%5C%22kphzonvr0.gv79xpmqud5%5C%22%7D%22%2C%22i%22%3A%22desktop_f-auth_password_0%3A1%22%2C%22t%22%3A%22qrauth_2s%22%2C%22uid%22%3A%2260%22%7D%5D", 
		LAST);

	web_add_cookie("mrcu=CE2D60B5DDCF61BFBB5A1324FC6D; DOMAIN=light.mail.ru");

	web_add_cookie("p=Do8AACWvkQAA; DOMAIN=light.mail.ru");

	web_add_cookie("tmr_reqNum=299; DOMAIN=light.mail.ru");

	web_add_cookie("tmr_lvid=80978b2cdef2874c0abc9091fc38bf0c; DOMAIN=light.mail.ru");

	web_add_cookie("tmr_lvidTS=1622531536446; DOMAIN=light.mail.ru");

	web_add_cookie("VID=2vLEvU2oV6o200000U0yD4o2:::5d427d2-0-0-5d03690:CAASEHYBIMunc-PddL86vcL_ReQaYHs0HKCHK8Z7DdooLe2A8eCdlxXBady7eCw-HPn4gIE7KqV89TzYs3ZceVmw9AXtB_sj_McpVMVotGWUNGxHCaim7vCygDRxcHxA_XSBcKedLb6R8pweIHmeb5I92ikCHw; DOMAIN=light.mail.ru");

	web_add_cookie("searchuid=2383026761622531533; DOMAIN=light.mail.ru");

	web_add_cookie("c=kNG5YAQAEHsTAAAUAAAAQ/74OEo+01wnAIAA; DOMAIN=light.mail.ru");

	web_add_cookie("sdcs=3YeadMXtSusVJZNi; DOMAIN=light.mail.ru");

	web_add_cookie("tmr_detect=0%7C1622790313264; DOMAIN=light.mail.ru");

	web_reg_find("Text=&#40;6&#41; Входящие - test_nt_2@mail.ru - Почта Mail.ru", 
		LAST);

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_submit_data("auth", 
		"Action=https://auth.mail.ru/cgi-bin/auth", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://account.mail.ru/", 
		"Snapshot=t56.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=username", "Value=test_nt_2@mail.ru", ENDITEM, 
		"Name=Login", "Value=test_nt_2@mail.ru", ENDITEM, 
		"Name=password", "Value=G68r53kd", ENDITEM, 
		"Name=Password", "Value=G68r53kd", ENDITEM, 
		"Name=saveauth", "Value=1", ENDITEM, 
		"Name=new_auth_form", "Value=1", ENDITEM, 
		"Name=FromAccount", "Value=opener=account&allow_external=1&twoSteps=1", ENDITEM, 
		"Name=act_token", "Value=290fa4be17404859b35b6d18da3af6dd", ENDITEM, 
		"Name=page", "Value=https://light.mail.ru/messages/inbox?authid=kphzomki.nah&dwhsplit=s10273.b1s&from=login", ENDITEM, 
		"Name=lang", "Value=ru_RU", ENDITEM, 
		LAST);

	web_revert_auto_header("Origin");

	web_custom_request("batch_13", 
		"URL=https://account.mail.ru/api/v1/utils/xray/batch?p=login&email=test_nt_2%40mail.ru&split=s10273.b1s&pgid=kphzomr6.4ys", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://account.mail.ru/login?page=https%3A%2F%2Flight.mail.ru%2Fmessages%2Finbox&allow_external=1", 
		"Snapshot=t57.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=batch=%5B%7B%22v%22%3A%2275917%22%2C%22skipdwh%22%3A%22true%22%2C%22t%22%3A%22pk-unload%22%2C%22i%22%3A%22beforeunload%3A75917%2Ctype_score_5m%3A75917%22%2C%22uid%22%3A%2261%22%7D%5D", 
		LAST);

	lr_end_transaction("LOG_IN",LR_AUTO);

	lr_start_transaction("OPEN_LETTER");

	web_add_cookie("mrcu=CE2D60B5DDCF61BFBB5A1324FC6D; DOMAIN=top-fwz1.mail.ru");

	web_add_cookie("p=Do8AACWvkQAA; DOMAIN=top-fwz1.mail.ru");

	web_add_cookie("tmr_reqNum=304; DOMAIN=top-fwz1.mail.ru");

	web_add_cookie("tmr_lvid=80978b2cdef2874c0abc9091fc38bf0c; DOMAIN=top-fwz1.mail.ru");

	web_add_cookie("tmr_lvidTS=1622531536446; DOMAIN=top-fwz1.mail.ru");

	web_add_cookie("VID=2vLEvU2oV6o200000U0yD4o2:::5d427d2-0-0-5d03690:CAASEHYBIMunc-PddL86vcL_ReQaYHs0HKCHK8Z7DdooLe2A8eCdlxXBady7eCw-HPn4gIE7KqV89TzYs3ZceVmw9AXtB_sj_McpVMVotGWUNGxHCaim7vCygDRxcHxA_XSBcKedLb6R8pweIHmeb5I92ikCHw; DOMAIN=top-fwz1.mail.ru");

	web_add_cookie("searchuid=2383026761622531533; DOMAIN=top-fwz1.mail.ru");

	web_add_auto_header("Origin", 
		"https://light.mail.ru");

	lr_think_time(9);

	web_custom_request("counter", 
		"URL=https://top-fwz1.mail.ru/counter?js=13;id=2035946;u=https%3A//light.mail.ru/messages/inbox%3Fauthid%3Dkphzomki.nah%26dwhsplit%3Ds10273.b1s%26from%3Dlogin;r=https%3A//account.mail.ru/;st=1622790751934;s=1920*1080;vp=1920*965;touch=0;hds=1;flash=;sid=902645d12c97741a;ver=60.3.0;tz=-180%2FEurope%2FMoscow;ni=;detect=0;lvid=1622531536446%3A1622790752890%3A301%3A80978b2cdef2874c0abc9091fc38bf0c;opts=sec;_=0.562055530980322", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t58.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_custom_request("counter_2", 
		"URL=https://top-fwz1.mail.ru/counter?js=13;id=110605;u=https%3A//light.mail.ru/messages/inbox%3Fauthid%3Dkphzomki.nah%26dwhsplit%3Ds10273.b1s%26from%3Dlogin;r=https%3A//account.mail.ru/;st=1622790751934;s=1920*1080;vp=1920*965;touch=0;hds=1;flash=;sid=902645d12c97741a;ver=60.3.0;tz=-180%2FEurope%2FMoscow;ni=;detect=0;lvid=1622531536446%3A1622790752887%3A300%3A80978b2cdef2874c0abc9091fc38bf0c;_=0.7384137574548961", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t59.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_custom_request("counter_3", 
		"URL=https://top-fwz1.mail.ru/counter?js=13;id=3210335;u=https%3A//light.mail.ru/messages/inbox%3Fauthid%3Dkphzomki.nah%26dwhsplit%3Ds10273.b1s%26from%3Dlogin;r=https%3A//account.mail.ru/;st=1622790751934;userid=test_nt_2@mail.ru;s=1920*1080;vp=1920*965;touch=0;hds=1;flash=;sid=902645d12c97741a;ver=60.3.0;tz=-180%2FEurope%2FMoscow;ni=;detect=0;lvid=1622531536446%3A1622790752899%3A304%3A80978b2cdef2874c0abc9091fc38bf0c;opts=sec;_=0.34150151336151546", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t60.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_custom_request("counter_4", 
		"URL=https://top-fwz1.mail.ru/counter?js=13;id=3206667;u=https%3A//light.mail.ru/messages/inbox%3Fauthid%3Dkphzomki.nah%26dwhsplit%3Ds10273.b1s%26from%3Dlogin;r=https%3A//account.mail.ru/;st=1622790751934;userid=test_nt_2@mail.ru;s=1920*1080;vp=1920*965;touch=0;hds=1;flash=;sid=902645d12c97741a;ver=60.3.0;tz=-180%2FEurope%2FMoscow;ni=;detect=0;lvid=1622531536446%3A1622790752896%3A303%3A80978b2cdef2874c0abc9091fc38bf0c;opts=sec;_=0.25674644953287573", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t61.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_revert_auto_header("Origin");

	web_add_auto_header("Origin", 
		"https://light.mail.ru");

	web_custom_request("counter_5", 
		"URL=https://top-fwz1.mail.ru/counter?js=13;id=3123969;u=https%3A//light.mail.ru/messages/inbox%3Fauthid%3Dkphzomki.nah%26dwhsplit%3Ds10273.b1s%26from%3Dlogin;r=https%3A//account.mail.ru/;st=1622790751934;s=1920*1080;vp=1920*965;touch=0;hds=1;flash=;sid=902645d12c97741a;ver=60.3.0;tz=-180%2FEurope%2FMoscow;ni=;detect=0;lvid=1622531536446%3A1622790752893%3A302%3A80978b2cdef2874c0abc9091fc38bf0c;opts=sec;_=0.39484554474735145", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t62.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_add_cookie("tmr_reqNum=309; DOMAIN=top-fwz1.mail.ru");

	web_add_cookie("VID=2vLEvU2oV6o200000U0yD4o2:::5d42b1e-0-0-5d03690:CAASEAh8nHmLRGrE_TIJandxmvYaYFsb4Zd42oiBbu3oSkclz1nz2a7qA6Pj6leQd7s30WIQdasDNq-4KXXEicnmtXtWYW02m0K7HJWVz04I4XtDhNZPyAyhIDjyE2lw3cr89Q60ufODm4OPHu0EafuKq73W-g; DOMAIN=top-fwz1.mail.ru");

	web_custom_request("tracker", 
		"URL=https://top-fwz1.mail.ru/tracker?js=13;id=110605;u=https%3A//light.mail.ru/messages/inbox%3Fauthid%3Dkphzomki.nah%26dwhsplit%3Ds10273.b1s%26from%3Dlogin;r=https%3A//account.mail.ru/;st=1622790751934;s=1920*1080;vp=1920*965;touch=0;hds=1;flash=;sid=902645d12c97741a;ver=60.3.0;tz=-180%2FEurope%2FMoscow;ni=;detect=0;lvid=1622531536446%3A1622790771182%3A305%3A80978b2cdef2874c0abc9091fc38bf0c;_=0.48478000373287833;e=RT/unload;et=1622790771178;pvt=19244", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t63.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_custom_request("tracker_2", 
		"URL=https://top-fwz1.mail.ru/tracker?js=13;id=2035946;u=https%3A//light.mail.ru/messages/inbox%3Fauthid%3Dkphzomki.nah%26dwhsplit%3Ds10273.b1s%26from%3Dlogin;r=https%3A//account.mail.ru/;st=1622790751934;s=1920*1080;vp=1920*965;touch=0;hds=1;flash=;sid=902645d12c97741a;ver=60.3.0;tz=-180%2FEurope%2FMoscow;ni=;detect=0;lvid=1622531536446%3A1622790771189%3A306%3A80978b2cdef2874c0abc9091fc38bf0c;opts=sec;_=0.48204768930603314;e=RT/unload;et=1622790771178;pvt=19244", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t64.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_custom_request("tracker_3", 
		"URL=https://top-fwz1.mail.ru/tracker?js=13;id=3123969;u=https%3A//light.mail.ru/messages/inbox%3Fauthid%3Dkphzomki.nah%26dwhsplit%3Ds10273.b1s%26from%3Dlogin;r=https%3A//account.mail.ru/;st=1622790751934;s=1920*1080;vp=1920*965;touch=0;hds=1;flash=;sid=902645d12c97741a;ver=60.3.0;tz=-180%2FEurope%2FMoscow;ni=;detect=0;lvid=1622531536446%3A1622790771192%3A307%3A80978b2cdef2874c0abc9091fc38bf0c;opts=sec;_=0.40565991854602956;e=RT/unload;et=1622790771178;pvt=19244", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t65.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_custom_request("tracker_4", 
		"URL=https://top-fwz1.mail.ru/tracker?js=13;id=3206667;u=https%3A//light.mail.ru/messages/inbox%3Fauthid%3Dkphzomki.nah%26dwhsplit%3Ds10273.b1s%26from%3Dlogin;r=https%3A//account.mail.ru/;st=1622790751934;userid=test_nt_2@mail.ru;s=1920*1080;vp=1920*965;touch=0;hds=1;flash=;sid=902645d12c97741a;ver=60.3.0;tz=-180%2FEurope%2FMoscow;ni=;detect=0;lvid=1622531536446%3A1622790771195%3A308%3A80978b2cdef2874c0abc9091fc38bf0c;opts=sec;_=0.14598705674403945;e=RT/unload;et=1622790771178;pvt=19244", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t66.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_custom_request("tracker_5", 
		"URL=https://top-fwz1.mail.ru/tracker?js=13;id=3210335;u=https%3A//light.mail.ru/messages/inbox%3Fauthid%3Dkphzomki.nah%26dwhsplit%3Ds10273.b1s%26from%3Dlogin;r=https%3A//account.mail.ru/;st=1622790751934;userid=test_nt_2@mail.ru;s=1920*1080;vp=1920*965;touch=0;hds=1;flash=;sid=902645d12c97741a;ver=60.3.0;tz=-180%2FEurope%2FMoscow;ni=;detect=0;lvid=1622531536446%3A1622790771202%3A309%3A80978b2cdef2874c0abc9091fc38bf0c;opts=sec;_=0.7699575010981766;e=RT/unload;et=1622790771178;pvt=19244", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t67.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_revert_auto_header("Origin");

	web_custom_request("status.geotrust.com_5", 
		"URL=http://status.geotrust.com/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t68.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"Body=0Q0O0M0K0I0\t+", 
		LAST);

	web_add_cookie("tmr_reqNum=309; DOMAIN=light.mail.ru");

	web_add_cookie("VID=2vLEvU2oV6o200000U0yD4o2:::5d42b1e-0-0-5d03690:CAASEAh8nHmLRGrE_TIJandxmvYaYFsb4Zd42oiBbu3oSkclz1nz2a7qA6Pj6leQd7s30WIQdasDNq-4KXXEicnmtXtWYW02m0K7HJWVz04I4XtDhNZPyAyhIDjyE2lw3cr89Q60ufODm4OPHu0EafuKq73W-g; DOMAIN=light.mail.ru");

	web_add_cookie("tmr_detect=0%7C1622790755294; DOMAIN=light.mail.ru");

	web_reg_find("Text=test_nt_2@mail.ru - Почта Mail.ru", 
		LAST);

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("16227902031523885733", 
		"URL=https://light.mail.ru/message/16227902031523885733/?folder=0", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://light.mail.ru/messages/inbox?authid=kphzomki.nah&dwhsplit=s10273.b1s&from=login", 
		"Snapshot=t69.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(6);

	web_custom_request("status.geotrust.com_6", 
		"URL=http://status.geotrust.com/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t70.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"Body=0Q0O0M0K0I0\t+", 
		LAST);

	web_custom_request("status.geotrust.com_7", 
		"URL=http://status.geotrust.com/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t71.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"Body=0Q0O0M0K0I0\t+", 
		LAST);

	lr_think_time(4);

	web_custom_request("r3.o.lencr.org", 
		"URL=http://r3.o.lencr.org/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t72.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"Body=0S0Q0O0M0K0\t+", 
		LAST);

	lr_think_time(4);

	web_custom_request("ocsp.sca1b.amazontrust.com", 
		"URL=http://ocsp.sca1b.amazontrust.com/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t73.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"Body=0Q0O0M0K0I0\t+", 
		LAST);

	web_reg_find("Text=test_nt_2@mail.ru - Почта Mail.ru", 
		LAST);

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("16227902031523885733_2", 
		"URL=https://light.mail.ru/message/16227902031523885733/?folder=0", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://light.mail.ru/messages/inbox?authid=kphzomki.nah&dwhsplit=s10273.b1s&from=login", 
		"Snapshot=t74.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("OPEN_LETTER",LR_AUTO);

	web_add_cookie("tmr_reqNum=314; DOMAIN=top-fwz1.mail.ru");

	web_add_cookie("b=XUkLAKDlQBUA96OFEYkt0REPp28MSZ9TDMnukwoBAAAIr1tIGqe9igrj/jcJMwAACJcJOAymw2eYAQAA; DOMAIN=top-fwz1.mail.ru");

	web_add_cookie("VID=2vLEvU2oV6o200000U0yD4o2:::5d42b1e-0-0-5d03690:CAASEFhs7a78J4xLiFaAOPPz33caYPMEEYRjkHaDTGpUUQrtBfcqz6nSoTsYphfF1GG0zjhVAGQCU_wzpGjLS8gx0GNHlIXRmF41FfN01a0AuI4Mw-QbbMvVLhFKn1cBY75AIw5dJGFtZ26msno6CxmR6wbiFg; DOMAIN=top-fwz1.mail.ru");

	web_add_cookie("c=X9K5YAQAEHsTAAAkAAAAQ/7YcZTcTHMtAQAE; DOMAIN=top-fwz1.mail.ru");

	web_add_auto_header("Origin", 
		"https://light.mail.ru");

	web_custom_request("counter_6", 
		"URL=https://top-fwz1.mail.ru/counter?js=13;id=110605;u=https%3A//light.mail.ru/message/16227902031523885733/%3Ffolder%3D0;r=https%3A//light.mail.ru/messages/inbox%3Fauthid%3Dkphzomki.nah%26dwhsplit%3Ds10273.b1s%26from%3Dlogin;st=1622790795431;s=1920*1080;vp=1903*965;touch=0;hds=1;flash=;sid=3f275d043ba7c53a;ver=60.3.0;tz=-180%2FEurope%2FMoscow;ni=;detect=0;lvid=1622531536446%3A1622790796636%3A310%3A80978b2cdef2874c0abc9091fc38bf0c;_=0.6286393251100333", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t75.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_custom_request("counter_7", 
		"URL=https://top-fwz1.mail.ru/counter?js=13;id=2035946;u=https%3A//light.mail.ru/message/16227902031523885733/%3Ffolder%3D0;r=https%3A//light.mail.ru/messages/inbox%3Fauthid%3Dkphzomki.nah%26dwhsplit%3Ds10273.b1s%26from%3Dlogin;st=1622790795431;s=1920*1080;vp=1903*965;touch=0;hds=1;flash=;sid=3f275d043ba7c53a;ver=60.3.0;tz=-180%2FEurope%2FMoscow;ni=;detect=0;lvid=1622531536446%3A1622790796637%3A311%3A80978b2cdef2874c0abc9091fc38bf0c;opts=sec;_=0.4339727345125717", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t76.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_custom_request("counter_8", 
		"URL=https://top-fwz1.mail.ru/counter?js=13;id=3123969;u=https%3A//light.mail.ru/message/16227902031523885733/%3Ffolder%3D0;r=https%3A//light.mail.ru/messages/inbox%3Fauthid%3Dkphzomki.nah%26dwhsplit%3Ds10273.b1s%26from%3Dlogin;st=1622790795431;s=1920*1080;vp=1903*965;touch=0;hds=1;flash=;sid=3f275d043ba7c53a;ver=60.3.0;tz=-180%2FEurope%2FMoscow;ni=;detect=0;lvid=1622531536446%3A1622790796642%3A312%3A80978b2cdef2874c0abc9091fc38bf0c;opts=sec;_=0.6986411064622682", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t77.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_revert_auto_header("Origin");

	web_custom_request("counter_9", 
		"URL=https://top-fwz1.mail.ru/counter?js=13;id=3206667;u=https%3A//light.mail.ru/message/16227902031523885733/%3Ffolder%3D0;r=https%3A//light.mail.ru/messages/inbox%3Fauthid%3Dkphzomki.nah%26dwhsplit%3Ds10273.b1s%26from%3Dlogin;st=1622790795431;userid=test_nt_2@mail.ru;s=1920*1080;vp=1903*965;touch=0;hds=1;flash=;sid=3f275d043ba7c53a;ver=60.3.0;tz=-180%2FEurope%2FMoscow;ni=;detect=0;lvid=1622531536446%3A1622790796644%3A313%3A80978b2cdef2874c0abc9091fc38bf0c;opts=sec;_=0.4638150237618873", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t78.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_add_header("Origin", 
		"https://light.mail.ru");

	web_custom_request("counter_10", 
		"URL=https://top-fwz1.mail.ru/counter?js=13;id=3210335;u=https%3A//light.mail.ru/message/16227902031523885733/%3Ffolder%3D0;r=https%3A//light.mail.ru/messages/inbox%3Fauthid%3Dkphzomki.nah%26dwhsplit%3Ds10273.b1s%26from%3Dlogin;st=1622790795431;userid=test_nt_2@mail.ru;s=1920*1080;vp=1903*965;touch=0;hds=1;flash=;sid=3f275d043ba7c53a;ver=60.3.0;tz=-180%2FEurope%2FMoscow;ni=;detect=0;lvid=1622531536446%3A1622790796648%3A314%3A80978b2cdef2874c0abc9091fc38bf0c;opts=sec;_=0.13211638845145457", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t79.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_custom_request("status.geotrust.com_8", 
		"URL=http://status.geotrust.com/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t80.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"Body=0Q0O0M0K0I0\t+", 
		LAST);

	web_custom_request("yandex.ocsp-responder.com", 
		"URL=http://yandex.ocsp-responder.com/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t81.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"Body=0Q0O0M0K0I0\t+", 
		LAST);

	web_add_cookie("tmr_reqNum=319; DOMAIN=top-fwz1.mail.ru");

	web_add_auto_header("Origin", 
		"https://light.mail.ru");

	web_custom_request("tracker_6", 
		"URL=https://top-fwz1.mail.ru/tracker?js=13;id=110605;u=https%3A//light.mail.ru/message/16227902031523885733/%3Ffolder%3D0;r=https%3A//light.mail.ru/messages/inbox%3Fauthid%3Dkphzomki.nah%26dwhsplit%3Ds10273.b1s%26from%3Dlogin;st=1622790795431;s=1920*1080;vp=1903*965;touch=0;hds=1;flash=;sid=3f275d043ba7c53a;ver=60.3.0;tz=-180%2FEurope%2FMoscow;nt=0/0/1622790774333/////-1/46/47/15516/20344/20167/20346/20360/20680/20716/21098/21154/21174/41311/41311/;ni=;detect=0;lvid="
		"1622531536446%3A1622790815648%3A315%3A80978b2cdef2874c0abc9091fc38bf0c;_=0.5593124054771067;e=RT/load;et=1622790815646", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t82.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_custom_request("tracker_7", 
		"URL=https://top-fwz1.mail.ru/tracker?js=13;id=2035946;u=https%3A//light.mail.ru/message/16227902031523885733/%3Ffolder%3D0;r=https%3A//light.mail.ru/messages/inbox%3Fauthid%3Dkphzomki.nah%26dwhsplit%3Ds10273.b1s%26from%3Dlogin;st=1622790795431;s=1920*1080;vp=1903*965;touch=0;hds=1;flash=;sid=3f275d043ba7c53a;ver=60.3.0;tz=-180%2FEurope%2FMoscow;nt=0/0/1622790774333/////-1/46/47/15516/20344/20167/20346/20360/20680/20716/21098/21154/21174/41311/41311/;ni=;detect=0;lvid="
		"1622531536446%3A1622790815652%3A316%3A80978b2cdef2874c0abc9091fc38bf0c;opts=sec;_=0.015212934115120924;e=RT/load;et=1622790815646", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t83.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_custom_request("tracker_8", 
		"URL=https://top-fwz1.mail.ru/tracker?js=13;id=3123969;u=https%3A//light.mail.ru/message/16227902031523885733/%3Ffolder%3D0;r=https%3A//light.mail.ru/messages/inbox%3Fauthid%3Dkphzomki.nah%26dwhsplit%3Ds10273.b1s%26from%3Dlogin;st=1622790795431;s=1920*1080;vp=1903*965;touch=0;hds=1;flash=;sid=3f275d043ba7c53a;ver=60.3.0;tz=-180%2FEurope%2FMoscow;nt=0/0/1622790774333/////-1/46/47/15516/20344/20167/20346/20360/20680/20716/21098/21154/21174/41311/41311/;ni=;detect=0;lvid="
		"1622531536446%3A1622790815656%3A317%3A80978b2cdef2874c0abc9091fc38bf0c;opts=sec;_=0.9268513875611402;e=RT/load;et=1622790815646", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t84.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_custom_request("tracker_9", 
		"URL=https://top-fwz1.mail.ru/tracker?js=13;id=3206667;u=https%3A//light.mail.ru/message/16227902031523885733/%3Ffolder%3D0;r=https%3A//light.mail.ru/messages/inbox%3Fauthid%3Dkphzomki.nah%26dwhsplit%3Ds10273.b1s%26from%3Dlogin;st=1622790795431;userid=test_nt_2@mail.ru;s=1920*1080;vp=1903*965;touch=0;hds=1;flash=;sid=3f275d043ba7c53a;ver=60.3.0;tz=-180%2FEurope%2FMoscow;nt=0/0/1622790774333/////-1/46/47/15516/20344/20167/20346/20360/20680/20716/21098/21154/21174/41311/41311/;ni=;detect=0;lvid="
		"1622531536446%3A1622790815658%3A318%3A80978b2cdef2874c0abc9091fc38bf0c;opts=sec;_=0.822041049963708;e=RT/load;et=1622790815646", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t85.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_revert_auto_header("Origin");

	web_add_auto_header("Origin", 
		"https://light.mail.ru");

	web_custom_request("tracker_10", 
		"URL=https://top-fwz1.mail.ru/tracker?js=13;id=3210335;u=https%3A//light.mail.ru/message/16227902031523885733/%3Ffolder%3D0;r=https%3A//light.mail.ru/messages/inbox%3Fauthid%3Dkphzomki.nah%26dwhsplit%3Ds10273.b1s%26from%3Dlogin;st=1622790795431;userid=test_nt_2@mail.ru;s=1920*1080;vp=1903*965;touch=0;hds=1;flash=;sid=3f275d043ba7c53a;ver=60.3.0;tz=-180%2FEurope%2FMoscow;nt=0/0/1622790774333/////-1/46/47/15516/20344/20167/20346/20360/20680/20716/21098/21154/21174/41311/41311/;ni=;detect=0;lvid="
		"1622531536446%3A1622790815661%3A319%3A80978b2cdef2874c0abc9091fc38bf0c;opts=sec;_=0.8521976454654189;e=RT/load;et=1622790815646", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t86.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_revert_auto_header("Origin");

	web_custom_request("cspreport.mail.ru", 
		"URL=https://cspreport.mail.ru/?v=1.0.1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t87.inf", 
		"Mode=HTML", 
		"EncType=application/csp-report", 
		"Body={\"csp-report\":{\"blocked-uri\":\"https://gum.criteo.com/sync?c=405&r=2&j=rtus_callback\",\"column-number\":33,\"document-uri\":\"https://light.mail.ru/message/16227902031523885733/?folder=0\",\"line-number\":57,\"original-policy\":\"default-src blob: wss://*.mail.ru https://www.google.com/recaptcha/ https://*.mail.ru https://*.yandex.ru https://*.radar.imgsmail.ru https://yastatic.net https://*.mradx.net https://*.imgsmail.ru; script-src 'self' 'unsafe-inline' 'unsafe-eval' https://"
		"*.mail.ru https://*.imgsmail.ru https://portal.mail.ru https://ad.mail.ru https://*.yandex.ru https://cdn.consentmanager.mgr.consensu.org https://consentmanager.mgr.consensu.org https://yastatic.net https://*.mradx.net; img-src data: blob: https: https://yastatic.net https://*.mradx.net https://*.imgsmail.ru; style-src 'self' 'unsafe-inline' 'unsafe-eval' https://*.mail.ru https://*.imgsmail.ru https://cdn.consentmanager.mgr.consensu.org https://consentmanager.mgr.consensu.org https://*.mradx.net;"
		" font-src data: https://*.mail.ru https://*.imgsmail.ru https://yastatic.net https://*.mradx.net; report-uri https://cspreport.mail.ru/?v=1.0.1\",\"referrer\":\"https://light.mail.ru/messages/inbox?authid=kphzomki.nah&dwhsplit=s10273.b1s&from=login\",\"source-file\":\"https://js.imgsmail.ru/mail/m/data/utf/ts/1622658806/light/js/build/app.min.js?v=3.240%20line%201%20%3E%20eval\",\"violated-directive\":\"script-src\"}}", 
		LAST);

	web_add_cookie("tmr_reqNum=324; DOMAIN=top-fwz1.mail.ru");

	web_add_auto_header("Origin", 
		"https://light.mail.ru");

	web_custom_request("tracker_11", 
		"URL=https://top-fwz1.mail.ru/tracker?js=13;id=110605;u=https%3A//light.mail.ru/message/16227902031523885733/%3Ffolder%3D0;r=https%3A//light.mail.ru/messages/inbox%3Fauthid%3Dkphzomki.nah%26dwhsplit%3Ds10273.b1s%26from%3Dlogin;st=1622790795431;s=1920*1080;vp=1903*965;touch=0;hds=1;flash=;sid=3f275d043ba7c53a;ver=60.3.0;tz=-180%2FEurope%2FMoscow;ni=;detect=0;lvid=1622531536446%3A1622790830668%3A320%3A80978b2cdef2874c0abc9091fc38bf0c;_=0.8461476587705064;e=PVT/15", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t88.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_add_cookie("VID=2vLEvU2oV6o200000U0yD4o2:::5d42b1e-0-0-5d03690:CAASEFhJ8CWLWn5Dk_mOwea9zhsaYARtKVS6wXAdYcFnVYK1bl12rGCjmqjtvkGQfP3i3de7ucuatY37acFB8mYUK9u0Lc54QahlAoEIXLGV7GWNaXQHgcKdpT42FNltV0gyzrdFVgu8VxUEjBiYapAlu1bvcA; DOMAIN=top-fwz1.mail.ru");

	web_custom_request("tracker_12", 
		"URL=https://top-fwz1.mail.ru/tracker?js=13;id=3206667;u=https%3A//light.mail.ru/message/16227902031523885733/%3Ffolder%3D0;r=https%3A//light.mail.ru/messages/inbox%3Fauthid%3Dkphzomki.nah%26dwhsplit%3Ds10273.b1s%26from%3Dlogin;st=1622790795431;userid=test_nt_2@mail.ru;s=1920*1080;vp=1903*965;touch=0;hds=1;flash=;sid=3f275d043ba7c53a;ver=60.3.0;tz=-180%2FEurope%2FMoscow;ni=;detect=0;lvid=1622531536446%3A1622790830677%3A323%3A80978b2cdef2874c0abc9091fc38bf0c;opts=sec;_=0.15896112548273733;e=PVT/15", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t89.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_custom_request("tracker_13", 
		"URL=https://top-fwz1.mail.ru/tracker?js=13;id=2035946;u=https%3A//light.mail.ru/message/16227902031523885733/%3Ffolder%3D0;r=https%3A//light.mail.ru/messages/inbox%3Fauthid%3Dkphzomki.nah%26dwhsplit%3Ds10273.b1s%26from%3Dlogin;st=1622790795431;s=1920*1080;vp=1903*965;touch=0;hds=1;flash=;sid=3f275d043ba7c53a;ver=60.3.0;tz=-180%2FEurope%2FMoscow;ni=;detect=0;lvid=1622531536446%3A1622790830671%3A321%3A80978b2cdef2874c0abc9091fc38bf0c;opts=sec;_=0.24026215318171873;e=PVT/15", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t90.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_custom_request("tracker_14", 
		"URL=https://top-fwz1.mail.ru/tracker?js=13;id=3123969;u=https%3A//light.mail.ru/message/16227902031523885733/%3Ffolder%3D0;r=https%3A//light.mail.ru/messages/inbox%3Fauthid%3Dkphzomki.nah%26dwhsplit%3Ds10273.b1s%26from%3Dlogin;st=1622790795431;s=1920*1080;vp=1903*965;touch=0;hds=1;flash=;sid=3f275d043ba7c53a;ver=60.3.0;tz=-180%2FEurope%2FMoscow;ni=;detect=0;lvid=1622531536446%3A1622790830674%3A322%3A80978b2cdef2874c0abc9091fc38bf0c;opts=sec;_=0.40365383998925286;e=PVT/15", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t91.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_revert_auto_header("Origin");

	web_add_auto_header("Origin", 
		"https://light.mail.ru");

	web_custom_request("tracker_15", 
		"URL=https://top-fwz1.mail.ru/tracker?js=13;id=3210335;u=https%3A//light.mail.ru/message/16227902031523885733/%3Ffolder%3D0;r=https%3A//light.mail.ru/messages/inbox%3Fauthid%3Dkphzomki.nah%26dwhsplit%3Ds10273.b1s%26from%3Dlogin;st=1622790795431;userid=test_nt_2@mail.ru;s=1920*1080;vp=1903*965;touch=0;hds=1;flash=;sid=3f275d043ba7c53a;ver=60.3.0;tz=-180%2FEurope%2FMoscow;ni=;detect=0;lvid=1622531536446%3A1622790830681%3A324%3A80978b2cdef2874c0abc9091fc38bf0c;opts=sec;_=0.5485578502690881;e=PVT/15", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t92.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_custom_request("jstracer", 
		"URL=https://an.yandex.ru/jstracer?pcode_native=14875&values=performance&adb=false&verison=14875&bundle_version=14875&widget_pf=no", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t93.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"service\":\"pcode_native\",\"tags\":{\"L_010\":0,\"L_020\":0,\"L_030\":0,\"L_040\":0,\"L_050\":1085,\"L_060\":5},\"labels\":{\"adb\":\"false\",\"verison\":\"14875\",\"bundle_version\":\"14875\",\"widget_pf\":\"no\",\"version\":\"14875\"},\"timestamp\":1622790827057,\"eventType\":\"values\",\"eventName\":\"performance\",\"data\":{\"adfox\":false,\"pcode\":false},\"sid\":\"6809121622790827040\",\"version\":\"14875\",\"location\":\"https://light.mail.ru/message/16227902031523885733/?folder=0"
		"\",\"topLocation\":\"https://light.mail.ru/message/16227902031523885733/?folder=0\",\"topAncestor\":\"https://light.mail.ru\",\"ancestorOrigins\":[],\"documentIsVisible\":true,\"referrer\":\"https://light.mail.ru/messages/inbox?authid=kphzomki.nah&dwhsplit=s10273.b1s&from=login\",\"topReferrer\":\"https://light.mail.ru/messages/inbox?authid=kphzomki.nah&dwhsplit=s10273.b1s&from=login\",\"currentScriptSrc\":\"https://an.yandex.ru/system/widget.js\",\"secureIFrame\":false,\"isVideoADB\":false,\""
		"value\":1,\"rnd\":0.8871443235870567,\"topDocumentFocus\":false}", 
		LAST);

	web_revert_auto_header("Origin");

	web_custom_request("gts1o1core", 
		"URL=http://ocsp.pki.goog/gts1o1core", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t94.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"Body=0R0P0N0L0J0\t+", 
		LAST);

	web_add_header("Origin", 
		"https://light.mail.ru");

	web_custom_request("142108", 
		"URL=https://an.yandex.ru/meta/142108?target-ref=https%3A%2F%2Flight.mail.ru%2Fmessage%2F16227902031523885733%2F%3Ffolder%3D0&page-ref=https%3A%2F%2Flight.mail.ru%2Fmessages%2Finbox%3Fauthid%3Dkphzomki.nah%26dwhsplit%3Ds10273.b1s%26from%3Dlogin&charset=utf-8&pcode-test-ids=363741%2C0%2C50%3B370897%2C0%2C39%3B368748%2C0%2C10%3B367341%2C0%2C42%3B369240%2C0%2C83%3B351578%2C0%2C91%3B369110%2C0%2C45%3B370390%2C0%2C15&pcode-flags="
		"%7B%22USE_WIDGET_FROM_PCODE%22%3Atrue%2C%22LEADERBOARD_VIDEO%22%3A%22exp%22%2C%22COMBO_HEADER%22%3A%22withoutHeader%22%2C%22SINGLE_CONTEXT_BLACKLIST%22%3A%5B%5D%2C%22USE_SUPERBUNDLE%22%3Atrue%2C%22USE_SMART_SSR%22%3A%221%22%2C%22SINGLE_CONTEXT%22%3Atrue%2C%22DEFAULT_SSR_FORMATS%22%3A%5B%22zen%22%2C%22zen2%22%2C%22zen2-gallery%22%2C%22billboard%22%2C%22horizontal%22%2C%22horizontal0318%22%2C%22constructor%22%2C%22modernAdaptive%22%5D%2C%22SSR_UNIFORMAT%22%3A%221%22%2C%22SSR_PERCENT_LOGGING%22%3A0.3"
		"%2C%22ADAPTIVE_TOWER_VIDEO%22%3A%22exp%22%2C%22DEFAULT_BLACKLIST_PAGES%22%3A%5B%22419507%22%2C%22419506%22%2C%22106253%22%2C%22188382%22%2C%22189903%22%5D%2C%22COMBO_PACKSHOT_EXP%22%3A%22exp%22%2C%22ADAPTIVE_320_50%22%3A%22exp%22%2C%22CUSTOM_DOMAIN_TEXT_FLAGS%22%3A%22exp%22%2C%22DISABLE_VIDEO_CONTROL%22%3A%22exp%22%2C%22SMART_BANNER_LAYOUT_VERSION%22%3A%22control%22%2C%22PCODEVER%22%3A%2214875%22%7D&server-side-rendering-enabled-formats="
		"zen%0Azen2%0Azen2-gallery%0Abillboard%0Ahorizontal%0Ahorizontal0318%0Aconstructor%0AmodernAdaptive&raw-smart-content=1&smart-format-names=smart-banner-adaptive_v1%0Asmart-banner-mosaic_v1&pcode-icookie=9367971191622790023&imp-id=383&test-tag=296318383685634&ad-session-id=6809121622790827040&target-id=73927907&tga-with-creatives=1&pcode-version=14875&pcodever=14875&flash-ver=0&available-width=240&available-height=400&layout-config="
		"%7B%22win_width%22%3A1920%2C%22win_height%22%3A965%2C%22pixel_ratio%22%3A1%2C%22bandwidth%22%3A-1%2C%22w%22%3A239%2C%22h%22%3A400%2C%22width%22%3A240%2C%22height%22%3A400%2C%22visible%22%3A1%2C%22left%22%3A95%2C%22top%22%3A638%2C%22ad_no%22%3A0%2C%22req_no%22%3A0%7D&uniformat=true&callback=Ya%5B6102430028579%5D", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t95.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded", 
		LAST);

	web_custom_request("yandex.ocsp-responder.com_2", 
		"URL=http://yandex.ocsp-responder.com/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t96.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"Body=0Q0O0M0K0I0\t+", 
		LAST);

	web_url("update.xml", 
		"URL=https://aus5.mozilla.org/update/3/GMP/89.0/20210527174632/WINNT_x86_64-msvc-x64/ru/release/Windows_NT%2010.0.0.0.19042.985%20(x64)/default/default/update.xml", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t97.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("yandex.ocsp-responder.com_3", 
		"URL=http://yandex.ocsp-responder.com/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t98.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"Body=0Q0O0M0K0I0\t+", 
		LAST);

	web_add_auto_header("Origin", 
		"https://light.mail.ru");

	web_url("142108_2", 
		"URL=https://mc.yandex.ru/watch/142108?wmode=7&page-url=https%3A%2F%2Flight.mail.ru%2Fmessage%2F16227902031523885733%2F%3Ffolder%3D0&page-ref=https%3A%2F%2Flight.mail.ru%2Fmessages%2Finbox%3Fauthid%3Dkphzomki.nah%26dwhsplit%3Ds10273.b1s%26from%3Dlogin&nohit=1&charset=utf-8&cnt-class=1&browser-info="
		"pv%3A1%3Agdpr%3A14%3Avf%3A1bo6nxnn5zutxu65%3Afu%3A0%3Aen%3Autf-8%3Ala%3Aru-RU%3Av%3A551%3Acn%3A1%3Adp%3A0%3Als%3A448983736298%3Ahid%3A755398279%3Az%3A180%3Ai%3A202106040101348%3Aet%3A1622790828%3Ac%3A1%3Arn%3A1015178898%3Au%3A1622700309306886778%3Aw%3A1903x965%3As%3A1920x1080x24%3Ask%3A1%3Ans%3A1622790774333%3Arqnl%3A1%3Afip%3A0aa8960ff311d171379f7ecd0df7025a-a81f3b9bcdd80a361c14af38dc09b309-a81f3b9bcdd80a361c14af38dc09b309-4bd84c89c35a312599d807af285e7b5f-6456f00690ac9fc94dca4eb4fd6d061a-131e42c9"
		"237e3c82052c9abd4227fb0f-61b9878bbce18de73aafc8582a198c0c-a2394cfee1eb770b55e7f92fbaeda64c-a81f3b9bcdd80a361c14af38dc09b309-c6d7b47b2dcff33f80cab17f3a360d0b-2facd2c41a0047c68391f933b930bc3a%3Ati%3A2%3Ast%3A1622790828%3At%3Atest_nt_2%40mail.ru%20-%20%D0%9F%D0%BE%D1%87%D1%82%D0%B0%20Mail.ru", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t99.inf", 
		"Mode=HTML", 
		LAST);

	web_url("142108_3", 
		"URL=https://an.yandex.ru/meta/142108?imp-id=385&target-ref=https%3A%2F%2Flight.mail.ru%2Fmessage%2F16227902031523885733%2F%3Ffolder%3D0&page-ref=https%3A%2F%2Flight.mail.ru%2Fmessages%2Finbox%3Fauthid%3Dkphzomki.nah%26dwhsplit%3Ds10273.b1s%26from%3Dlogin&ad-session-id=6809121622790827040&ss-skip-token-length=30&layout-config="
		"%7B%22win_width%22%3A1920%2C%22win_height%22%3A965%2C%22pixel_ratio%22%3A1%2C%22bandwidth%22%3A-1%2C%22w%22%3A1712.699951171875%2C%22h%22%3A0%2C%22width%22%3A1713%2C%22height%22%3A0%2C%22visible%22%3A1%2C%22left%22%3A359%2C%22top%22%3A162%2C%22req_no%22%3A0%2C%22ad_no%22%3A0%7D&test-tag=296318524981261&tga-with-creatives=1&return-widget-settings=1&yaw_ver=14875&pcodever=14875&use-server-side-rendering=1&pcode-test-ids="
		"363741%2C0%2C50%3B370897%2C0%2C40%3B362536%2C0%2C9%3B367340%2C0%2C6%3B369240%2C0%2C64%3B351578%2C0%2C94%3B367337%2C0%2C71%3B370390%2C0%2C71&available-width=1712.699951171875&pcode-icookie=6291871641622790023", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t100.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("Origin");

	web_custom_request("ocsp.digicert.com_7", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t101.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"Body=0Q0O0M0K0I0\t+", 
		LAST);

	web_add_auto_header("Origin", 
		"https://light.mail.ru");

	web_submit_data("1", 
		"Action=https://mc.yandex.ru/watch/142108/1?page-url=https%3A%2F%2Flight.mail.ru%2Fmessage%2F16227902031523885733%2F%3Ffolder%3D0&charset=utf-8&cnt-class=1&browser-info="
		"pa%3A1%3Aar%3A1%3Agdpr%3A14%3Avf%3A1bo6nxnn5zutxu65%3Afu%3A1%3Aen%3Autf-8%3Ala%3Aru-RU%3Av%3A551%3Acn%3A1%3Adp%3A0%3Als%3A448983736298%3Ahid%3A755398279%3Az%3A180%3Ai%3A202106040101408%3Aet%3A1622790849%3Ac%3A1%3Arn%3A766048140%3Arqn%3A25%3Au%3A1622700309306886778%3Aw%3A1903x965%3As%3A1920x1080x24%3Ask%3A1%3Aeu%3A0%3Ans%3A1622790774333%3Arqnl%3A1%3Apu%3A31162736591622700309306886778%3Azzlc%3Ana%3Acc%3A5191215641622531000%3Afip%3A0aa8960ff311d171379f7ecd0df7025a-a81f3b9bcdd80a361c14af38dc09b309-a81"
		"f3b9bcdd80a361c14af38dc09b309-4bd84c89c35a312599d807af285e7b5f-6456f00690ac9fc94dca4eb4fd6d061a-131e42c9237e3c82052c9abd4227fb0f-61b9878bbce18de73aafc8582a198c0c-a2394cfee1eb770b55e7f92fbaeda64c-a81f3b9bcdd80a361c14af38dc09b309-c6d7b47b2dcff33f80cab17f3a360d0b-2facd2c41a0047c68391f933b930bc3a%3Ati%3A2%3Ast%3A1622790849", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=image/gif", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t102.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=site-info", "Value={\"__ym\":{\"adSessionID\":\"6809121622790827040\"}}", ENDITEM, 
		LAST);

	web_custom_request("jstracer_2", 
		"URL=https://an.yandex.ru/jstracer?pcode_native=14875&values=performance&adb=false&verison=14875&bundle_version=14875&widget_pf=no", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t103.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"service\":\"pcode_native\",\"tags\":{\"B_010\":0,\"B_020\":0,\"B_030\":0,\"B_040\":0,\"B_050\":196,\"B_060\":3,\"M_010\":423,\"M_020\":2,\"M_030\":5113,\"M_040\":4948,\"M_050\":108,\"M_060\":129},\"labels\":{\"adb\":\"false\",\"verison\":\"14875\",\"bundle_version\":\"14875\",\"widget_pf\":\"no\",\"version\":\"14875\"},\"timestamp\":1622790848562,\"eventType\":\"values\",\"eventName\":\"performance\",\"data\":{\"adfox\":false,\"pcode\":false},\"sid\":\"6809121622790827040\",\"version\":\""
		"14875\",\"location\":\"https://light.mail.ru/message/16227902031523885733/?folder=0\",\"topLocation\":\"https://light.mail.ru/message/16227902031523885733/?folder=0\",\"topAncestor\":\"https://light.mail.ru\",\"ancestorOrigins\":[],\"documentIsVisible\":true,\"referrer\":\"https://light.mail.ru/messages/inbox?authid=kphzomki.nah&dwhsplit=s10273.b1s&from=login\",\"topReferrer\":\"https://light.mail.ru/messages/inbox?authid=kphzomki.nah&dwhsplit=s10273.b1s&from=login\",\"currentScriptSrc\":\"https:/"
		"/an.yandex.ru/system/widget.js\",\"secureIFrame\":false,\"isVideoADB\":false,\"value\":1,\"rnd\":0.8871443235870567,\"topDocumentFocus\":false}", 
		LAST);

	web_url("142108_4", 
		"URL=https://mc.yandex.ru/watch/142108?wmode=7&page-url=https%3A%2F%2Flight.mail.ru%2Fmessages%2Finbox&nohit=1&charset=utf-8&cnt-class=1&browser-info=pv%3A1%3Agdpr%3A14%3Avf%3A1bo6nxnn5zutxu65%3Afu%3A0%3Aen%3Autf-8%3Ala%3Aru-RU%3Av%3A551%3Acn%3A1%3Adp%3A0%3Als%3A448983736298%3Ahid%3A999295436%3Az%3A180%3Ai%3A202106040100551%3Aet%3A1622790351%3Ac%3A1%3Arn%3A139189578%3Au%3A1622700309306886778%3Aw%3A1903x976%3As%3A1920x1080x24%3Ask%3A1%3Ans%3A1622790283662%3Arqnl%3A2%3Ati%3A2%3Ast%3A1622790848%3At%3A"
		"(6)%20%D0%92%D1%85%D0%BE%D0%B4%D1%8F%D1%89%D0%B8%D0%B5%20-%20test_nt_2%40mail.ru%20-%20%D0%9F%D0%BE%D1%87%D1%82%D0%B0%20Mail.ru", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t104.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("Origin");

	web_custom_request("gts1o1core_2", 
		"URL=http://ocsp.pki.goog/gts1o1core", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t105.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"Body=0R0P0N0L0J0\t+", 
		LAST);

	lr_think_time(4);

	lr_start_transaction("TRANSFER_LETTER");

	web_custom_request("gts1o1core_3", 
		"URL=http://ocsp.pki.goog/gts1o1core", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t106.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"Body=0R0P0N0L0J0\t+", 
		LAST);

	web_custom_request("gts1o1", 
		"URL=http://ocsp.pki.goog/gts1o1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t107.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"Body=0Q0O0M0K0I0\t+", 
		LAST);

	web_custom_request("gts1o1_2", 
		"URL=http://ocsp.pki.goog/gts1o1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t108.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"Body=0Q0O0M0K0I0\t+", 
		LAST);

	web_add_auto_header("Origin", 
		"https://light.mail.ru");

	web_custom_request("tracker_16", 
		"URL=https://top-fwz1.mail.ru/tracker?;js=13;id=110605;e=RT/beat;sid=3f275d043ba7c53a;ids=110605%2C2035946%2C3123969%2C3206667%2C3210335;ver=60.3.0;_=0.30713973006831774", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t109.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_custom_request("jstracer_3", 
		"URL=https://an.yandex.ru/jstracer?pcode_native=14875&values=performance&adb=false&verison=14875&bundle_version=14875&widget_pf=no", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t110.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"service\":\"pcode_native\",\"tags\":{\"L_010\":0,\"L_020\":0,\"L_030\":0,\"L_040\":0,\"L_050\":555,\"L_060\":2,\"B_010\":0,\"B_020\":0,\"B_030\":0,\"B_040\":0,\"B_050\":196,\"B_060\":3,\"M_010\":423,\"M_020\":2,\"M_030\":5113,\"M_040\":4948,\"M_050\":108,\"M_060\":129},\"labels\":{\"adb\":\"false\",\"verison\":\"14875\",\"bundle_version\":\"14875\",\"widget_pf\":\"no\",\"version\":\"14875\"},\"timestamp\":1622790857550,\"eventType\":\"values\",\"eventName\":\"performance\",\"data\":{\""
		"adfox\":false,\"pcode\":true},\"sid\":\"6809121622790827040\",\"version\":\"14875\",\"location\":\"https://light.mail.ru/message/16227902031523885733/?folder=0\",\"topLocation\":\"https://light.mail.ru/message/16227902031523885733/?folder=0\",\"topAncestor\":\"https://light.mail.ru\",\"ancestorOrigins\":[],\"documentIsVisible\":true,\"referrer\":\"https://light.mail.ru/messages/inbox?authid=kphzomki.nah&dwhsplit=s10273.b1s&from=login\",\"topReferrer\":\"https://light.mail.ru/messages/inbox?authid="
		"kphzomki.nah&dwhsplit=s10273.b1s&from=login\",\"currentScriptSrc\":\"https://an.yandex.ru/system/widget.js\",\"secureIFrame\":false,\"isVideoADB\":false,\"value\":1,\"rnd\":0.4930840421922581,\"topDocumentFocus\":true}", 
		LAST);

	web_revert_auto_header("Origin");

	web_add_auto_header("Origin", 
		"https://light.mail.ru");

	web_url("142108_5", 
		"URL=https://an.yandex.ru/meta/142108?imp-id=385&target-ref=https%3A%2F%2Flight.mail.ru%2Fmessage%2F16227902031523885733%2F%3Ffolder%3D0&page-ref=https%3A%2F%2Flight.mail.ru%2Fmessages%2Finbox%3Fauthid%3Dkphzomki.nah%26dwhsplit%3Ds10273.b1s%26from%3Dlogin&ad-session-id=6809121622790827040&ss-skip-token-length=30&layout-config="
		"%7B%22win_width%22%3A1920%2C%22win_height%22%3A965%2C%22pixel_ratio%22%3A1%2C%22bandwidth%22%3A-1%2C%22w%22%3A1712.699951171875%2C%22h%22%3A0%2C%22width%22%3A1713%2C%22height%22%3A0%2C%22visible%22%3A1%2C%22left%22%3A359%2C%22top%22%3A162%2C%22req_no%22%3A0%2C%22ad_no%22%3A0%7D&test-tag=296318524981261&tga-with-creatives=1&return-widget-settings=1&yaw_ver=14875&pcodever=14875&use-server-side-rendering=1&pcode-test-ids="
		"363741%2C0%2C50%3B370897%2C0%2C40%3B362536%2C0%2C9%3B367340%2C0%2C6%3B369240%2C0%2C64%3B351578%2C0%2C94%3B367337%2C0%2C71%3B370390%2C0%2C71&available-width=1712.699951171875&pcode-icookie=6291871641622790023", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t111.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("Origin");

	web_custom_request("jstracer_4", 
		"URL=https://an.yandex.ru/jstracer?pcode_native=14875&values=performance&adb=false&verison=14875&bundle_version=14875&widget_pf=no", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t112.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"service\":\"pcode_native\",\"tags\":{\"M_010\":0,\"M_020\":0,\"M_030\":0,\"M_040\":0,\"M_050\":113,\"M_060\":11,\"B_010\":0,\"B_020\":0,\"B_030\":0,\"B_040\":0,\"B_050\":166,\"B_060\":2},\"labels\":{\"adb\":\"false\",\"verison\":\"14875\",\"bundle_version\":\"14875\",\"widget_pf\":\"no\",\"version\":\"14875\"},\"timestamp\":1622790857838,\"eventType\":\"values\",\"eventName\":\"performance\",\"data\":{\"adfox\":false,\"pcode\":true},\"sid\":\"6809121622790827040\",\"version\":\"14875\",\""
		"location\":\"https://light.mail.ru/message/16227902031523885733/?folder=0\",\"topLocation\":\"https://light.mail.ru/message/16227902031523885733/?folder=0\",\"topAncestor\":\"https://light.mail.ru\",\"ancestorOrigins\":[],\"documentIsVisible\":true,\"referrer\":\"https://light.mail.ru/messages/inbox?authid=kphzomki.nah&dwhsplit=s10273.b1s&from=login\",\"topReferrer\":\"https://light.mail.ru/messages/inbox?authid=kphzomki.nah&dwhsplit=s10273.b1s&from=login\",\"currentScriptSrc\":\"https://"
		"an.yandex.ru/system/widget.js\",\"secureIFrame\":false,\"isVideoADB\":false,\"value\":1,\"rnd\":0.4930840421922581,\"topDocumentFocus\":true}", 
		LAST);

	web_add_cookie("tmr_reqNum=329; DOMAIN=top-fwz1.mail.ru");

	web_add_auto_header("Origin", 
		"https://light.mail.ru");

	lr_think_time(17);

	web_custom_request("tracker_17", 
		"URL=https://top-fwz1.mail.ru/tracker?js=13;id=110605;u=https%3A//light.mail.ru/message/16227902031523885733/%3Ffolder%3D0;r=https%3A//light.mail.ru/messages/inbox%3Fauthid%3Dkphzomki.nah%26dwhsplit%3Ds10273.b1s%26from%3Dlogin;st=1622790795431;s=1920*1080;vp=1903*965;touch=0;hds=1;flash=;sid=3f275d043ba7c53a;ver=60.3.0;tz=-180%2FEurope%2FMoscow;ni=;detect=0;lvid=1622531536446%3A1622790877636%3A325%3A80978b2cdef2874c0abc9091fc38bf0c;_=0.5850130888754544;e=RT/unload;et=1622790877633;pvt=82202", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t113.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_custom_request("tracker_18", 
		"URL=https://top-fwz1.mail.ru/tracker?js=13;id=2035946;u=https%3A//light.mail.ru/message/16227902031523885733/%3Ffolder%3D0;r=https%3A//light.mail.ru/messages/inbox%3Fauthid%3Dkphzomki.nah%26dwhsplit%3Ds10273.b1s%26from%3Dlogin;st=1622790795431;s=1920*1080;vp=1903*965;touch=0;hds=1;flash=;sid=3f275d043ba7c53a;ver=60.3.0;tz=-180%2FEurope%2FMoscow;ni=;detect=0;lvid=1622531536446%3A1622790877638%3A326%3A80978b2cdef2874c0abc9091fc38bf0c;opts=sec;_=0.3747058247098508;e=RT/unload;et=1622790877633;pvt="
		"82202", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t114.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_custom_request("tracker_19", 
		"URL=https://top-fwz1.mail.ru/tracker?js=13;id=3123969;u=https%3A//light.mail.ru/message/16227902031523885733/%3Ffolder%3D0;r=https%3A//light.mail.ru/messages/inbox%3Fauthid%3Dkphzomki.nah%26dwhsplit%3Ds10273.b1s%26from%3Dlogin;st=1622790795431;s=1920*1080;vp=1903*965;touch=0;hds=1;flash=;sid=3f275d043ba7c53a;ver=60.3.0;tz=-180%2FEurope%2FMoscow;ni=;detect=0;lvid=1622531536446%3A1622790877640%3A327%3A80978b2cdef2874c0abc9091fc38bf0c;opts=sec;_=0.32959557689234253;e=RT/unload;et=1622790877633;pvt="
		"82202", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t115.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_custom_request("tracker_20", 
		"URL=https://top-fwz1.mail.ru/tracker?js=13;id=3206667;u=https%3A//light.mail.ru/message/16227902031523885733/%3Ffolder%3D0;r=https%3A//light.mail.ru/messages/inbox%3Fauthid%3Dkphzomki.nah%26dwhsplit%3Ds10273.b1s%26from%3Dlogin;st=1622790795431;userid=test_nt_2@mail.ru;s=1920*1080;vp=1903*965;touch=0;hds=1;flash=;sid=3f275d043ba7c53a;ver=60.3.0;tz=-180%2FEurope%2FMoscow;ni=;detect=0;lvid=1622531536446%3A1622790877641%3A328%3A80978b2cdef2874c0abc9091fc38bf0c;opts=sec;_=0.1732351905635826;e=RT/unload"
		";et=1622790877633;pvt=82202", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t116.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_revert_auto_header("Origin");

	web_add_auto_header("Origin", 
		"https://light.mail.ru");

	web_custom_request("tracker_21", 
		"URL=https://top-fwz1.mail.ru/tracker?js=13;id=3210335;u=https%3A//light.mail.ru/message/16227902031523885733/%3Ffolder%3D0;r=https%3A//light.mail.ru/messages/inbox%3Fauthid%3Dkphzomki.nah%26dwhsplit%3Ds10273.b1s%26from%3Dlogin;st=1622790795431;userid=test_nt_2@mail.ru;s=1920*1080;vp=1903*965;touch=0;hds=1;flash=;sid=3f275d043ba7c53a;ver=60.3.0;tz=-180%2FEurope%2FMoscow;ni=;detect=0;lvid=1622531536446%3A1622790877643%3A329%3A80978b2cdef2874c0abc9091fc38bf0c;opts=sec;_=0.9440881748988802;e=RT/unload"
		";et=1622790877633;pvt=82202", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t117.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_add_cookie("tmr_reqNum=329; DOMAIN=light.mail.ru");

	web_add_cookie("tmr_detect=0%7C1622790799478; DOMAIN=light.mail.ru");

	web_reg_find("Text=test_nt_2@mail.ru - Почта Mail.ru", 
		LAST);

	web_revert_auto_header("Origin");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_submit_data("movemsg", 
		"Action=https://light.mail.ru/cgi-bin/movemsg", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://light.mail.ru/message/16227902031523885733/?folder=0", 
		"Snapshot=t118.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=form_sign", "Value=2924375438221095163116619180071070272607", ENDITEM, 
		"Name=form_token", "Value=015d40056064554319060b050d00060006070b010708070c000702020503070f010e00010908060101000505020302070e105d594e575f4b5e", ENDITEM, 
		"Name=token", "Value=324383182538804469542194510557788637561:015d400560645543190700030a0b02040a0606000d01070101000d0400000000040200090c0d0607090f0304020402061850405f674403", ENDITEM, 
		"Name=confirm", "Value=", ENDITEM, 
		"Name=page", "Value=", ENDITEM, 
		"Name=id", "Value=16227902031523885733", ENDITEM, 
		"Name=back", "Value=/message/16227901950678881342/?folder=0", ENDITEM, 
		"Name=folder", "Value=1", ENDITEM, 
		"Name=move", "Value=Ok", ENDITEM, 
		LAST);

	web_add_cookie("tmr_reqNum=334; DOMAIN=top-fwz1.mail.ru");

	web_add_auto_header("Origin", 
		"https://light.mail.ru");

	web_custom_request("counter_11", 
		"URL=https://top-fwz1.mail.ru/counter?js=13;id=110605;u=https%3A//light.mail.ru/message/16227901950678881342/%3Ffolder%3D0;r=https%3A//light.mail.ru/message/16227902031523885733/%3Ffolder%3D0;st=1622790879941;s=1920*1080;vp=1903*965;touch=0;hds=1;flash=;sid=fbc670636b51e786;ver=60.3.0;tz=-180%2FEurope%2FMoscow;ni=;detect=0;lvid=1622531536446%3A1622790880582%3A330%3A80978b2cdef2874c0abc9091fc38bf0c;_=0.8079804674530701", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t119.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_revert_auto_header("Origin");

	web_custom_request("counter_12", 
		"URL=https://top-fwz1.mail.ru/counter?js=13;id=2035946;u=https%3A//light.mail.ru/message/16227901950678881342/%3Ffolder%3D0;r=https%3A//light.mail.ru/message/16227902031523885733/%3Ffolder%3D0;st=1622790879941;s=1920*1080;vp=1903*965;touch=0;hds=1;flash=;sid=fbc670636b51e786;ver=60.3.0;tz=-180%2FEurope%2FMoscow;ni=;detect=0;lvid=1622531536446%3A1622790880584%3A331%3A80978b2cdef2874c0abc9091fc38bf0c;opts=sec;_=0.560350830860642", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t120.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_add_auto_header("Origin", 
		"https://light.mail.ru");

	web_custom_request("counter_13", 
		"URL=https://top-fwz1.mail.ru/counter?js=13;id=3123969;u=https%3A//light.mail.ru/message/16227901950678881342/%3Ffolder%3D0;r=https%3A//light.mail.ru/message/16227902031523885733/%3Ffolder%3D0;st=1622790879941;s=1920*1080;vp=1903*965;touch=0;hds=1;flash=;sid=fbc670636b51e786;ver=60.3.0;tz=-180%2FEurope%2FMoscow;ni=;detect=0;lvid=1622531536446%3A1622790880586%3A332%3A80978b2cdef2874c0abc9091fc38bf0c;opts=sec;_=0.4688175652290949", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t121.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_custom_request("counter_14", 
		"URL=https://top-fwz1.mail.ru/counter?js=13;id=3206667;u=https%3A//light.mail.ru/message/16227901950678881342/%3Ffolder%3D0;r=https%3A//light.mail.ru/message/16227902031523885733/%3Ffolder%3D0;st=1622790879941;userid=test_nt_2@mail.ru;s=1920*1080;vp=1903*965;touch=0;hds=1;flash=;sid=fbc670636b51e786;ver=60.3.0;tz=-180%2FEurope%2FMoscow;ni=;detect=0;lvid=1622531536446%3A1622790880587%3A333%3A80978b2cdef2874c0abc9091fc38bf0c;opts=sec;_=0.33565646654208325", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t122.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_revert_auto_header("Origin");

	web_add_auto_header("Origin", 
		"https://light.mail.ru");

	web_custom_request("counter_15", 
		"URL=https://top-fwz1.mail.ru/counter?js=13;id=3210335;u=https%3A//light.mail.ru/message/16227901950678881342/%3Ffolder%3D0;r=https%3A//light.mail.ru/message/16227902031523885733/%3Ffolder%3D0;st=1622790879941;userid=test_nt_2@mail.ru;s=1920*1080;vp=1903*965;touch=0;hds=1;flash=;sid=fbc670636b51e786;ver=60.3.0;tz=-180%2FEurope%2FMoscow;ni=;detect=0;lvid=1622531536446%3A1622790880589%3A334%3A80978b2cdef2874c0abc9091fc38bf0c;opts=sec;_=0.613938137778492", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t123.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_custom_request("jstracer_5", 
		"URL=https://an.yandex.ru/jstracer?pcode_native=14875&values=performance&adb=false&verison=14875&bundle_version=14875&widget_pf=no", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t124.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"service\":\"pcode_native\",\"tags\":{\"L_010\":0,\"L_020\":0,\"L_030\":0,\"L_040\":0,\"L_050\":1099,\"L_060\":6},\"labels\":{\"adb\":\"false\",\"verison\":\"14875\",\"bundle_version\":\"14875\",\"widget_pf\":\"no\",\"version\":\"14875\"},\"timestamp\":1622790882372,\"eventType\":\"values\",\"eventName\":\"performance\",\"data\":{\"adfox\":false,\"pcode\":false},\"sid\":\"3717531622790882357\",\"version\":\"14875\",\"location\":\"https://light.mail.ru/message/16227901950678881342/?folder=0"
		"\",\"topLocation\":\"https://light.mail.ru/message/16227901950678881342/?folder=0\",\"topAncestor\":\"https://light.mail.ru\",\"ancestorOrigins\":[],\"documentIsVisible\":true,\"referrer\":\"https://light.mail.ru/message/16227902031523885733/?folder=0\",\"topReferrer\":\"https://light.mail.ru/message/16227902031523885733/?folder=0\",\"currentScriptSrc\":\"https://an.yandex.ru/system/widget.js\",\"secureIFrame\":false,\"isVideoADB\":false,\"value\":1,\"rnd\":0.7823224173178457,\"topDocumentFocus\""
		":true}", 
		LAST);

	web_custom_request("142108_6", 
		"URL=https://an.yandex.ru/meta/142108?target-ref=https%3A%2F%2Flight.mail.ru%2Fmessage%2F16227901950678881342%2F%3Ffolder%3D0&page-ref=https%3A%2F%2Flight.mail.ru%2Fmessage%2F16227902031523885733%2F%3Ffolder%3D0&charset=utf-8&pcode-test-ids=363741%2C0%2C50%3B370897%2C0%2C39%3B368748%2C0%2C10%3B367341%2C0%2C42%3B369240%2C0%2C83%3B351578%2C0%2C91%3B369110%2C0%2C45%3B370390%2C0%2C15&pcode-flags="
		"%7B%22USE_WIDGET_FROM_PCODE%22%3Atrue%2C%22LEADERBOARD_VIDEO%22%3A%22exp%22%2C%22COMBO_HEADER%22%3A%22withoutHeader%22%2C%22SINGLE_CONTEXT_BLACKLIST%22%3A%5B%5D%2C%22USE_SUPERBUNDLE%22%3Atrue%2C%22USE_SMART_SSR%22%3A%221%22%2C%22SINGLE_CONTEXT%22%3Atrue%2C%22DEFAULT_SSR_FORMATS%22%3A%5B%22zen%22%2C%22zen2%22%2C%22zen2-gallery%22%2C%22billboard%22%2C%22horizontal%22%2C%22horizontal0318%22%2C%22constructor%22%2C%22modernAdaptive%22%5D%2C%22SSR_UNIFORMAT%22%3A%221%22%2C%22SSR_PERCENT_LOGGING%22%3A0.3"
		"%2C%22ADAPTIVE_TOWER_VIDEO%22%3A%22exp%22%2C%22DEFAULT_BLACKLIST_PAGES%22%3A%5B%22419507%22%2C%22419506%22%2C%22106253%22%2C%22188382%22%2C%22189903%22%5D%2C%22COMBO_PACKSHOT_EXP%22%3A%22exp%22%2C%22ADAPTIVE_320_50%22%3A%22exp%22%2C%22CUSTOM_DOMAIN_TEXT_FLAGS%22%3A%22exp%22%2C%22DISABLE_VIDEO_CONTROL%22%3A%22exp%22%2C%22SMART_BANNER_LAYOUT_VERSION%22%3A%22control%22%2C%22PCODEVER%22%3A%2214875%22%7D&server-side-rendering-enabled-formats="
		"zen%0Azen2%0Azen2-gallery%0Abillboard%0Ahorizontal%0Ahorizontal0318%0Aconstructor%0AmodernAdaptive&raw-smart-content=1&smart-format-names=smart-banner-adaptive_v1%0Asmart-banner-mosaic_v1&pcode-icookie=9367971191622790023&imp-id=383&test-tag=296318383685634&ad-session-id=3717531622790882357&target-id=28033088&tga-with-creatives=1&pcode-version=14875&pcodever=14875&flash-ver=0&available-width=240&available-height=400&layout-config="
		"%7B%22win_width%22%3A1920%2C%22win_height%22%3A965%2C%22pixel_ratio%22%3A1%2C%22bandwidth%22%3A-1%2C%22w%22%3A239%2C%22h%22%3A400%2C%22width%22%3A240%2C%22height%22%3A400%2C%22visible%22%3A1%2C%22left%22%3A95%2C%22top%22%3A637%2C%22ad_no%22%3A0%2C%22req_no%22%3A0%7D&uniformat=true&callback=Ya%5B2642153168989%5D", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t125.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded", 
		LAST);

	web_revert_auto_header("Origin");

	web_custom_request("cspreport.mail.ru_2", 
		"URL=https://cspreport.mail.ru/?v=1.0.1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t126.inf", 
		"Mode=HTML", 
		"EncType=application/csp-report", 
		"Body={\"csp-report\":{\"blocked-uri\":\"https://gum.criteo.com/sync?c=405&r=2&j=rtus_callback\",\"column-number\":33,\"document-uri\":\"https://light.mail.ru/message/16227901950678881342/?folder=0\",\"line-number\":57,\"original-policy\":\"default-src blob: wss://*.mail.ru https://www.google.com/recaptcha/ https://*.mail.ru https://*.yandex.ru https://*.radar.imgsmail.ru https://yastatic.net https://*.mradx.net https://*.imgsmail.ru; script-src 'self' 'unsafe-inline' 'unsafe-eval' https://"
		"*.mail.ru https://*.imgsmail.ru https://portal.mail.ru https://ad.mail.ru https://*.yandex.ru https://cdn.consentmanager.mgr.consensu.org https://consentmanager.mgr.consensu.org https://yastatic.net https://*.mradx.net; img-src data: blob: https: https://yastatic.net https://*.mradx.net https://*.imgsmail.ru; style-src 'self' 'unsafe-inline' 'unsafe-eval' https://*.mail.ru https://*.imgsmail.ru https://cdn.consentmanager.mgr.consensu.org https://consentmanager.mgr.consensu.org https://*.mradx.net;"
		" font-src data: https://*.mail.ru https://*.imgsmail.ru https://yastatic.net https://*.mradx.net; report-uri https://cspreport.mail.ru/?v=1.0.1\",\"referrer\":\"https://light.mail.ru/message/16227902031523885733/?folder=0\",\"source-file\":\"https://js.imgsmail.ru/mail/m/data/utf/ts/1622658806/light/js/build/app.min.js?v=3.240%20line%201%20%3E%20eval\",\"violated-directive\":\"script-src\"}}", 
		LAST);

	web_add_auto_header("Origin", 
		"https://light.mail.ru");

	web_url("142108_7", 
		"URL=https://an.yandex.ru/meta/142108?imp-id=385&target-ref=https%3A%2F%2Flight.mail.ru%2Fmessage%2F16227901950678881342%2F%3Ffolder%3D0&page-ref=https%3A%2F%2Flight.mail.ru%2Fmessage%2F16227902031523885733%2F%3Ffolder%3D0&ad-session-id=3717531622790882357&ss-skip-token-length=30&layout-config="
		"%7B%22win_width%22%3A1920%2C%22win_height%22%3A965%2C%22pixel_ratio%22%3A1%2C%22bandwidth%22%3A-1%2C%22w%22%3A1712.699951171875%2C%22h%22%3A0%2C%22width%22%3A1713%2C%22height%22%3A0%2C%22visible%22%3A1%2C%22left%22%3A359%2C%22top%22%3A161%2C%22req_no%22%3A0%2C%22ad_no%22%3A0%7D&test-tag=296318524981261&tga-with-creatives=1&return-widget-settings=1&yaw_ver=14875&pcodever=14875&use-server-side-rendering=1&pcode-test-ids="
		"363741%2C0%2C50%3B370897%2C0%2C40%3B362536%2C0%2C9%3B367340%2C0%2C6%3B369240%2C0%2C64%3B351578%2C0%2C94%3B367337%2C0%2C71%3B370390%2C0%2C71&available-width=1712.699951171875&pcode-icookie=6291871641622790023", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t127.inf", 
		"Mode=HTML", 
		LAST);

	web_url("142108_8", 
		"URL=https://mc.yandex.ru/watch/142108?wmode=7&page-url=https%3A%2F%2Flight.mail.ru%2Fmessage%2F16227901950678881342%2F%3Ffolder%3D0&page-ref=https%3A%2F%2Flight.mail.ru%2Fmessage%2F16227902031523885733%2F%3Ffolder%3D0&nohit=1&charset=utf-8&cnt-class=1&browser-info="
		"pv%3A1%3Agdpr%3A14%3Avf%3A1bo6nxnn5zutxu65%3Afu%3A0%3Aen%3Autf-8%3Ala%3Aru-RU%3Av%3A551%3Acn%3A1%3Adp%3A0%3Als%3A448983736298%3Ahid%3A828137612%3Az%3A180%3Ai%3A202106040101443%3Aet%3A1622790884%3Ac%3A1%3Arn%3A584394316%3Au%3A1622700309306886778%3Aw%3A1903x965%3As%3A1920x1080x24%3Ask%3A1%3Ans%3A1622790877632%3Arqnl%3A1%3Afip%3A0aa8960ff311d171379f7ecd0df7025a-a81f3b9bcdd80a361c14af38dc09b309-a81f3b9bcdd80a361c14af38dc09b309-4bd84c89c35a312599d807af285e7b5f-6456f00690ac9fc94dca4eb4fd6d061a-131e42c92"
		"37e3c82052c9abd4227fb0f-61b9878bbce18de73aafc8582a198c0c-a2394cfee1eb770b55e7f92fbaeda64c-a81f3b9bcdd80a361c14af38dc09b309-c6d7b47b2dcff33f80cab17f3a360d0b-2facd2c41a0047c68391f933b930bc3a%3Ati%3A2%3Ast%3A1622790884%3At%3Atest_nt_2%40mail.ru%20-%20%D0%9F%D0%BE%D1%87%D1%82%D0%B0%20Mail.ru", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t128.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("Origin");

	web_custom_request("ocsp.digicert.com_8", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t129.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"Body=0Q0O0M0K0I0\t+", 
		LAST);

	web_add_cookie("tmr_reqNum=339; DOMAIN=top-fwz1.mail.ru");

	web_add_auto_header("Origin", 
		"https://light.mail.ru");

	web_custom_request("tracker_22", 
		"URL=https://top-fwz1.mail.ru/tracker?js=13;id=110605;u=https%3A//light.mail.ru/message/16227901950678881342/%3Ffolder%3D0;r=https%3A//light.mail.ru/message/16227902031523885733/%3Ffolder%3D0;st=1622790879941;s=1920*1080;vp=1903*965;touch=0;hds=1;flash=;sid=fbc670636b51e786;ver=60.3.0;tz=-180%2FEurope%2FMoscow;nt=0/1/1622790877632/1780/1787/15/1235/1235/1235/1235/1235/1235/1235/1347/1747/1758/1777/2309/2333/2370/7260/7260/;ni=;detect=0;lvid="
		"1622531536446%3A1622790884900%3A335%3A80978b2cdef2874c0abc9091fc38bf0c;_=0.7195415914734781;e=RT/load;et=1622790884897", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t130.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_custom_request("tracker_23", 
		"URL=https://top-fwz1.mail.ru/tracker?js=13;id=2035946;u=https%3A//light.mail.ru/message/16227901950678881342/%3Ffolder%3D0;r=https%3A//light.mail.ru/message/16227902031523885733/%3Ffolder%3D0;st=1622790879941;s=1920*1080;vp=1903*965;touch=0;hds=1;flash=;sid=fbc670636b51e786;ver=60.3.0;tz=-180%2FEurope%2FMoscow;nt=0/1/1622790877632/1780/1787/15/1235/1235/1235/1235/1235/1235/1235/1347/1747/1758/1777/2309/2333/2370/7260/7260/;ni=;detect=0;lvid="
		"1622531536446%3A1622790884902%3A336%3A80978b2cdef2874c0abc9091fc38bf0c;opts=sec;_=0.5513811168659266;e=RT/load;et=1622790884897", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t131.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_add_cookie("VID=2vLEvU2oV6o200000U0yD4o2:::5d42b1e-0-0-5d03690:CAASEMxpP1JVzgjoclWbMUdaZpkaYOiOHHblUMnSQ4vYIbTzDmnDHm_1M4BWKhyzJbVLtYMVGHoKo_MO1Fs8HqG3csyVbsDF_vOaEKrEfXpHaE8rWsENkvBRLTFYf-U61trqNoRJUhlNOLGfTnGtkOgKxCQ8gw; DOMAIN=top-fwz1.mail.ru");

	web_custom_request("tracker_24", 
		"URL=https://top-fwz1.mail.ru/tracker?js=13;id=3123969;u=https%3A//light.mail.ru/message/16227901950678881342/%3Ffolder%3D0;r=https%3A//light.mail.ru/message/16227902031523885733/%3Ffolder%3D0;st=1622790879941;s=1920*1080;vp=1903*965;touch=0;hds=1;flash=;sid=fbc670636b51e786;ver=60.3.0;tz=-180%2FEurope%2FMoscow;nt=0/1/1622790877632/1780/1787/15/1235/1235/1235/1235/1235/1235/1235/1347/1747/1758/1777/2309/2333/2370/7260/7260/;ni=;detect=0;lvid="
		"1622531536446%3A1622790884908%3A337%3A80978b2cdef2874c0abc9091fc38bf0c;opts=sec;_=0.5116892547360596;e=RT/load;et=1622790884897", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t132.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_custom_request("tracker_25", 
		"URL=https://top-fwz1.mail.ru/tracker?js=13;id=3206667;u=https%3A//light.mail.ru/message/16227901950678881342/%3Ffolder%3D0;r=https%3A//light.mail.ru/message/16227902031523885733/%3Ffolder%3D0;st=1622790879941;userid=test_nt_2@mail.ru;s=1920*1080;vp=1903*965;touch=0;hds=1;flash=;sid=fbc670636b51e786;ver=60.3.0;tz=-180%2FEurope%2FMoscow;nt=0/1/1622790877632/1780/1787/15/1235/1235/1235/1235/1235/1235/1235/1347/1747/1758/1777/2309/2333/2370/7260/7260/;ni=;detect=0;lvid="
		"1622531536446%3A1622790884917%3A338%3A80978b2cdef2874c0abc9091fc38bf0c;opts=sec;_=0.913699893519726;e=RT/load;et=1622790884897", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t133.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_revert_auto_header("Origin");

	web_add_auto_header("Origin", 
		"https://light.mail.ru");

	web_custom_request("tracker_26", 
		"URL=https://top-fwz1.mail.ru/tracker?js=13;id=3210335;u=https%3A//light.mail.ru/message/16227901950678881342/%3Ffolder%3D0;r=https%3A//light.mail.ru/message/16227902031523885733/%3Ffolder%3D0;st=1622790879941;userid=test_nt_2@mail.ru;s=1920*1080;vp=1903*965;touch=0;hds=1;flash=;sid=fbc670636b51e786;ver=60.3.0;tz=-180%2FEurope%2FMoscow;nt=0/1/1622790877632/1780/1787/15/1235/1235/1235/1235/1235/1235/1235/1347/1747/1758/1777/2309/2333/2370/7260/7260/;ni=;detect=0;lvid="
		"1622531536446%3A1622790884922%3A339%3A80978b2cdef2874c0abc9091fc38bf0c;opts=sec;_=0.08638149780756121;e=RT/load;et=1622790884897", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t134.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_add_cookie("tmr_reqNum=344; DOMAIN=top-fwz1.mail.ru");

	web_add_cookie("VID=2vLEvU2oV6o200000U0yD4o2:::5d42b1e-0-0-5d03690:CAASEMVe6jFp56QXd-i5LxotfEAaYCZMjo2X4AWpNqydVroGQP0XhlPyz3pTOUNs2UMc_0IfyI0wQcjYqnGENkKDcklcuieyN9FAt300tVnDXLuZWXDY_jNk_9nzrMiRWVsiNRL5iEj9PBcCnvz0wxoetBWzpA; DOMAIN=top-fwz1.mail.ru");

	web_custom_request("tracker_27", 
		"URL=https://top-fwz1.mail.ru/tracker?js=13;id=3123969;u=https%3A//light.mail.ru/message/16227901950678881342/%3Ffolder%3D0;r=https%3A//light.mail.ru/message/16227902031523885733/%3Ffolder%3D0;st=1622790879941;s=1920*1080;vp=1903*965;touch=0;hds=1;flash=;sid=fbc670636b51e786;ver=60.3.0;tz=-180%2FEurope%2FMoscow;ni=;detect=0;lvid=1622531536446%3A1622790886964%3A342%3A80978b2cdef2874c0abc9091fc38bf0c;opts=sec;_=0.20983511313598147;e=RT/unload;et=1622790886957;pvt=7016", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t135.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_custom_request("tracker_28", 
		"URL=https://top-fwz1.mail.ru/tracker?js=13;id=2035946;u=https%3A//light.mail.ru/message/16227901950678881342/%3Ffolder%3D0;r=https%3A//light.mail.ru/message/16227902031523885733/%3Ffolder%3D0;st=1622790879941;s=1920*1080;vp=1903*965;touch=0;hds=1;flash=;sid=fbc670636b51e786;ver=60.3.0;tz=-180%2FEurope%2FMoscow;ni=;detect=0;lvid=1622531536446%3A1622790886963%3A341%3A80978b2cdef2874c0abc9091fc38bf0c;opts=sec;_=0.28401875901761564;e=RT/unload;et=1622790886957;pvt=7016", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t136.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_custom_request("tracker_29", 
		"URL=https://top-fwz1.mail.ru/tracker?js=13;id=110605;u=https%3A//light.mail.ru/message/16227901950678881342/%3Ffolder%3D0;r=https%3A//light.mail.ru/message/16227902031523885733/%3Ffolder%3D0;st=1622790879941;s=1920*1080;vp=1903*965;touch=0;hds=1;flash=;sid=fbc670636b51e786;ver=60.3.0;tz=-180%2FEurope%2FMoscow;ni=;detect=0;lvid=1622531536446%3A1622790886959%3A340%3A80978b2cdef2874c0abc9091fc38bf0c;_=0.4276657873756533;e=RT/unload;et=1622790886957;pvt=7016", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t137.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_custom_request("tracker_30", 
		"URL=https://top-fwz1.mail.ru/tracker?js=13;id=3210335;u=https%3A//light.mail.ru/message/16227901950678881342/%3Ffolder%3D0;r=https%3A//light.mail.ru/message/16227902031523885733/%3Ffolder%3D0;st=1622790879941;userid=test_nt_2@mail.ru;s=1920*1080;vp=1903*965;touch=0;hds=1;flash=;sid=fbc670636b51e786;ver=60.3.0;tz=-180%2FEurope%2FMoscow;ni=;detect=0;lvid=1622531536446%3A1622790886967%3A344%3A80978b2cdef2874c0abc9091fc38bf0c;opts=sec;_=0.2423076799540772;e=RT/unload;et=1622790886957;pvt=7016", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t138.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_custom_request("tracker_31", 
		"URL=https://top-fwz1.mail.ru/tracker?js=13;id=3206667;u=https%3A//light.mail.ru/message/16227901950678881342/%3Ffolder%3D0;r=https%3A//light.mail.ru/message/16227902031523885733/%3Ffolder%3D0;st=1622790879941;userid=test_nt_2@mail.ru;s=1920*1080;vp=1903*965;touch=0;hds=1;flash=;sid=fbc670636b51e786;ver=60.3.0;tz=-180%2FEurope%2FMoscow;ni=;detect=0;lvid=1622531536446%3A1622790886966%3A343%3A80978b2cdef2874c0abc9091fc38bf0c;opts=sec;_=0.953739660306397;e=RT/unload;et=1622790886957;pvt=7016", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t139.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_revert_auto_header("Origin");

	web_add_auto_header("Origin", 
		"https://light.mail.ru");

	web_custom_request("jstracer_6", 
		"URL=https://an.yandex.ru/jstracer?pcode_native=14875&values=performance&adb=false&verison=14875&bundle_version=14875&widget_pf=no", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t140.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"service\":\"pcode_native\",\"tags\":{\"B_010\":0,\"B_020\":0,\"B_030\":0,\"B_040\":0,\"B_050\":185,\"B_060\":3,\"M_010\":0,\"M_020\":0,\"M_030\":0,\"M_040\":0,\"M_050\":142,\"M_060\":29},\"labels\":{\"adb\":\"false\",\"verison\":\"14875\",\"bundle_version\":\"14875\",\"widget_pf\":\"no\",\"version\":\"14875\"},\"timestamp\":1622790885009,\"eventType\":\"values\",\"eventName\":\"performance\",\"data\":{\"adfox\":false,\"pcode\":false},\"sid\":\"3717531622790882357\",\"version\":\"14875\",\""
		"location\":\"https://light.mail.ru/message/16227901950678881342/?folder=0\",\"topLocation\":\"https://light.mail.ru/message/16227901950678881342/?folder=0\",\"topAncestor\":\"https://light.mail.ru\",\"ancestorOrigins\":[],\"documentIsVisible\":true,\"referrer\":\"https://light.mail.ru/message/16227902031523885733/?folder=0\",\"topReferrer\":\"https://light.mail.ru/message/16227902031523885733/?folder=0\",\"currentScriptSrc\":\"https://an.yandex.ru/system/widget.js\",\"secureIFrame\":false,\""
		"isVideoADB\":false,\"value\":1,\"rnd\":0.7823224173178457,\"topDocumentFocus\":true}", 
		LAST);

	web_add_cookie("tmr_reqNum=349; DOMAIN=top-fwz1.mail.ru");

	web_add_cookie("VID=2vLEvU2oV6o200000U0yD4o2:::5d42b1e-0-0-5d03690:CAASENxHV6AYV1fJg8_nHjrdsfkaYPsRr0BtNloknBsFigtWxcCzX6LVS0PIV_5ROZcWKkJF5gCy7zTTNzQ5cTM_fxH2YAxQf2klOBwgY4tUStnOdOIQtNUu3iLrXNwyeqDwFWT2W08HaXs7HzBmyzJkZ2FOhg; DOMAIN=top-fwz1.mail.ru");

	web_custom_request("counter_16", 
		"URL=https://top-fwz1.mail.ru/counter?js=13;id=110605;u=https%3A//light.mail.ru/cgi-bin/movemsg;r=https%3A//light.mail.ru/message/16227901950678881342/%3Ffolder%3D0;st=1622790888320;s=1920*1080;vp=1920*965;touch=0;hds=1;flash=;sid=98fd266fd722ad2b;ver=60.3.0;tz=-180%2FEurope%2FMoscow;ni=;detect=0;lvid=1622531536446%3A1622790888669%3A345%3A80978b2cdef2874c0abc9091fc38bf0c;_=0.05273392403843491", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t141.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_custom_request("counter_17", 
		"URL=https://top-fwz1.mail.ru/counter?js=13;id=2035946;u=https%3A//light.mail.ru/cgi-bin/movemsg;r=https%3A//light.mail.ru/message/16227901950678881342/%3Ffolder%3D0;st=1622790888320;s=1920*1080;vp=1920*965;touch=0;hds=1;flash=;sid=98fd266fd722ad2b;ver=60.3.0;tz=-180%2FEurope%2FMoscow;ni=;detect=0;lvid=1622531536446%3A1622790888670%3A346%3A80978b2cdef2874c0abc9091fc38bf0c;opts=sec;_=0.5269827414336669", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t142.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_revert_auto_header("Origin");

	web_custom_request("counter_18", 
		"URL=https://top-fwz1.mail.ru/counter?js=13;id=3123969;u=https%3A//light.mail.ru/cgi-bin/movemsg;r=https%3A//light.mail.ru/message/16227901950678881342/%3Ffolder%3D0;st=1622790888320;s=1920*1080;vp=1920*965;touch=0;hds=1;flash=;sid=98fd266fd722ad2b;ver=60.3.0;tz=-180%2FEurope%2FMoscow;ni=;detect=0;lvid=1622531536446%3A1622790888673%3A347%3A80978b2cdef2874c0abc9091fc38bf0c;opts=sec;_=0.20417286364533505", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t143.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_add_auto_header("Origin", 
		"https://light.mail.ru");

	web_custom_request("counter_19", 
		"URL=https://top-fwz1.mail.ru/counter?js=13;id=3210335;u=https%3A//light.mail.ru/cgi-bin/movemsg;r=https%3A//light.mail.ru/message/16227901950678881342/%3Ffolder%3D0;st=1622790888320;userid=;s=1920*1080;vp=1920*965;touch=0;hds=1;flash=;sid=98fd266fd722ad2b;ver=60.3.0;tz=-180%2FEurope%2FMoscow;ni=;detect=0;lvid=1622531536446%3A1622790888675%3A349%3A80978b2cdef2874c0abc9091fc38bf0c;opts=sec;_=0.3749911361355156", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t144.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_revert_auto_header("Origin");

	web_custom_request("counter_20", 
		"URL=https://top-fwz1.mail.ru/counter?js=13;id=3206667;u=https%3A//light.mail.ru/cgi-bin/movemsg;r=https%3A//light.mail.ru/message/16227901950678881342/%3Ffolder%3D0;st=1622790888320;userid=;s=1920*1080;vp=1920*965;touch=0;hds=1;flash=;sid=98fd266fd722ad2b;ver=60.3.0;tz=-180%2FEurope%2FMoscow;ni=;detect=0;lvid=1622531536446%3A1622790888674%3A348%3A80978b2cdef2874c0abc9091fc38bf0c;opts=sec;_=0.5630980727990078", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t145.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_add_cookie("tmr_reqNum=354; DOMAIN=top-fwz1.mail.ru");

	web_add_auto_header("Origin", 
		"https://light.mail.ru");

	web_custom_request("tracker_32", 
		"URL=https://top-fwz1.mail.ru/tracker?js=13;id=110605;u=https%3A//light.mail.ru/cgi-bin/movemsg;r=https%3A//light.mail.ru/message/16227901950678881342/%3Ffolder%3D0;st=1622790888320;s=1920*1080;vp=1920*965;touch=0;hds=1;flash=;sid=98fd266fd722ad2b;ver=60.3.0;tz=-180%2FEurope%2FMoscow;nt=0/0/1622790886956/952/960///12/12/12/12/12/12/739/942/957/951/1364/1368/1373/10038/10038/;ni=;detect=0;lvid=1622531536446%3A1622790896999%3A350%3A80978b2cdef2874c0abc9091fc38bf0c;_=0.5900582243131112;e=RT/load;et="
		"1622790896997", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t146.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_custom_request("tracker_33", 
		"URL=https://top-fwz1.mail.ru/tracker?js=13;id=2035946;u=https%3A//light.mail.ru/cgi-bin/movemsg;r=https%3A//light.mail.ru/message/16227901950678881342/%3Ffolder%3D0;st=1622790888320;s=1920*1080;vp=1920*965;touch=0;hds=1;flash=;sid=98fd266fd722ad2b;ver=60.3.0;tz=-180%2FEurope%2FMoscow;nt=0/0/1622790886956/952/960///12/12/12/12/12/12/739/942/957/951/1364/1368/1373/10038/10038/;ni=;detect=0;lvid=1622531536446%3A1622790897001%3A351%3A80978b2cdef2874c0abc9091fc38bf0c;opts=sec;_=0.8527263422745441;e=RT/"
		"load;et=1622790896997", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t147.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_custom_request("tracker_34", 
		"URL=https://top-fwz1.mail.ru/tracker?js=13;id=3123969;u=https%3A//light.mail.ru/cgi-bin/movemsg;r=https%3A//light.mail.ru/message/16227901950678881342/%3Ffolder%3D0;st=1622790888320;s=1920*1080;vp=1920*965;touch=0;hds=1;flash=;sid=98fd266fd722ad2b;ver=60.3.0;tz=-180%2FEurope%2FMoscow;nt=0/0/1622790886956/952/960///12/12/12/12/12/12/739/942/957/951/1364/1368/1373/10038/10038/;ni=;detect=0;lvid=1622531536446%3A1622790897006%3A352%3A80978b2cdef2874c0abc9091fc38bf0c;opts=sec;_=0.3824003593952987;e=RT/"
		"load;et=1622790896997", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t148.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_custom_request("tracker_35", 
		"URL=https://top-fwz1.mail.ru/tracker?js=13;id=3206667;u=https%3A//light.mail.ru/cgi-bin/movemsg;r=https%3A//light.mail.ru/message/16227901950678881342/%3Ffolder%3D0;st=1622790888320;userid=;s=1920*1080;vp=1920*965;touch=0;hds=1;flash=;sid=98fd266fd722ad2b;ver=60.3.0;tz=-180%2FEurope%2FMoscow;nt=0/0/1622790886956/952/960///12/12/12/12/12/12/739/942/957/951/1364/1368/1373/10038/10038/;ni=;detect=0;lvid=1622531536446%3A1622790897010%3A353%3A80978b2cdef2874c0abc9091fc38bf0c;opts=sec;_="
		"0.5272438245248494;e=RT/load;et=1622790896997", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t149.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_add_cookie("VID=2vLEvU2oV6o200000U0yD4o2:::5d42b1e-0-0-5d03690:CAASEJANbVJAGl7Gpn9CseEvpTIaYAaZzg4OG6mt4X3TvF6zyjrmZsPXtBxPMtuLJxiKd4H4hOlbJ62CFcDOeAmxekh7qL7rJJp-qWiPzAbGYoZw1gjxIAcuseSL8MT5OB12Q8uYRNp7i2LcHXiCsZfK2yrqbQ; DOMAIN=top-fwz1.mail.ru");

	web_custom_request("tracker_36", 
		"URL=https://top-fwz1.mail.ru/tracker?js=13;id=3210335;u=https%3A//light.mail.ru/cgi-bin/movemsg;r=https%3A//light.mail.ru/message/16227901950678881342/%3Ffolder%3D0;st=1622790888320;userid=;s=1920*1080;vp=1920*965;touch=0;hds=1;flash=;sid=98fd266fd722ad2b;ver=60.3.0;tz=-180%2FEurope%2FMoscow;nt=0/0/1622790886956/952/960///12/12/12/12/12/12/739/942/957/951/1364/1368/1373/10038/10038/;ni=;detect=0;lvid=1622531536446%3A1622790897013%3A354%3A80978b2cdef2874c0abc9091fc38bf0c;opts=sec;_="
		"0.36051901528337005;e=RT/load;et=1622790896997", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t150.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	lr_end_transaction("TRANSFER_LETTER",LR_AUTO);

	return 0;
}