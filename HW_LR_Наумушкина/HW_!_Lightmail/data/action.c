Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_custom_request("status.geotrust.com", 
		"URL=http://status.geotrust.com/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t133.inf", 
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
		"Snapshot=t134.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"Body=0Q0O0M0K0I0\t+", 
		LAST);

	web_custom_request("ocsp.digicert.com_2", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t135.inf", 
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
		"Snapshot=t136.inf", 
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
		"Snapshot=t137.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"Body=0Q0O0M0K0I0\t+", 
		LAST);

	web_custom_request("ocsp.digicert.com_5", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t138.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"Body=0Q0O0M0K0I0\t+", 
		LAST);

	web_add_cookie("mrcu=CE2D60B5DDCF61BFBB5A1324FC6D; DOMAIN=account.mail.ru");

	web_add_cookie("p=Do8AACWvkQAA; DOMAIN=account.mail.ru");

	web_add_cookie("i=AQBqcLhgAwATAAgEAXseAb0HCAQBghUBiQ0FAgEA; DOMAIN=account.mail.ru");

	web_add_cookie("s=octavius=1|fver=0|ww=1920|wh=976; DOMAIN=account.mail.ru");

	web_add_cookie("tmr_reqNum=189; DOMAIN=account.mail.ru");

	web_add_cookie("tmr_lvid=80978b2cdef2874c0abc9091fc38bf0c; DOMAIN=account.mail.ru");

	web_add_cookie("tmr_lvidTS=1622531536446; DOMAIN=account.mail.ru");

	web_add_cookie("b=XEkGAKDlQBUAb4S/C/U5wwwBAAAYMwAAGOP+NwlX66wL; DOMAIN=account.mail.ru");

	web_add_cookie("VID=2vLEvU2oV6o200000U0yD4o2:::5d2c979-0-0-5d03690:CAASEDJpmsgqryJBDAJLG4m_-o0aYL_POBa4M6EAxhK9PpVlcDRtOwIGpbdSFTvR6AeVbrLH80ZJO_j947qWWrEsVihQ23fsmv4V8L9IhOaWrHWU-QYSQJYKHpAwqOu02CVAOBUw6rkembm74JJbQc6T2vv-xQ; DOMAIN=account.mail.ru");

	web_add_cookie("searchuid=2383026761622531533; DOMAIN=account.mail.ru");

	web_add_cookie("c=dXS4YAQAEHsTAAAkAAAAMwbZIX/cvFAuAQAE; DOMAIN=account.mail.ru");

	web_add_cookie("t=obLD1AAAAAAIAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAACAAAAAAAAAAAAAACAAAYDzAcA; DOMAIN=account.mail.ru");

	web_add_cookie("Mpop=1619931920:5f06546f675775661905000017031f051c054f6c5150445e05190401041d455c43436e574d6700115c565c5b1b4341:test_nt_1@mail.ru:; DOMAIN=account.mail.ru");

	web_reg_find("Text=Авторизация", 
		LAST);

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("light.mail.ru", 
		"URL=https://light.mail.ru/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t139.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("ocsp.digicert.com_6", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t140.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"Body=0Q0O0M0K0I0\t+", 
		LAST);

	web_add_auto_header("Origin", 
		"https://account.mail.ru");

	lr_think_time(5);

	web_custom_request("batch", 
		"URL=https://account.mail.ru/api/v1/utils/xray/batch?p=login&split=s10273.b1s&pgid=kpgj5pys.bhk", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://account.mail.ru/login?page=https%3A%2F%2Flight.mail.ru%2Fmessages%2Finbox&allow_external=1", 
		"Snapshot=t141.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=batch="
		"%5B%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22t%22%3A%22pk-xray-ready%22%2C%22uid%22%3A%220%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22i%22%3A%22performance%3A1%2Cpublickey%3A1%2Cpk-available-api%3A1%22%2C%22t%22%3A%22html-load-detect%22%2C%22uid%22%3A%221%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22true%22%2C%22t%22%3A%22pk-device%22%2C%22i%22%3A%22type_unk%3A1%2Cexp_high%3A1%22%2C%22uid%22%3A%222%22%7D%2C%7B%22v%22%3A%224961%22%2C%22skipdwh%22%3A%22true%22"
		"%2C%22t%22%3A%22pk-nav-net%22%2C%22i%22%3A%22dns%3A10%2Ctcp%3A4726%2Crequest%3A0%2Cresponse%3A120%22%2C%22uid%22%3A%223%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22true%22%2C%22t%22%3A%22pk-conn%22%2C%22i%22%3A%22effective_type_unk%3A1%22%2C%22uid%22%3A%224%22%7D%2C%7B%22v%22%3A%2225524%22%2C%22skipdwh%22%3A%22true%22%2C%22t%22%3A%22pk-init%22%2C%22i%22%3A%22ver_300000002%3A1%2Cscore_very-slow%3A25524%22%2C%22uid%22%3A%225%22%7D%2C%7B%22v%22%3A%2281238%22%2C%22skipdwh%22%3A%22true%22%2C%22t%"
		"22%3A%22pk-tfc-dcl%22%2C%22i%22%3A%22encoded-size%3A81238%2Cdecoded-size%3A249323%2Ctransfer-size%3A77207%2Cencoded-size-s-100%3A81238%2Ctransfer-size-s-100%3A77207%2Csummary-count%3A2%2Cgzip-count%3A2%2Ctransfer-count%3A1%2Cunmeasurable-count%3A0%2Ce-p-h1-t-css-s-14%3A5957%2Ce-p-h1-t-css-c-1-s-14%3A5957%2Ce-p-h1-t-css-c-1-f-pkgs-s-14%3A5957%2Ce-p-h1-t-html-s-100%3A75281%2Ce-p-h1-t-html-c-0-s-100%3A75281%2Ce-p-h1-t-html-c-0-f-host-s-100%3A75281%22%2C%22uid%22%3A%226%22%7D%2C%7B%22v%22%3A%2225608%2"
		"2%2C%22skipdwh%22%3A%22true%22%2C%22t%22%3A%22pk-paint%22%2C%22i%22%3A%22first-contentful-paint%3A25608%2Cscore_poor%3A25608%22%2C%22uid%22%3A%227%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22i%22%3A%22all%3A1%2Cip%3A1%2Cfail_false%3A1%22%2C%22t%22%3A%22app_startup%22%2C%22uid%22%3A%228%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22i%22%3A%22false%3A1%22%2C%22t%22%3A%22pa-available%22%2C%22uid%22%3A%2210%22%7D%5D", 
		LAST);

	web_custom_request("batch_2", 
		"URL=https://account.mail.ru/api/v1/utils/xray/batch?p=login&split=s10273.b1s&pgid=kpgj5pys.bhk", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://account.mail.ru/login?page=https%3A%2F%2Flight.mail.ru%2Fmessages%2Finbox&allow_external=1", 
		"Snapshot=t142.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=batch=%5B%7B%22v%22%3A%2226390%22%2C%22skipdwh%22%3A%22true%22%2C%22t%22%3A%22pk-app-ready%22%2C%22i%22%3A%22success%3A26390%2Cscore_very-slow%3A26390%22%2C%22uid%22%3A%2211%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22i%22%3A%222s-vid-yes%3A26415%22%2C%22t%22%3A%22xsplit%22%2C%22uid%22%3A%2212%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22i%22%3A%222s-app-ready%3A26415%22%2C%22t%22%3A%22no-split%22%2C%22uid%22%3A%2213%22%7D%5D", 
		LAST);

	lr_think_time(19);

	lr_start_transaction("LOG_IN");

	web_custom_request("batch_3", 
		"URL=https://account.mail.ru/api/v1/utils/xray/batch?p=thirdpty&split=s10273.b1s&pgid=kpgj5pys.bhk", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://account.mail.ru/login?page=https%3A%2F%2Flight.mail.ru%2Fmessages%2Finbox&allow_external=1", 
		"Snapshot=t143.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=batch=%5B%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22t%22%3A%22call-set_c%22%2C%22uid%22%3A%229%22%7D%5D", 
		LAST);

	web_custom_request("batch_4", 
		"URL=https://account.mail.ru/api/v1/utils/xray/batch?p=login&split=s10273.b1s&pgid=kpgj5pys.bhk", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://account.mail.ru/login?page=https%3A%2F%2Flight.mail.ru%2Fmessages%2Finbox&allow_external=1", 
		"Snapshot=t144.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=batch="
		"%5B%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22i%22%3A%222s-device-type-desktop%3A26417%22%2C%22t%22%3A%22xsplit%22%2C%22uid%22%3A%2214%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22dwh%22%3A%22%7B%5C%22id%5C%22%3A%5C%22kpgj5qm90.bxjsi31y6k%5C%22%7D%22%2C%22i%22%3A%22desktop_enabled%3A1%22%2C%22t%22%3A%22qrauth%22%2C%22uid%22%3A%2215%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22dwh%22%3A%22%7B%5C%22id%5C%22%3A%5C%22kpgj5qm90.bxjsi31y6k%5C%22%7D%22%2"
		"C%22i%22%3A%22desktop_available_true%3A1%22%2C%22t%22%3A%22qrauth%22%2C%22uid%22%3A%2216%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22i%22%3A%22agload%3A1318%22%2C%22t%22%3A%22perf%22%2C%22uid%22%3A%2217%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22i%22%3A%22render-time%3A26578%22%2C%22t%22%3A%22perf%22%2C%22uid%22%3A%2218%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22i%22%3A%22ssr%3A15%2Cfrt%3A1319%22%2C%22t%22%3A%22perf%22%2C%22uid%22%3A%22"
		"19%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22i%22%3A%22default%3A1%22%2C%22t%22%3A%22render%22%2C%22uid%22%3A%2220%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22i%22%3A%22default%3A1%2Cp_light%3A1%22%2C%22t%22%3A%22render-login%22%2C%22uid%22%3A%2221%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22t%22%3A%22show%22%2C%22uid%22%3A%2222%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22t%22%3A%22xsplit-log_vid_yes%22%2C%22uid%22%3"
		"A%2223%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22t%22%3A%22xsplit-log_device-type_desktop%22%2C%22uid%22%3A%2224%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22t%22%3A%22xsplit-log_fast-auth-skin_skin-0%22%2C%22uid%22%3A%2225%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22t%22%3A%22xsplit-log_beard-skin_skin-0%22%2C%22uid%22%3A%2226%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22i%22%3A%22login_vk-show%3A1%2Cp_light%3A1%2Clog"
		"in_vk-show_p_light%3A1%22%2C%22t%22%3A%22bind_web%22%2C%22uid%22%3A%2227%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22dwh%22%3A%22%7B%5C%22id%5C%22%3A%5C%22kpgj5qm90.bxjsi31y6k%5C%22%7D%22%2C%22i%22%3A%22desktop_compact_mount%3A1%22%2C%22t%22%3A%22qrauth_1s%22%2C%22uid%22%3A%2228%22%7D%5D", 
		LAST);

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

	web_custom_request("init", 
		"URL=https://account.mail.ru/api/v1/auth/qr/init?login=&page=https%3A%2F%2Faccount.mail.ru%2Flogin%3Fpage%3Dhttps%253A%252F%252Flight.mail.ru%252Fmessages%252Finbox%26allow_external%3D1&redirect=https%3A%2F%2Flight.mail.ru%2Fmessages%2Finbox%3Fauthid%3Dkpgj5prz.fko%26dwhsplit%3Ds10273.b1s%26from%3Dlogin&source=polling", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://account.mail.ru/login?page=https%3A%2F%2Flight.mail.ru%2Fmessages%2Finbox&allow_external=1", 
		"Snapshot=t145.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_revert_auto_header("Origin");

	web_custom_request("ocsp.digicert.com_7", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t146.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"Body=0Q0O0M0K0I0\t+", 
		LAST);

	web_custom_request("ocsp.digicert.com_8", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t147.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"Body=0Q0O0M0K0I0\t+", 
		LAST);

	web_custom_request("status.geotrust.com_2", 
		"URL=http://status.geotrust.com/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t148.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"Body=0Q0O0M0K0I0\t+", 
		LAST);

	web_add_cookie("mrcu=CE2D60B5DDCF61BFBB5A1324FC6D; DOMAIN=portal.mail.ru");

	web_add_cookie("p=Do8AACWvkQAA; DOMAIN=portal.mail.ru");

	web_add_cookie("s=octavius=1|fver=0|ww=1920|wh=976; DOMAIN=portal.mail.ru");

	web_add_cookie("tmr_reqNum=189; DOMAIN=portal.mail.ru");

	web_add_cookie("tmr_lvid=80978b2cdef2874c0abc9091fc38bf0c; DOMAIN=portal.mail.ru");

	web_add_cookie("tmr_lvidTS=1622531536446; DOMAIN=portal.mail.ru");

	web_add_cookie("VID=2vLEvU2oV6o200000U0yD4o2:::5d2c979-0-0-5d03690:CAASEDJpmsgqryJBDAJLG4m_-o0aYL_POBa4M6EAxhK9PpVlcDRtOwIGpbdSFTvR6AeVbrLH80ZJO_j947qWWrEsVihQ23fsmv4V8L9IhOaWrHWU-QYSQJYKHpAwqOu02CVAOBUw6rkembm74JJbQc6T2vv-xQ; DOMAIN=portal.mail.ru");

	web_add_cookie("searchuid=2383026761622531533; DOMAIN=portal.mail.ru");

	web_add_cookie("c=dXS4YAQAEHsTAAAkAAAAMwbZIX/cvFAuAQAE; DOMAIN=portal.mail.ru");

	web_add_cookie("t=obLD1AAAAAAIAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAACAAAAAAAAAAAAAACAAAYDzAcA; DOMAIN=portal.mail.ru");

	web_add_cookie("Mpop=1619931920:5f06546f675775661905000017031f051c054f6c5150445e05190401041d455c43436e574d6700115c565c5b1b4341:test_nt_1@mail.ru:; DOMAIN=portal.mail.ru");

	web_add_header("Origin", 
		"https://account.mail.ru");

	web_url("NaviData", 
		"URL=https://portal.mail.ru/NaviData?mac=1&gamescnt=1&Socials=1&rnd=1622702478831", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://account.mail.ru/", 
		"Snapshot=t149.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("status.geotrust.com_3", 
		"URL=http://status.geotrust.com/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t150.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"Body=0Q0O0M0K0I0\t+", 
		LAST);

	web_custom_request("b27c3f40-9c0d-4aac-b42a-64405a882b98", 
		"URL=https://incoming.telemetry.mozilla.org/submit/messaging-system/undesired-events/1/b27c3f40-9c0d-4aac-b42a-64405a882b98", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t151.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body={\"experiments\":{\"bug-1690367-rollout-moving-webrtc-networking-functionality-into-i-release-87-100\":{\"branch\":\"active\"},\"bug-1703186-rollout-http3-support-release-88-89\":{\"branch\":\"active\"}},\"locale\":\"ru\",\"version\":\"88.0.1\",\"release_channel\":\"release\",\"event\":\"ASR_RS_NO_MESSAGES\",\"message_id\":\"n/a\",\"event_context\":\"whats-new-panel\",\"addon_version\":\"20210504152106\",\"impression_id\":\"{3d38b630-3cd6-4770-9f69-a19dd7074189}\"}", 
		LAST);

	web_custom_request("b766e40e-8009-4f4c-847e-fd07d0668105", 
		"URL=https://incoming.telemetry.mozilla.org/submit/messaging-system/undesired-events/1/b766e40e-8009-4f4c-847e-fd07d0668105", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t152.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body={\"experiments\":{\"bug-1690367-rollout-moving-webrtc-networking-functionality-into-i-release-87-100\":{\"branch\":\"active\"},\"bug-1703186-rollout-http3-support-release-88-89\":{\"branch\":\"active\"}},\"locale\":\"ru\",\"version\":\"88.0.1\",\"release_channel\":\"release\",\"event\":\"ASR_RS_NO_MESSAGES\",\"message_id\":\"n/a\",\"event_context\":\"whats-new-panel\",\"addon_version\":\"20210504152106\",\"impression_id\":\"{3d38b630-3cd6-4770-9f69-a19dd7074189}\"}", 
		LAST);

	web_custom_request("gts1o1core", 
		"URL=http://ocsp.pki.goog/gts1o1core", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t153.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"Body=0R0P0N0L0J0\t+", 
		LAST);

	web_custom_request("status.geotrust.com_4", 
		"URL=http://status.geotrust.com/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t154.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"Body=0Q0O0M0K0I0\t+", 
		LAST);

	web_add_header("Origin", 
		"https://account.mail.ru");

	web_add_header("qr-polling-retry", 
		"false");

	web_custom_request("polling", 
		"URL=https://account.mail.ru/api/v1/auth/qr/polling?token=AG_wrhc5DuJoOixgzt9k67ep&sign=6FtEFDlWWQWhYDCnGxsxaM6Rh5M3wqtABFrCwzRSng-QYOA4iXeDLsWy-Kw20aaJWAX7DLAaJTEn1lyhb-fpgCY=", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://account.mail.ru/login?page=https%3A%2F%2Flight.mail.ru%2Fmessages%2Finbox&allow_external=1", 
		"Snapshot=t155.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_custom_request("gsorganizationvalsha2g2", 
		"URL=http://ocsp2.globalsign.com/gsorganizationvalsha2g2", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t156.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"Body=0M0K0I0G0E0\t+", 
		LAST);

	web_custom_request("gsorganizationvalsha2g2_2", 
		"URL=http://ocsp2.globalsign.com/gsorganizationvalsha2g2", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t157.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"Body=0M0K0I0G0E0\t+", 
		LAST);

	web_add_auto_header("Origin", 
		"https://account.mail.ru");

	web_custom_request("batch_5", 
		"URL=https://account.mail.ru/api/v1/utils/xray/batch?p=login&split=s10273.b1s&pgid=kpgj5pys.bhk", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://account.mail.ru/login?page=https%3A%2F%2Flight.mail.ru%2Fmessages%2Finbox&allow_external=1", 
		"Snapshot=t158.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=batch=%5B%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22t%22%3A%22next-step-psw%22%2C%22uid%22%3A%2229%22%7D%5D", 
		LAST);

	web_custom_request("init_2", 
		"URL=https://account.mail.ru/api/v1/auth/qr/init?login=test_nt_1@mail.ru&page=https%3A%2F%2Faccount.mail.ru%2Flogin%3Fpage%3Dhttps%253A%252F%252Flight.mail.ru%252Fmessages%252Finbox%26allow_external%3D1&redirect=https%3A%2F%2Flight.mail.ru%2Fmessages%2Finbox%3Fauthid%3Dkpgj5prz.fko%26dwhsplit%3Ds10273.b1s%26from%3Dlogin&source=polling", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://account.mail.ru/login?page=https%3A%2F%2Flight.mail.ru%2Fmessages%2Finbox&allow_external=1", 
		"Snapshot=t159.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_revert_auto_header("Origin");

	web_add_header("Origin", 
		"https://account.mail.ru");

	web_url("login.vk.com", 
		"URL=https://login.vk.com/?act=connect&app_id=7539952&response_type=silent_token&uuid=VQBF2PumsD43eYGorNc_M&v=0.0.2", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://account.mail.ru/", 
		"Snapshot=t160.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("ce8561e0-20a8-4fe1-8fcd-3b14acef0960", 
		"URL=https://incoming.telemetry.mozilla.org/submit/messaging-system/whats-new-panel/1/ce8561e0-20a8-4fe1-8fcd-3b14acef0960", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t161.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body={\"experiments\":{\"bug-1690367-rollout-moving-webrtc-networking-functionality-into-i-release-87-100\":{\"branch\":\"active\"},\"bug-1703186-rollout-http3-support-release-88-89\":{\"branch\":\"active\"}},\"locale\":\"ru\",\"version\":\"88.0.1\",\"release_channel\":\"release\",\"message_id\":\"FXA_ACCOUNTS_BADGE\",\"event\":\"IMPRESSION\",\"addon_version\":\"20210504152106\",\"client_id\":\"6f375794-79e5-4070-8b47-ae5f290622f0\",\"browser_session_id\":\"d43234a8-0d85-423b-8378-14ac8dfd7b86\"}", 
		LAST);

	web_custom_request("gsrsaovsslca2018", 
		"URL=http://ocsp.globalsign.com/gsrsaovsslca2018", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t162.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"Body=0M0K0I0G0E0\t+", 
		LAST);

	web_add_auto_header("Origin", 
		"https://account.mail.ru");

	web_custom_request("batch_6", 
		"URL=https://account.mail.ru/api/v1/utils/xray/batch?p=login&split=s10273.b1s&pgid=kpgj5pys.bhk", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://account.mail.ru/login?page=https%3A%2F%2Flight.mail.ru%2Fmessages%2Finbox&allow_external=1", 
		"Snapshot=t163.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=batch=%5B%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22t%22%3A%22vkc-btn-user-fail%22%2C%22uid%22%3A%2233%22%7D%5D", 
		LAST);

	web_revert_auto_header("Origin");

	web_custom_request("batch_7", 
		"URL=https://account.mail.ru/api/v1/utils/xray/batch?p=thirdpty&split=s10273.b1s&pgid=kpgj5pys.bhk", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://account.mail.ru/login?page=https%3A%2F%2Flight.mail.ru%2Fmessages%2Finbox&allow_external=1", 
		"Snapshot=t164.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=batch=%5B%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22i%22%3A%22true%3A1%22%2C%22t%22%3A%22resolve-set_c%22%2C%22uid%22%3A%2230%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22t%22%3A%22call-check_c_one%22%2C%22uid%22%3A%2231%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22t%22%3A%22call-check_c_two%22%2C%22uid%22%3A%2232%22%7D%5D", 
		LAST);

	web_custom_request("20210504152106", 
		"URL=https://incoming.telemetry.mozilla.org/submit/telemetry/699d92f8-f995-499b-bd9b-f12f9c25e565/main/Firefox/88.0.1/release/20210504152106?v=4", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t165.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		body_variable_1, 
		LAST);

	web_add_auto_header("Origin", 
		"https://account.mail.ru");

	lr_think_time(6);

	web_custom_request("batch_8", 
		"URL=https://account.mail.ru/api/v1/utils/xray/batch?p=thirdpty&split=s10273.b1s&pgid=kpgj5pys.bhk", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://account.mail.ru/login?page=https%3A%2F%2Flight.mail.ru%2Fmessages%2Finbox&allow_external=1", 
		"Snapshot=t166.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=batch=%5B%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22i%22%3A%22true%3A1%22%2C%22t%22%3A%22resolve-check_c_one%22%2C%22uid%22%3A%2234%22%7D%5D", 
		LAST);

	web_revert_auto_header("Origin");

	web_add_header("qr-polling-retry", 
		"false");

	web_custom_request("polling_2", 
		"URL=https://account.mail.ru/api/v1/auth/qr/polling?token=AG_AXpy0EHGFoIj2cuMlNQYf&sign=VFPN-J4X2-kxH2uCowve0QKtl5upAMxqiRFR3-J3b6PlR-rG1pyCZRrtkMSNpwsLqX-EuDxhHzdwlltwzVUvkl0=", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://account.mail.ru/login?page=https%3A%2F%2Flight.mail.ru%2Fmessages%2Finbox&allow_external=1", 
		"Snapshot=t167.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_add_cookie("mrcu=CE2D60B5DDCF61BFBB5A1324FC6D; DOMAIN=auth.mail.ru");

	web_add_cookie("p=Do8AACWvkQAA; DOMAIN=auth.mail.ru");

	web_add_cookie("s=octavius=1|fver=0|ww=1920|wh=976; DOMAIN=auth.mail.ru");

	web_add_cookie("tmr_reqNum=189; DOMAIN=auth.mail.ru");

	web_add_cookie("tmr_lvid=80978b2cdef2874c0abc9091fc38bf0c; DOMAIN=auth.mail.ru");

	web_add_cookie("tmr_lvidTS=1622531536446; DOMAIN=auth.mail.ru");

	web_add_cookie("VID=2vLEvU2oV6o200000U0yD4o2:::5d2c979-0-0-5d03690:CAASEDJpmsgqryJBDAJLG4m_-o0aYL_POBa4M6EAxhK9PpVlcDRtOwIGpbdSFTvR6AeVbrLH80ZJO_j947qWWrEsVihQ23fsmv4V8L9IhOaWrHWU-QYSQJYKHpAwqOu02CVAOBUw6rkembm74JJbQc6T2vv-xQ; DOMAIN=auth.mail.ru");

	web_add_cookie("searchuid=2383026761622531533; DOMAIN=auth.mail.ru");

	web_add_cookie("c=dXS4YAQAEHsTAAAkAAAAMwbZIX/cvFAuAQAE; DOMAIN=auth.mail.ru");

	web_add_cookie("GarageID=1cce872166ff447fb6c39cd55f703c10; DOMAIN=auth.mail.ru");

	web_add_cookie("ssdc_info=d60c:0:1622700216; DOMAIN=auth.mail.ru");

	web_add_cookie("t=obLD1AAAAAAIAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAACAAAAAAAAAAAAAACAAAYDzAcA; DOMAIN=auth.mail.ru");

	web_add_cookie("Mpop=1619931920:5f06546f675775661905000017031f051c054f6c5150445e05190401041d455c43436e574d6700115c565c5b1b4341:test_nt_1@mail.ru:; DOMAIN=auth.mail.ru");

	web_add_cookie("ssdc=d60cd42ca0d8409d850bebf0aecd12cd; DOMAIN=auth.mail.ru");

	web_add_auto_header("Origin", 
		"https://account.mail.ru");

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

	web_websocket_send("ID=0", 
		"Buffer={\"messageType\":\"hello\",\"broadcasts\":{\"remote-settings/monitor_changes\":\"\\\"1622689038027\\\"\"},\"use_webpush\":true}", 
		"IsBinary=0", 
		LAST);

	web_websocket_connect("ID=0", 
		"URI=wss://account.mail.ru/api/v1/utils/xray/batch?p=login&split=s10273.b1s&pgid=kpgj5pys.bhk", 
		"Origin=wss://push.services.mozilla.com/", 
		"OnOpenCB=OnOpenCB0", 
		"OnMessageCB=OnMessageCB0", 
		"OnErrorCB=OnErrorCB0", 
		"OnCloseCB=OnCloseCB0", 
		LAST);

	web_custom_request("batch_10", 
		"URL=https://account.mail.ru/api/v1/utils/xray/batch?p=thirdpty&split=s10273.b1s&pgid=kpgj5pys.bhk", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://account.mail.ru/login?page=https%3A%2F%2Flight.mail.ru%2Fmessages%2Finbox&allow_external=1", 
		"Snapshot=t170.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=batch=%5B%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22i%22%3A%22true%3A1%22%2C%22t%22%3A%22resolve-check_c_two%22%2C%22uid%22%3A%2247%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22i%22%3A%22true_true%3A1%22%2C%22t%22%3A%22result%22%2C%22uid%22%3A%2248%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22t%22%3A%22ok%22%2C%22uid%22%3A%2249%22%7D%5D", 
		LAST);

	/*Connection ID 0 received buffer WebSocketReceive0*/

	web_add_header("qr-polling-retry", 
		"true");

	lr_think_time(8);

	web_custom_request("polling_3", 
		"URL=https://account.mail.ru/api/v1/auth/qr/polling?token=AG_AXpy0EHGFoIj2cuMlNQYf&sign=VFPN-J4X2-kxH2uCowve0QKtl5upAMxqiRFR3-J3b6PlR-rG1pyCZRrtkMSNpwsLqX-EuDxhHzdwlltwzVUvkl0=", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://account.mail.ru/login?page=https%3A%2F%2Flight.mail.ru%2Fmessages%2Finbox&allow_external=1", 
		"Snapshot=t171.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_revert_auto_header("Origin");

	lr_think_time(7);

	web_url("NaviData_2", 
		"URL=https://portal.mail.ru/NaviData?mac=1&gamescnt=1&Socials=1&rnd=1622702538842", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://account.mail.ru/", 
		"Snapshot=t172.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Origin", 
		"https://account.mail.ru");

	web_custom_request("batch_11", 
		"URL=https://account.mail.ru/api/v1/utils/xray/batch?p=login&email=test_nt_1%40mail.ru&split=s10273.b1s&pgid=kpgj5pys.bhk", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://account.mail.ru/login?page=https%3A%2F%2Flight.mail.ru%2Fmessages%2Finbox&allow_external=1", 
		"Snapshot=t173.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=batch=%5B%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22dwh%22%3A%22%7B%5C%22id%5C%22%3A%5C%22kpgj5qm90.bxjsi31y6k%5C%22%7D%22%2C%22i%22%3A%22desktop_f-auth_password_0%3A1%22%2C%22t%22%3A%22qrauth_2s%22%2C%22uid%22%3A%2260%22%7D%5D", 
		LAST);

	web_add_cookie("mrcu=CE2D60B5DDCF61BFBB5A1324FC6D; DOMAIN=light.mail.ru");

	web_add_cookie("p=Do8AACWvkQAA; DOMAIN=light.mail.ru");

	web_add_cookie("tmr_reqNum=189; DOMAIN=light.mail.ru");

	web_add_cookie("tmr_lvid=80978b2cdef2874c0abc9091fc38bf0c; DOMAIN=light.mail.ru");

	web_add_cookie("tmr_lvidTS=1622531536446; DOMAIN=light.mail.ru");

	web_add_cookie("VID=2vLEvU2oV6o200000U0yD4o2:::5d2c979-0-0-5d03690:CAASEDJpmsgqryJBDAJLG4m_-o0aYL_POBa4M6EAxhK9PpVlcDRtOwIGpbdSFTvR6AeVbrLH80ZJO_j947qWWrEsVihQ23fsmv4V8L9IhOaWrHWU-QYSQJYKHpAwqOu02CVAOBUw6rkembm74JJbQc6T2vv-xQ; DOMAIN=light.mail.ru");

	web_add_cookie("searchuid=2383026761622531533; DOMAIN=light.mail.ru");

	web_add_cookie("c=dXS4YAQAEHsTAAAkAAAAMwbZIX/cvFAuAQAE; DOMAIN=light.mail.ru");

	web_add_cookie("sdcs=fBSyXeukpNZHnWIj; DOMAIN=light.mail.ru");

	web_add_cookie("tmr_detect=0%7C1622700307738; DOMAIN=light.mail.ru");

	web_reg_find("Text=&#40;5&#41; Входящие - test_nt_1@mail.ru - Почта Mail.ru", 
		LAST);

	web_revert_auto_header("Origin");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_submit_data("auth", 
		"Action=https://auth.mail.ru/cgi-bin/auth", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://account.mail.ru/", 
		"Snapshot=t174.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=username", "Value=test_nt_1@mail.ru", ENDITEM, 
		"Name=Login", "Value=test_nt_1@mail.ru", ENDITEM, 
		"Name=password", "Value=F5g784r3", ENDITEM, 
		"Name=Password", "Value=F5g784r3", ENDITEM, 
		"Name=saveauth", "Value=1", ENDITEM, 
		"Name=new_auth_form", "Value=1", ENDITEM, 
		"Name=FromAccount", "Value=opener=account&allow_external=1&twoSteps=1", ENDITEM, 
		"Name=act_token", "Value=12a6e26869ef4572b6babc792c2b7f82", ENDITEM, 
		"Name=page", "Value=https://light.mail.ru/messages/inbox?authid=kpgj5prz.fko&dwhsplit=s10273.b1s&from=login", ENDITEM, 
		"Name=lang", "Value=ru_RU", ENDITEM, 
		LAST);

	web_custom_request("status.geotrust.com_5", 
		"URL=http://status.geotrust.com/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t175.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"Body=0Q0O0M0K0I0\t+", 
		LAST);

	web_add_cookie("mrcu=CE2D60B5DDCF61BFBB5A1324FC6D; DOMAIN=top-fwz1.mail.ru");

	web_add_cookie("p=Do8AACWvkQAA; DOMAIN=top-fwz1.mail.ru");

	web_add_cookie("tmr_reqNum=194; DOMAIN=top-fwz1.mail.ru");

	web_add_cookie("tmr_lvid=80978b2cdef2874c0abc9091fc38bf0c; DOMAIN=top-fwz1.mail.ru");

	web_add_cookie("tmr_lvidTS=1622531536446; DOMAIN=top-fwz1.mail.ru");

	web_add_cookie("searchuid=2383026761622531533; DOMAIN=top-fwz1.mail.ru");

	web_add_header("Origin", 
		"https://light.mail.ru");

	web_custom_request("counter", 
		"URL=https://top-fwz1.mail.ru/counter?js=13;id=110605;u=https%3A//light.mail.ru/messages/inbox%3Fauthid%3Dkpgj5prz.fko%26dwhsplit%3Ds10273.b1s%26from%3Dlogin;r=https%3A//account.mail.ru/;st=1622702540295;s=1920*1080;vp=1920*976;touch=0;hds=1;flash=;sid=612a2253eec82f0a;ver=60.3.0;tz=-180%2FEurope%2FMoscow;ni=;detect=0;lvid=1622531536446%3A1622702541182%3A190%3A80978b2cdef2874c0abc9091fc38bf0c;_=0.06211440480287511", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t176.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_custom_request("status.geotrust.com_6", 
		"URL=http://status.geotrust.com/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t177.inf", 
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
		"Snapshot=t178.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"Body=0Q0O0M0K0I0\t+", 
		LAST);

	web_add_cookie("VID=2vLEvU2oV6o200000U0yD4o2:::5d2d28c-0-0-5d03690:CAASEP19LRdLtaw7-8OybFz6CXUaYOfYHJxgmZgLClGVhiwkBBTiCQ74GlLGjIOjEeYSjEHzZEvA8X0fnMtKGN5WnmH3dURUhYmIyqoIexcF5JIX4nISiRN8D141NqNhTtmtXJ8DVpNvmiJEr61CBmipKBa18Q; DOMAIN=top-fwz1.mail.ru");

	web_add_auto_header("Origin", 
		"https://light.mail.ru");

	web_custom_request("counter_2", 
		"URL=https://top-fwz1.mail.ru/counter?js=13;id=2035946;u=https%3A//light.mail.ru/messages/inbox%3Fauthid%3Dkpgj5prz.fko%26dwhsplit%3Ds10273.b1s%26from%3Dlogin;r=https%3A//account.mail.ru/;st=1622702540295;s=1920*1080;vp=1920*976;touch=0;hds=1;flash=;sid=612a2253eec82f0a;ver=60.3.0;tz=-180%2FEurope%2FMoscow;ni=;detect=0;lvid=1622531536446%3A1622702541184%3A191%3A80978b2cdef2874c0abc9091fc38bf0c;opts=sec;_=0.2942318635680109", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t179.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_revert_auto_header("Origin");

	web_custom_request("counter_3", 
		"URL=https://top-fwz1.mail.ru/counter?js=13;id=3206667;u=https%3A//light.mail.ru/messages/inbox%3Fauthid%3Dkpgj5prz.fko%26dwhsplit%3Ds10273.b1s%26from%3Dlogin;r=https%3A//account.mail.ru/;st=1622702540295;userid=test_nt_1@mail.ru;s=1920*1080;vp=1920*976;touch=0;hds=1;flash=;sid=612a2253eec82f0a;ver=60.3.0;tz=-180%2FEurope%2FMoscow;ni=;detect=0;lvid=1622531536446%3A1622702541188%3A193%3A80978b2cdef2874c0abc9091fc38bf0c;opts=sec;_=0.31100113123178985", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t180.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_add_cookie("VID=2vLEvU2oV6o200000U0yD4o2:::5d2d28c-0-0-5d03690:CAASEI-yAVRuwGu3lqnURyeFjbUaYNox3wHZDeaCiagnb1gXDtnoTTRzPDesacF7m1tEOSkYiQbGMIkPW3hC1jm8wQwgP5jtLPBldvK-7zaCH7TGdyPsDT5ZQkZk3-2OQGQv8LVy8cqEhxB515DvwWKD5-tBPQ; DOMAIN=top-fwz1.mail.ru");

	web_add_header("Origin", 
		"https://light.mail.ru");

	web_custom_request("counter_4", 
		"URL=https://top-fwz1.mail.ru/counter?js=13;id=3210335;u=https%3A//light.mail.ru/messages/inbox%3Fauthid%3Dkpgj5prz.fko%26dwhsplit%3Ds10273.b1s%26from%3Dlogin;r=https%3A//account.mail.ru/;st=1622702540295;userid=test_nt_1@mail.ru;s=1920*1080;vp=1920*976;touch=0;hds=1;flash=;sid=612a2253eec82f0a;ver=60.3.0;tz=-180%2FEurope%2FMoscow;ni=;detect=0;lvid=1622531536446%3A1622702541190%3A194%3A80978b2cdef2874c0abc9091fc38bf0c;opts=sec;_=0.12640135176822198", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t181.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_custom_request("status.geotrust.com_8", 
		"URL=http://status.geotrust.com/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t182.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"Body=0Q0O0M0K0I0\t+", 
		LAST);

	web_custom_request("status.geotrust.com_9", 
		"URL=http://status.geotrust.com/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t183.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"Body=0Q0O0M0K0I0\t+", 
		LAST);

	web_add_cookie("VID=2vLEvU2oV6o200000U0yD4o2:::5d2d28c-0-0-5d03690:CAASEIOj2NNYJnL1v9UXUTTsGWEaYImm5oec5rB6LuWbz6GFc_uD9_9BuhblqfmU1YHME-oVUaVasaJYunvdrPY4hOJnD2Mee19ytVJJRc07p1nplRp8tr0ZxIopG0U6PH7UhOM-jjkrfArAG8DLz4iMssAYug; DOMAIN=top-fwz1.mail.ru");

	web_add_header("Origin", 
		"https://light.mail.ru");

	web_custom_request("counter_5", 
		"URL=https://top-fwz1.mail.ru/counter?js=13;id=3123969;u=https%3A//light.mail.ru/messages/inbox%3Fauthid%3Dkpgj5prz.fko%26dwhsplit%3Ds10273.b1s%26from%3Dlogin;r=https%3A//account.mail.ru/;st=1622702540295;s=1920*1080;vp=1920*976;touch=0;hds=1;flash=;sid=612a2253eec82f0a;ver=60.3.0;tz=-180%2FEurope%2FMoscow;ni=;detect=0;lvid=1622531536446%3A1622702541185%3A192%3A80978b2cdef2874c0abc9091fc38bf0c;opts=sec;_=0.8693772180681765", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t184.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_custom_request("status.geotrust.com_10", 
		"URL=http://status.geotrust.com/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t185.inf", 
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
		"Snapshot=t186.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"Body=0Q0O0M0K0I0\t+", 
		LAST);

	web_add_auto_header("Origin", 
		"https://light.mail.ru");

	web_custom_request("cspreport.mail.ru", 
		"URL=https://cspreport.mail.ru/?v=1.0.1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t187.inf", 
		"Mode=HTML", 
		"EncType=application/csp-report", 
		"Body={\"csp-report\":{\"blocked-uri\":\"https://gum.criteo.com/sync?c=405&r=2&j=rtus_callback\",\"column-number\":33,\"document-uri\":\"https://light.mail.ru/messages/inbox?authid=kpgj5prz.fko&dwhsplit=s10273.b1s&from=login\",\"line-number\":57,\"original-policy\":\"default-src blob: wss://*.mail.ru https://www.google.com/recaptcha/ https://*.mail.ru https://*.yandex.ru https://*.radar.imgsmail.ru https://yastatic.net https://*.mradx.net https://*.imgsmail.ru; script-src 'self' 'unsafe-inline' "
		"'unsafe-eval' https://*.mail.ru https://*.imgsmail.ru https://portal.mail.ru https://ad.mail.ru https://*.yandex.ru https://cdn.consentmanager.mgr.consensu.org https://consentmanager.mgr.consensu.org https://yastatic.net https://*.mradx.net; img-src data: blob: https: https://yastatic.net https://*.mradx.net https://*.imgsmail.ru; style-src 'self' 'unsafe-inline' 'unsafe-eval' https://*.mail.ru https://*.imgsmail.ru https://cdn.consentmanager.mgr.consensu.org https://"
		"consentmanager.mgr.consensu.org https://*.mradx.net; font-src data: https://*.mail.ru https://*.imgsmail.ru https://yastatic.net https://*.mradx.net; report-uri https://cspreport.mail.ru/?v=1.0.1\",\"referrer\":\"https://account.mail.ru/\",\"source-file\":\"https://js.imgsmail.ru/mail/m/data/utf/ts/1620726240/light/js/build/app.min.js?v=3.240%20line%201%20%3E%20eval\",\"violated-directive\":\"script-src\"}}", 
		LAST);

	lr_end_transaction("LOG_IN",LR_AUTO);

	web_revert_auto_header("Origin");

	web_custom_request("jstracer", 
		"URL=https://an.yandex.ru/jstracer?pcode_native=14870&values=performance&adb=false&verison=14870&bundle_version=14870&widget_pf=no", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t188.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"service\":\"pcode_native\",\"tags\":{\"L_010\":0,\"L_020\":0,\"L_030\":0,\"L_040\":0,\"L_050\":1178,\"L_060\":5},\"labels\":{\"adb\":\"false\",\"verison\":\"14870\",\"bundle_version\":\"14870\",\"widget_pf\":\"no\",\"version\":\"14870\"},\"timestamp\":1622702543201,\"eventType\":\"values\",\"eventName\":\"performance\",\"data\":{\"adfox\":false,\"pcode\":false},\"sid\":\"3475311622702543191\",\"version\":\"14870\",\"location\":\"https://light.mail.ru/messages/inbox?authid=kpgj5prz.fko&"
		"dwhsplit=s10273.b1s&from=login\",\"topLocation\":\"https://light.mail.ru/messages/inbox?authid=kpgj5prz.fko&dwhsplit=s10273.b1s&from=login\",\"topAncestor\":\"https://light.mail.ru\",\"ancestorOrigins\":[],\"documentIsVisible\":true,\"referrer\":\"https://account.mail.ru/\",\"topReferrer\":\"https://account.mail.ru/\",\"currentScriptSrc\":\"https://an.yandex.ru/system/widget.js\",\"secureIFrame\":false,\"isVideoADB\":false,\"value\":1,\"rnd\":0.7738349836405093,\"topDocumentFocus\":false}", 
		LAST);

	lr_start_transaction("CREATE_LETTER");

	web_add_cookie("tmr_reqNum=199; DOMAIN=top-fwz1.mail.ru");

	web_add_header("Origin", 
		"https://light.mail.ru");

	web_custom_request("tracker", 
		"URL=https://top-fwz1.mail.ru/tracker?js=13;id=2035946;u=https%3A//light.mail.ru/messages/inbox%3Fauthid%3Dkpgj5prz.fko%26dwhsplit%3Ds10273.b1s%26from%3Dlogin;r=https%3A//account.mail.ru/;st=1622702540295;s=1920*1080;vp=1903*976;touch=0;hds=1;flash=;sid=612a2253eec82f0a;ver=60.3.0;tz=-180%2FEurope%2FMoscow;ni=;detect=0;lvid=1622531536446%3A1622702557025%3A196%3A80978b2cdef2874c0abc9091fc38bf0c;opts=sec;_=0.4519487893381765;e=RT/unload;et=1622702557023;pvt=16728", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t189.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_custom_request("r3.o.lencr.org", 
		"URL=http://r3.o.lencr.org/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t190.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"Body=0S0Q0O0M0K0\t+", 
		LAST);

	web_add_cookie("tmr_reqNum=199; DOMAIN=light.mail.ru");

	web_add_cookie("VID=2vLEvU2oV6o200000U0yD4o2:::5d2d28c-0-0-5d03690:CAASEG4qGDBSA9FzbKHPSpXAjacaYEpyfxEZcf-9CalDG35ZFuIepe-OJnmjdmeR_R5j2_GK726-ocDjIRgH5lVU8YwW8WjIDDVlWT5IYfoLojTtIm30JLkHN7NOG4zkkLVWMUA3rZjzjE47Bziou1wAiFBHuQ; DOMAIN=light.mail.ru");

	web_add_cookie("tmr_detect=0%7C1622702543804; DOMAIN=light.mail.ru");

	web_reg_find("Text=Новое письмо - test_nt_1@mail.ru - Почта Mail.ru", 
		LAST);

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("compose", 
		"URL=https://light.mail.ru/compose/?folder=0", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://light.mail.ru/messages/inbox?authid=kpgj5prz.fko&dwhsplit=s10273.b1s&from=login", 
		"Snapshot=t191.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("VID=2vLEvU2oV6o200000U0yD4o2:::5d2d28c-0-0-5d03690:CAASEG4qGDBSA9FzbKHPSpXAjacaYEpyfxEZcf-9CalDG35ZFuIepe-OJnmjdmeR_R5j2_GK726-ocDjIRgH5lVU8YwW8WjIDDVlWT5IYfoLojTtIm30JLkHN7NOG4zkkLVWMUA3rZjzjE47Bziou1wAiFBHuQ; DOMAIN=top-fwz1.mail.ru");

	web_add_header("Origin", 
		"https://light.mail.ru");

	web_custom_request("tracker_2", 
		"URL=https://top-fwz1.mail.ru/tracker?js=13;id=110605;u=https%3A//light.mail.ru/messages/inbox%3Fauthid%3Dkpgj5prz.fko%26dwhsplit%3Ds10273.b1s%26from%3Dlogin;r=https%3A//account.mail.ru/;st=1622702540295;s=1920*1080;vp=1903*976;touch=0;hds=1;flash=;sid=612a2253eec82f0a;ver=60.3.0;tz=-180%2FEurope%2FMoscow;ni=;detect=0;lvid=1622531536446%3A1622702557024%3A195%3A80978b2cdef2874c0abc9091fc38bf0c;_=0.7807455590194532;e=RT/unload;et=1622702557023;pvt=16728", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t192.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	lr_think_time(4);

	web_custom_request("r3.o.lencr.org_2", 
		"URL=http://r3.o.lencr.org/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t193.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"Body=0S0Q0O0M0K0\t+", 
		LAST);

	web_add_auto_header("Origin", 
		"https://light.mail.ru");

	web_custom_request("tracker_3", 
		"URL=https://top-fwz1.mail.ru/tracker?js=13;id=3206667;u=https%3A//light.mail.ru/messages/inbox%3Fauthid%3Dkpgj5prz.fko%26dwhsplit%3Ds10273.b1s%26from%3Dlogin;r=https%3A//account.mail.ru/;st=1622702540295;userid=test_nt_1@mail.ru;s=1920*1080;vp=1903*976;touch=0;hds=1;flash=;sid=612a2253eec82f0a;ver=60.3.0;tz=-180%2FEurope%2FMoscow;ni=;detect=0;lvid=1622531536446%3A1622702557028%3A198%3A80978b2cdef2874c0abc9091fc38bf0c;opts=sec;_=0.1292536311931689;e=RT/unload;et=1622702557023;pvt=16728", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t194.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_custom_request("tracker_4", 
		"URL=https://top-fwz1.mail.ru/tracker?js=13;id=3123969;u=https%3A//light.mail.ru/messages/inbox%3Fauthid%3Dkpgj5prz.fko%26dwhsplit%3Ds10273.b1s%26from%3Dlogin;r=https%3A//account.mail.ru/;st=1622702540295;s=1920*1080;vp=1903*976;touch=0;hds=1;flash=;sid=612a2253eec82f0a;ver=60.3.0;tz=-180%2FEurope%2FMoscow;ni=;detect=0;lvid=1622531536446%3A1622702557027%3A197%3A80978b2cdef2874c0abc9091fc38bf0c;opts=sec;_=0.3519580908426835;e=RT/unload;et=1622702557023;pvt=16728", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t195.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_revert_auto_header("Origin");

	web_custom_request("yandex.ocsp-responder.com_2", 
		"URL=http://yandex.ocsp-responder.com/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t196.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"Body=0Q0O0M0K0I0\t+", 
		LAST);

	web_custom_request("yandex.ocsp-responder.com_3", 
		"URL=http://yandex.ocsp-responder.com/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t197.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"Body=0Q0O0M0K0I0\t+", 
		LAST);

	web_custom_request("ocsp.sca1b.amazontrust.com", 
		"URL=http://ocsp.sca1b.amazontrust.com/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t198.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"Body=0Q0O0M0K0I0\t+", 
		LAST);

	web_custom_request("yandex.ocsp-responder.com_4", 
		"URL=http://yandex.ocsp-responder.com/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t199.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"Body=0Q0O0M0K0I0\t+", 
		LAST);

	web_add_auto_header("Origin", 
		"https://light.mail.ru");

	web_custom_request("tracker_5", 
		"URL=https://top-fwz1.mail.ru/tracker?js=13;id=3210335;u=https%3A//light.mail.ru/messages/inbox%3Fauthid%3Dkpgj5prz.fko%26dwhsplit%3Ds10273.b1s%26from%3Dlogin;r=https%3A//account.mail.ru/;st=1622702540295;userid=test_nt_1@mail.ru;s=1920*1080;vp=1903*976;touch=0;hds=1;flash=;sid=612a2253eec82f0a;ver=60.3.0;tz=-180%2FEurope%2FMoscow;ni=;detect=0;lvid=1622531536446%3A1622702557030%3A199%3A80978b2cdef2874c0abc9091fc38bf0c;opts=sec;_=0.22045746288575574;e=RT/unload;et=1622702557023;pvt=16728", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t200.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_add_cookie("tmr_reqNum=204; DOMAIN=top-fwz1.mail.ru");

	web_add_cookie("VID=2vLEvU2oV6o200000U0yD4o2:::5d2d28c-0-0-5d03690:CAASEBUjZJQMVUp8Z-YGPagiMQoaYHsWHwRpTeSounWo9qsQvL3fr3sj3ZC2Nf0tRDfZgLwhpm6HSk7C8zS6qa6drvk6ioQTXElF-S2JLZMV5XrgSeL4j7NV9bWroxIn4N_FCjRh1Cs-HSTGtP-HIBaTH0GOBQ; DOMAIN=top-fwz1.mail.ru");

	web_custom_request("counter_6", 
		"URL=https://top-fwz1.mail.ru/counter?js=13;id=110605;u=https%3A//light.mail.ru/compose/%3Ffolder%3D0;r=https%3A//light.mail.ru/messages/inbox%3Fauthid%3Dkpgj5prz.fko%26dwhsplit%3Ds10273.b1s%26from%3Dlogin;st=1622702564017;s=1920*1080;vp=1903*976;touch=0;hds=1;flash=;sid=94835849e3d5524e;ver=60.3.0;tz=-180%2FEurope%2FMoscow;ni=;detect=0;lvid=1622531536446%3A1622702564477%3A200%3A80978b2cdef2874c0abc9091fc38bf0c;_=0.5619086147762821", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t201.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_custom_request("counter_7", 
		"URL=https://top-fwz1.mail.ru/counter?js=13;id=3123969;u=https%3A//light.mail.ru/compose/%3Ffolder%3D0;r=https%3A//light.mail.ru/messages/inbox%3Fauthid%3Dkpgj5prz.fko%26dwhsplit%3Ds10273.b1s%26from%3Dlogin;st=1622702564017;s=1920*1080;vp=1903*976;touch=0;hds=1;flash=;sid=94835849e3d5524e;ver=60.3.0;tz=-180%2FEurope%2FMoscow;ni=;detect=0;lvid=1622531536446%3A1622702564480%3A202%3A80978b2cdef2874c0abc9091fc38bf0c;opts=sec;_=0.687364040371795", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t202.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_revert_auto_header("Origin");

	web_custom_request("counter_8", 
		"URL=https://top-fwz1.mail.ru/counter?js=13;id=2035946;u=https%3A//light.mail.ru/compose/%3Ffolder%3D0;r=https%3A//light.mail.ru/messages/inbox%3Fauthid%3Dkpgj5prz.fko%26dwhsplit%3Ds10273.b1s%26from%3Dlogin;st=1622702564017;s=1920*1080;vp=1903*976;touch=0;hds=1;flash=;sid=94835849e3d5524e;ver=60.3.0;tz=-180%2FEurope%2FMoscow;ni=;detect=0;lvid=1622531536446%3A1622702564479%3A201%3A80978b2cdef2874c0abc9091fc38bf0c;opts=sec;_=0.3939290994548158", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t203.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_add_cookie("b=XEkHAKDlQBUAb4S/C/U5wwwBAAAYMwAAGOP+NwlX66wLlwk4DAAA; DOMAIN=top-fwz1.mail.ru");

	web_add_cookie("c=zXm4YAQAEHsTAAAkAAAAMwbZIX/svFAuAQAE; DOMAIN=top-fwz1.mail.ru");

	web_add_auto_header("Origin", 
		"https://light.mail.ru");

	lr_think_time(4);

	web_custom_request("counter_9", 
		"URL=https://top-fwz1.mail.ru/counter?js=13;id=3206667;u=https%3A//light.mail.ru/compose/%3Ffolder%3D0;r=https%3A//light.mail.ru/messages/inbox%3Fauthid%3Dkpgj5prz.fko%26dwhsplit%3Ds10273.b1s%26from%3Dlogin;st=1622702564017;userid=test_nt_1@mail.ru;s=1920*1080;vp=1903*976;touch=0;hds=1;flash=;sid=94835849e3d5524e;ver=60.3.0;tz=-180%2FEurope%2FMoscow;ni=;detect=0;lvid=1622531536446%3A1622702564483%3A203%3A80978b2cdef2874c0abc9091fc38bf0c;opts=sec;_=0.008943330300021812", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t204.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_revert_auto_header("Origin");

	web_custom_request("counter_10", 
		"URL=https://top-fwz1.mail.ru/counter?js=13;id=3210335;u=https%3A//light.mail.ru/compose/%3Ffolder%3D0;r=https%3A//light.mail.ru/messages/inbox%3Fauthid%3Dkpgj5prz.fko%26dwhsplit%3Ds10273.b1s%26from%3Dlogin;st=1622702564017;userid=test_nt_1@mail.ru;s=1920*1080;vp=1903*976;touch=0;hds=1;flash=;sid=94835849e3d5524e;ver=60.3.0;tz=-180%2FEurope%2FMoscow;ni=;detect=0;lvid=1622531536446%3A1622702564485%3A204%3A80978b2cdef2874c0abc9091fc38bf0c;opts=sec;_=0.830000768182401", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t205.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_custom_request("20210504152106_2", 
		"URL=https://incoming.telemetry.mozilla.org/submit/telemetry/644c228b-9d12-4e02-859d-570ecab4aacb/main/Firefox/88.0.1/release/20210504152106?v=4", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t206.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body={\"type\":\"main\",\"id\":\"644c228b-9d12-4e02-859d-570ecab4aacb\",\"creationDate\":\"2021-06-03T06:40:11.519Z\",\"version\":4,\"application\":{\"architecture\":\"x86-64\",\"buildId\":\"20210504152106\",\"name\":\"Firefox\",\"version\":\"88.0.1\",\"displayVersion\":\"88.0.1\",\"vendor\":\"Mozilla\",\"platformVersion\":\"88.0.1\",\"xpcomAbi\":\"x86_64-msvc\",\"channel\":\"release\"},\"payload\":{\"ver\":4,\"simpleMeasurements\":{\"totalTime\":62,\"start\":206,\"main\":511,\"selectProfile\":530"
		",\"afterProfileLocked\":532,\"startupCrashDetectionBegin\":1220,\"startupCrashDetectionEnd\":33741,\"firstPaint\":2508,\"firstPaint2\":2839,\"sessionRestoreInit\":1372,\"sessionRestored\":3172,\"createTopLevelWindow\":612,\"blankWindowShown\":1215,\"AMI_startup_begin\":1240,\"XPI_startup_begin\":1254,\"XPI_bootstrap_addons_begin\":1260,\"XPI_bootstrap_addons_end\":1286,\"XPI_startup_end\":1287,\"AMI_startup_end\":1287,\"XPI_finalUIStartup\":1373,\"sessionRestoreInitialized\":1374,\""
		"delayedStartupStarted\":2890,\"delayedStartupFinished\":2959,\"sessionRestoreRestoring\":3075,\"startupInterrupted\":0,\"debuggerAttached\":0,\"startupWindowVisibleReadBytes\":1967243,\"startupWindowVisibleWriteBytes\":138324,\"startupSessionRestoreReadBytes\":22880406,\"startupSessionRestoreWriteBytes\":181452,\"activeTicks\":5},\"processes\":{\"parent\":{\"scalars\":{\"networking.loading_certs_task\":61,\"os.environment.is_taskbar_pinned\":false,\"contentblocking.fingerprinting_blocking_enabled"
		"\":true,\"browser.engagement.max_concurrent_tab_count\":6,\"startup.is_cold\":false,\"contentblocking.cryptomining_blocking_enabled\":true,\"blocklist.mlbf_enabled\":true,\"browser.engagement.session_time_including_suspend\":61620,\"a11y.backplate\":true,\"browser.engagement.unfiltered_uri_count\":1,\"browser.engagement.total_uri_count_normal_and_private_mode\":1,\"browser.searchinit.init_result_status_code\":\"0\",\"browser.engagement.max_concurrent_window_count\":1,\""
		"security.https_only_mode_enabled_pbm\":0,\"os.environment.is_admin_without_uac\":false,\"networking.http3_enabled\":false,\"browser.engagement.unique_domains_count\":1,\"browser.engagement.session_time_excluding_suspend\":61620,\"script.preloader.mainthread_recompile\":7,\"browser.engagement.total_uri_count\":1,\"timestamps.first_paint_two\":2838,\"networking.nss_initialization\":34,\"formautofill.availability\":false,\"dom.contentprocess.os_priority_change_considered\":2,\"blocklist.mlbf_stashes"
		"\":true,\"os.environment.launch_method\":\"Other\",\"widget.dark_mode\":false,\"startup.profile_selection_reason\":\"default\",\"startup.seconds_since_last_os_restart\":165631,\"security.https_only_mode_enabled\":0,\"contentblocking.category\":0,\"gfx.os_compositor\":true,\"browser.engagement.active_ticks\":5,\"browser.startup.abouthome_cache_result\":7,\"startup.skeleton_ui_disabled_reason\":\"EnabledKeyDoesNotExist\",\"browser.engagement.max_concurrent_tab_pinned_count\":0,\""
		"timestamps.first_paint\":2508},\"keyedScalars\":{\"a11y.theme\":{\"default\":false},\"networking.data_transferred_v3_kb\":{\"Y1_N1\":160,\"Y0_N1Sys\":0,\"Y4_N3BasicBg\":0,\"Y2_N3Oth\":4,\"Y5_N3BasicOth\":0},\"browser.ui.toolbar_widgets\":{\"library-button_pinned_nav-bar-end\":true,\"bookmark_pinned_pageaction-urlbar\":true,\"drag-space_pinned_off\":true,\"new-tab-button_pinned_tabs-bar\":true,\"downloads-button_pinned_nav-bar-end\":true,\"stop-reload-button_pinned_nav-bar-start\":true,\""
		"menu-toolbar_pinned_off\":true,\"home-button_pinned_nav-bar-start\":true,\"personal-bookmarks_pinned_bookmarks-bar\":true,\"import-button_pinned_bookmarks-bar\":true,\"tabbrowser-tabs_pinned_tabs-bar\":true,\"titlebar_pinned_off\":true,\"fxa-toolbar-menu-button_pinned_nav-bar-end\":true,\"pocket_pinned_pageaction-urlbar\":true,\"alltabs-button_pinned_tabs-bar\":true,\"sidebar-button_pinned_nav-bar-end\":true,\"forward-button_pinned_nav-bar-start\":true,\"menubar-items_pinned_menu-bar\":true,\""
		"back-button_pinned_nav-bar-start\":true,\"bookmarks-bar_pinned_newtab\":true},\"browser.engagement.sessionrestore_interstitial\":{\"autorestore\":1},\"telemetry.event_counts\":{\"doh#state#rollback\":1}}},\"content\":{\"histograms\":{\"CYCLE_COLLECTOR_MAX_PAUSE\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":3,\"range\":[1,10000],\"values\":{\"0\":6,\"1\":3,\"2\":0}},\"GC_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":50,\"range\":[1,10000],\"values\":{\"0\":0,\"1\":4,\"2\":1,\"4\":1,"
		"\"7\":1,\"14\":1,\"17\":1,\"20\":0}},\"GC_BUDGET_MS_2\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":486,\"range\":[1,200],\"values\":{\"4\":0,\"5\":4,\"6\":1,\"9\":1,\"10\":1,\"11\":2,\"13\":1,\"14\":1,\"46\":8,\"50\":0}},\"GC_ANIMATION_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":32,\"range\":[1,10000],\"values\":{\"0\":6,\"2\":2,\"4\":1,\"10\":1,\"14\":1,\"17\":0}},\"GC_MAX_PAUSE_MS_2\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":41,\"range\":[1,10000],\"values\":{\"0\":0,"
		"\"1\":4,\"2\":1,\"4\":1,\"7\":1,\"10\":1,\"14\":1,\"17\":0}},\"GC_PREPARE_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":1,\"range\":[1,1000],\"values\":{\"0\":8,\"1\":1,\"2\":0}},\"GC_MARK_ROOTS_US\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":2523,\"range\":[1,150000],\"values\":{\"25\":0,\"32\":1,\"104\":1,\"167\":2,\"211\":3,\"427\":1,\"683\":1,\"863\":0}},\"GC_MARK_GRAY_MS_2\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":0,\"range\":[1,10000],\"values\":{\"0\":9,\"1\":0}},"
		"\"GC_MARK_WEAK_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":0,\"range\":[1,10000],\"values\":{\"0\":9,\"1\":0}},\"GC_PRETENURE_COUNT_2\":{\"bucket_count\":20,\"histogram_type\":0,\"sum\":0,\"range\":[1,100],\"values\":{\"0\":21,\"1\":0}},\"GC_TENURED_SURVIVAL_RATE\":{\"bucket_count\":50,\"histogram_type\":1,\"sum\":857,\"range\":[1,100],\"values\":{\"90\":0,\"92\":4,\"96\":3,\"98\":2,\"100\":0}},\"GC_TIME_BETWEEN_S\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":48,\"range\":[1,120],"
		"\"values\":{\"0\":4,\"4\":2,\"8\":2,\"23\":1,\"25\":0}},\"GC_TIME_BETWEEN_SLICES_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":222,\"range\":[1,2000],\"values\":{\"0\":4,\"5\":2,\"7\":1,\"8\":1,\"25\":1,\"29\":4,\"44\":1,\"50\":0}},\"GC_SLICE_COUNT\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":19,\"range\":[1,200],\"values\":{\"1\":0,\"2\":2,\"4\":1,\"5\":1,\"6\":1,\"7\":0}},\"GC_EFFECTIVENESS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":134,\"range\":[1,50000],\"values\":{"
		"\"0\":0,\"1\":1,\"9\":1,\"14\":1,\"15\":2,\"17\":3,\"28\":1,\"31\":0}},\"TOTAL_CONTENT_PAGE_LOAD_TIME\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":30654,\"range\":[100,30000],\"values\":{\"28305\":0,\"30000\":1}},\"HTTP_PAGE_DNS_ISSUE_TIME\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":22,\"range\":[1,30000],\"values\":{\"16\":0,\"20\":1,\"24\":0}},\"HTTP_PAGE_DNS_LOOKUP_TIME\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":4,\"range\":[1,30000],\"values\":{\"3\":0,\"4\":1,\"5\":0}"
		"},\"HTTP_PAGE_TLS_HANDSHAKE\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":58,\"range\":[1,30000],\"values\":{\"43\":0,\"52\":1,\"63\":0}},\"HTTP_PAGE_TCP_CONNECTION_2\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":81,\"range\":[1,30000],\"values\":{\"63\":0,\"77\":1,\"94\":0}},\"HTTP_SUB_DNS_LOOKUP_TIME\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":42,\"range\":[1,30000],\"values\":{\"0\":13,\"4\":3,\"5\":1,\"7\":2,\"9\":1,\"11\":0}},\"SCRIPT_PRELOADER_REQUESTS\":{\"bucket_count\""
		":51,\"histogram_type\":5,\"sum\":94,\"range\":[1,50],\"values\":{\"0\":77,\"2\":47,\"3\":0}},\"SCRIPT_PRELOADER_WAIT_TIME\":{\"bucket_count\":20,\"histogram_type\":0,\"sum\":0,\"range\":[1,10000],\"values\":{\"0\":26,\"1\":0}},\"INPUT_EVENT_RESPONSE_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":10613,\"range\":[1,10000],\"values\":{\"0\":21,\"1\":7,\"2\":5,\"3\":10,\"4\":17,\"5\":10,\"6\":15,\"7\":21,\"8\":47,\"10\":60,\"12\":60,\"14\":98,\"17\":77,\"20\":79,\"24\":36,\"29\":8,\"34\":2,\""
		"40\":4,\"48\":2,\"81\":2,\"1062\":2,\"1262\":0}},\"INPUT_EVENT_RESPONSE_COALESCED_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":4989,\"range\":[1,10000],\"values\":{\"0\":6,\"1\":2,\"2\":1,\"3\":4,\"4\":9,\"5\":6,\"6\":6,\"7\":9,\"8\":18,\"10\":23,\"12\":27,\"14\":19,\"17\":2,\"20\":5,\"24\":12,\"29\":4,\"34\":1,\"40\":4,\"48\":4,\"57\":4,\"68\":2,\"81\":1,\"114\":1,\"135\":1,\"160\":2,\"190\":2,\"226\":1,\"1062\":1,\"1262\":0}},\"MASTER_PASSWORD_ENABLED\":{\"bucket_count\":3,\""
		"histogram_type\":3,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":1,\"1\":0}},\"PWMGR_FORM_AUTOFILL_RESULT\":{\"bucket_count\":21,\"histogram_type\":1,\"sum\":4,\"range\":[1,20],\"values\":{\"3\":0,\"4\":1,\"5\":0}},\"PWMGR_LOGIN_PAGE_SAFETY\":{\"bucket_count\":9,\"histogram_type\":1,\"sum\":0,\"range\":[1,8],\"values\":{\"0\":2,\"1\":0}},\"CONTENT_DOCUMENTS_DESTROYED\":{\"bucket_count\":3,\"histogram_type\":4,\"sum\":11,\"range\":[1,2],\"values\":{\"0\":11,\"1\":0}},\""
		"WEBFONT_DOWNLOAD_TIME_AFTER_START\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":24294,\"range\":[1,60000],\"values\":{\"16532\":0,\"20494\":1,\"25406\":0}},\"JS_EXECUTION_PROPORTION\":{\"bucket_count\":20,\"histogram_type\":1,\"sum\":3,\"range\":[1,100],\"values\":{\"0\":0,\"1\":1,\"7\":0}},\"JS_DELAZIFICATION_PROPORTION\":{\"bucket_count\":20,\"histogram_type\":1,\"sum\":10,\"range\":[1,100],\"values\":{\"1\":0,\"7\":1,\"12\":0}},\"JS_XDR_ENCODING_PROPORTION\":{\"bucket_count\":20,\""
		"histogram_type\":1,\"sum\":0,\"range\":[1,100],\"values\":{\"0\":1,\"1\":0}},\"JS_BASELINE_COMPILE_PROPORTION\":{\"bucket_count\":20,\"histogram_type\":1,\"sum\":2,\"range\":[1,100],\"values\":{\"0\":0,\"1\":1,\"7\":0}},\"JS_BYTECODE_CACHING_TIME\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":4,\"range\":[1,10000],\"values\":{\"3\":0,\"4\":1,\"5\":0}},\"CONTENT_PAINT_TIME\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":3883,\"range\":[1,1000],\"values\":{\"0\":29,\"1\":431,\"2\":684,\"3"
		"\":347,\"4\":178,\"5\":34,\"6\":6,\"7\":3,\"8\":1,\"10\":4,\"14\":1,\"20\":2,\"23\":0}},\"TIME_TO_NON_BLANK_PAINT_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":24305,\"range\":[1,100000],\"values\":{\"20868\":0,\"23166\":1,\"25717\":0}},\"TIME_TO_FIRST_CONTENTFUL_PAINT_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":24326,\"range\":[1,100000],\"values\":{\"20868\":0,\"23166\":1,\"25717\":0}},\"TIME_TO_DOM_LOADING_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":24076,\""
		"range\":[1,50000],\"values\":{\"12\":0,\"13\":1,\"23196\":1,\"25533\":0}},\"TIME_TO_DOM_INTERACTIVE_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":24298,\"range\":[1,50000],\"values\":{\"19\":0,\"21\":1,\"23196\":1,\"25533\":0}},\"TIME_TO_DOM_CONTENT_LOADED_START_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":24329,\"range\":[1,50000],\"values\":{\"34\":0,\"37\":1,\"23196\":1,\"25533\":0}},\"TIME_TO_DOM_CONTENT_LOADED_END_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\""
		":24378,\"range\":[1,50000],\"values\":{\"74\":0,\"81\":1,\"23196\":1,\"25533\":0}},\"TIME_TO_DOM_COMPLETE_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":54598,\"range\":[1,50000],\"values\":{\"81\":0,\"89\":1,\"50000\":1}},\"TIME_TO_LOAD_EVENT_START_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":54598,\"range\":[1,50000],\"values\":{\"81\":0,\"89\":1,\"50000\":1}},\"TIME_TO_LOAD_EVENT_END_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":54599,\"range\":[1,50000],\"values\""
		":{\"81\":0,\"89\":1,\"50000\":1}},\"TIME_TO_RESPONSE_START_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":23972,\"range\":[1,50000],\"values\":{\"21073\":0,\"23196\":1,\"25533\":0}},\"PERF_PAGE_LOAD_TIME_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":54503,\"range\":[1,50000],\"values\":{\"45423\":0,\"50000\":1}},\"PERF_PAGE_LOAD_TIME_FROM_RESPONSESTART_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":30532,\"range\":[1,50000],\"values\":{\"25533\":0,\"28106\":1,\"30938\""
		":0}},\"PERF_DOM_CONTENT_LOADED_TIME_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":24290,\"range\":[1,50000],\"values\":{\"21073\":0,\"23196\":1,\"25533\":0}},\"PERF_DOM_CONTENT_LOADED_TIME_FROM_RESPONSESTART_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":319,\"range\":[1,50000],\"values\":{\"281\":0,\"309\":1,\"340\":0}},\"PERF_FIRST_CONTENTFUL_PAINT_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":24326,\"range\":[1,50000],\"values\":{\"21073\":0,\"23196\":1,\"25533\":0}"
		"},\"PERF_FIRST_CONTENTFUL_PAINT_FROM_RESPONSESTART_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":355,\"range\":[1,50000],\"values\":{\"309\":0,\"340\":1,\"374\":0}},\"PERF_REQUEST_ANIMATION_CALLBACK_NON_PAGELOAD_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":2,\"range\":[1,5000],\"values\":{\"0\":221,\"1\":2,\"2\":0}},\"PERF_REQUEST_ANIMATION_CALLBACK_PAGELOAD_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":41,\"range\":[1,5000],\"values\":{\"0\":1648,\"1\":18,\"2\":1,\""
		"9\":1,\"12\":1,\"13\":0}},\"REL_PRELOAD_MISS_RATIO\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":12,\"range\":[1,50],\"values\":{\"0\":10,\"2\":6,\"3\":0}},\"USE_COUNTER2_CSS_PROPERTY_FillRule_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_FillOpacity_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\""
		"USE_COUNTER2_CSS_PROPERTY_StrokeWidth_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Fill_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":6,\"range\":[1,2],\"values\":{\"0\":0,\"1\":6,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Stroke_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Height_DOCUMENT\":{"
		"\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Width_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}}},\"keyedHistograms\":{},\"scalars\":{\"telemetry.discarded.accumulations\":0,\"telemetry.discarded.scalar_actions\":0,\"telemetry.discarded.keyed_accumulations\":0,\"networking.http3_enabled\":true,\"script.preloader.mainthread_recompile\":26,\""
		"telemetry.discarded.child_events\":0,\"telemetry.discarded.keyed_scalar_actions\":0},\"keyedScalars\":{}},\"extension\":{\"histograms\":{\"CYCLE_COLLECTOR_MAX_PAUSE\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":1,\"range\":[1,10000],\"values\":{\"0\":1,\"1\":1,\"2\":0}},\"GC_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":9,\"range\":[1,10000],\"values\":{\"1\":0,\"2\":2,\"5\":1,\"6\":0}},\"GC_BUDGET_MS_2\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":343,\"range\":[1,200],\""
		"values\":{\"43\":0,\"46\":7,\"50\":0}},\"GC_MAX_PAUSE_MS_2\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":9,\"range\":[1,10000],\"values\":{\"1\":0,\"2\":2,\"5\":1,\"6\":0}},\"GC_PREPARE_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":0,\"range\":[1,1000],\"values\":{\"0\":3,\"1\":0}},\"GC_MARK_ROOTS_US\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":1256,\"range\":[1,150000],\"values\":{\"82\":0,\"104\":1,\"427\":1,\"540\":1,\"683\":0}},\"GC_MARK_GRAY_MS_2\":{\"bucket_count\":50,"
		"\"histogram_type\":0,\"sum\":0,\"range\":[1,10000],\"values\":{\"0\":3,\"1\":0}},\"GC_MARK_WEAK_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":0,\"range\":[1,10000],\"values\":{\"0\":3,\"1\":0}},\"GC_PRETENURE_COUNT_2\":{\"bucket_count\":20,\"histogram_type\":0,\"sum\":0,\"range\":[1,100],\"values\":{\"0\":9,\"1\":0}},\"GC_TENURED_SURVIVAL_RATE\":{\"bucket_count\":50,\"histogram_type\":1,\"sum\":266,\"range\":[1,100],\"values\":{\"73\":0,\"75\":1,\"92\":1,\"98\":1,\"100\":0}},\""
		"GC_TIME_BETWEEN_S\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":14,\"range\":[1,120],\"values\":{\"0\":1,\"4\":1,\"10\":1,\"11\":0}},\"GC_TIME_BETWEEN_SLICES_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":145,\"range\":[1,2000],\"values\":{\"22\":0,\"25\":1,\"29\":4,\"33\":0}},\"GC_SLICE_COUNT\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":7,\"range\":[1,200],\"values\":{\"2\":0,\"3\":1,\"4\":1,\"5\":0}},\"GC_EFFECTIVENESS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":223"
		",\"range\":[1,50000],\"values\":{\"9\":0,\"10\":1,\"11\":1,\"192\":1,\"211\":0}},\"SCRIPT_PRELOADER_REQUESTS\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":34,\"range\":[1,50],\"values\":{\"0\":21,\"2\":17,\"3\":0}},\"SCRIPT_PRELOADER_WAIT_TIME\":{\"bucket_count\":20,\"histogram_type\":0,\"sum\":0,\"range\":[1,10000],\"values\":{\"0\":4,\"1\":0}},\"MASTER_PASSWORD_ENABLED\":{\"bucket_count\":3,\"histogram_type\":3,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":1,\"1\":0}},\""
		"CONTENT_DOCUMENTS_DESTROYED\":{\"bucket_count\":3,\"histogram_type\":4,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":4,\"1\":0}},\"CONTENT_PAINT_TIME\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":0,\"range\":[1,1000],\"values\":{\"0\":19,\"1\":0}},\"TIME_TO_DOM_LOADING_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":1007,\"range\":[1,50000],\"values\":{\"192\":0,\"211\":1,\"255\":3,\"281\":0}},\"TIME_TO_DOM_INTERACTIVE_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":1388,\""
		"range\":[1,50000],\"values\":{\"255\":0,\"281\":1,\"309\":1,\"340\":1,\"374\":1,\"412\":0}},\"TIME_TO_DOM_CONTENT_LOADED_START_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":1471,\"range\":[1,50000],\"values\":{\"281\":0,\"309\":1,\"340\":2,\"412\":1,\"454\":0}},\"TIME_TO_DOM_CONTENT_LOADED_END_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":1472,\"range\":[1,50000],\"values\":{\"281\":0,\"309\":1,\"340\":2,\"412\":1,\"454\":0}},\"TIME_TO_DOM_COMPLETE_MS\":{\"bucket_count\":100,\""
		"histogram_type\":0,\"sum\":1532,\"range\":[1,50000],\"values\":{\"281\":0,\"309\":1,\"340\":1,\"412\":2,\"454\":0}},\"TIME_TO_LOAD_EVENT_START_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":1533,\"range\":[1,50000],\"values\":{\"281\":0,\"309\":1,\"340\":1,\"412\":2,\"454\":0}},\"TIME_TO_LOAD_EVENT_END_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":1533,\"range\":[1,50000],\"values\":{\"281\":0,\"309\":1,\"340\":1,\"412\":2,\"454\":0}},\"REL_PRELOAD_MISS_RATIO\":{\"bucket_count\""
		":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":18,\"1\":0}}},\"keyedHistograms\":{},\"scalars\":{\"telemetry.discarded.accumulations\":0,\"telemetry.discarded.scalar_actions\":0,\"telemetry.discarded.keyed_accumulations\":0,\"networking.http3_enabled\":true,\"script.preloader.mainthread_recompile\":4,\"telemetry.discarded.child_events\":0,\"telemetry.discarded.keyed_scalar_actions\":0},\"keyedScalars\":{}},\"dynamic\":{\"scalars\":{},\"keyedScalars\":{}},\"gpu\":{\""
		"histograms\":{\"COMPOSITE_TIME\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":6421,\"range\":[1,1000],\"values\":{\"0\":781,\"1\":719,\"2\":864,\"3\":413,\"4\":374,\"5\":108,\"6\":37,\"7\":18,\"8\":3,\"9\":8,\"10\":2,\"11\":1,\"12\":5,\"20\":3,\"23\":3,\"29\":1,\"33\":0}},\"COMPOSITE_SWAP_TIME\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":9428,\"range\":[1,1000],\"values\":{\"0\":17,\"1\":53,\"2\":887,\"3\":587,\"4\":450,\"5\":239,\"6\":126,\"7\":83,\"8\":41,\"9\":33,\"10\":12,\"11\":8,"
		"\"12\":18,\"14\":5,\"16\":2,\"20\":2,\"23\":2,\"29\":2,\"42\":1,\"152\":1,\"171\":0}},\"GPU_PROCESS_INITIALIZATION_TIME_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":639,\"range\":[1,64000],\"values\":{\"551\":0,\"608\":1,\"671\":0}},\"CONTENT_FULL_PAINT_TIME\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":6369,\"range\":[1,1000],\"values\":{\"0\":2,\"1\":83,\"2\":372,\"3\":422,\"4\":366,\"5\":232,\"6\":150,\"7\":42,\"8\":19,\"9\":11,\"10\":1,\"11\":3,\"12\":2,\"16\":1,\"18\":1,\"23"
		"\":1,\"26\":3,\"29\":0}},\"CONTENT_FRAME_TIME\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":197657,\"range\":[1,5000],\"values\":{\"18\":0,\"21\":2,\"29\":1,\"47\":2,\"55\":1,\"64\":8,\"75\":12,\"88\":48,\"103\":1173,\"120\":436,\"140\":13,\"164\":3,\"192\":6,\"224\":6,\"262\":0}},\"CONTENT_FRAME_TIME_VSYNC\":{\"bucket_count\":100,\"histogram_type\":1,\"sum\":210049,\"range\":[8,792],\"values\":{\"96\":0,\"104\":9,\"112\":846,\"120\":463,\"128\":296,\"136\":47,\"144\":14,\"152\":9,\"160\":4,"
		"\"168\":1,\"184\":2,\"200\":2,\"216\":5,\"224\":3,\"240\":3,\"248\":2,\"256\":3,\"264\":1,\"272\":0}},\"CONTENT_FRAME_TIME_WITH_SVG\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":207253,\"range\":[1,5000],\"values\":{\"88\":0,\"103\":849,\"120\":793,\"140\":29,\"164\":4,\"192\":5,\"224\":10,\"262\":1,\"306\":0}}},\"keyedHistograms\":{},\"scalars\":{\"telemetry.discarded.accumulations\":0,\"telemetry.discarded.keyed_accumulations\":0,\"gfx.canvas.remote.activated\":1,\""
		"telemetry.discarded.scalar_actions\":0,\"telemetry.discarded.child_events\":0,\"telemetry.discarded.keyed_scalar_actions\":0},\"keyedScalars\":{}},\"socket\":{\"histograms\":{},\"keyedHistograms\":{},\"scalars\":{},\"keyedScalars\":{}}},\"histograms\":{\"A11Y_INSTANTIATED_FLAG\":{\"bucket_count\":3,\"histogram_type\":3,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":1,\"1\":0}},\"CHILD_PROCESS_LAUNCH_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":1531,\"range\":[1,64000],\"values\":{\"9\":0,"
		"\"10\":1,\"138\":1,\"168\":1,\"274\":1,\"409\":1,\"452\":1,\"499\":0}},\"CONTENT_PROCESS_LAUNCH_MAINTHREAD_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":4,\"range\":[1,64000],\"values\":{\"1\":0,\"2\":2,\"3\":0}},\"CONTENT_PROCESS_LAUNCH_TOTAL_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":934,\"range\":[1,64000],\"values\":{\"370\":0,\"409\":1,\"452\":1,\"499\":0}},\"CONTENT_PROCESS_SYNC_LAUNCH_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":640,\"range\":[1,64000],\""
		"values\":{\"152\":0,\"168\":1,\"185\":1,\"274\":1,\"303\":0}},\"CONTENT_PROCESS_LAUNCH_IS_SYNC\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":3,\"range\":[1,2],\"values\":{\"0\":2,\"1\":3,\"2\":0}},\"CONTENT_PROCESS_MAX\":{\"bucket_count\":100,\"histogram_type\":1,\"sum\":9,\"range\":[1,500],\"values\":{\"0\":0,\"1\":2,\"6\":0}},\"CYCLE_COLLECTOR_MAX_PAUSE\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":9,\"range\":[1,10000],\"values\":{\"0\":1,\"1\":1,\"3\":1,\"5\":1,\"6\":0}},\"GC_MS\":"
		"{\"bucket_count\":50,\"histogram_type\":0,\"sum\":99,\"range\":[1,10000],\"values\":{\"0\":0,\"1\":1,\"17\":1,\"29\":1,\"40\":1,\"48\":0}},\"GC_BUDGET_MS_2\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":174,\"range\":[1,200],\"values\":{\"4\":0,\"5\":3,\"6\":2,\"7\":1,\"8\":2,\"9\":1,\"10\":3,\"12\":1,\"13\":1,\"15\":4,\"16\":0}},\"GC_ANIMATION_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":32,\"range\":[1,10000],\"values\":{\"0\":1,\"7\":1,\"8\":3,\"10\":0}},\"GC_MAX_PAUSE_MS_2\":{\""
		"bucket_count\":50,\"histogram_type\":0,\"sum\":34,\"range\":[1,10000],\"values\":{\"0\":0,\"1\":1,\"8\":2,\"14\":1,\"17\":0}},\"GC_PREPARE_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":2,\"range\":[1,1000],\"values\":{\"0\":3,\"2\":1,\"3\":0}},\"GC_MARK_ROOTS_US\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":4543,\"range\":[1,150000],\"values\":{\"167\":0,\"211\":1,\"267\":1,\"1091\":1,\"2204\":1,\"2786\":0}},\"GC_MARK_GRAY_MS_2\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":0,"
		"\"range\":[1,10000],\"values\":{\"0\":4,\"1\":0}},\"GC_MARK_WEAK_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":0,\"range\":[1,10000],\"values\":{\"0\":4,\"1\":0}},\"GC_PRETENURE_COUNT_2\":{\"bucket_count\":20,\"histogram_type\":0,\"sum\":0,\"range\":[1,100],\"values\":{\"0\":20,\"1\":0}},\"GC_TENURED_SURVIVAL_RATE\":{\"bucket_count\":50,\"histogram_type\":1,\"sum\":389,\"range\":[1,100],\"values\":{\"90\":0,\"92\":1,\"98\":3,\"100\":0}},\"GC_TIME_BETWEEN_S\":{\"bucket_count\":50,\""
		"histogram_type\":0,\"sum\":10,\"range\":[1,120],\"values\":{\"0\":1,\"2\":1,\"4\":2,\"5\":0}},\"GC_TIME_BETWEEN_SLICES_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":674,\"range\":[1,2000],\"values\":{\"0\":2,\"1\":3,\"2\":1,\"17\":1,\"22\":1,\"25\":1,\"29\":1,\"57\":1,\"86\":1,\"99\":1,\"113\":1,\"196\":1,\"225\":0}},\"GC_SLICE_COUNT\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":18,\"range\":[1,200],\"values\":{\"4\":0,\"5\":1,\"6\":1,\"7\":1,\"8\":0}},\"GC_EFFECTIVENESS\":{\""
		"bucket_count\":100,\"histogram_type\":0,\"sum\":26,\"range\":[1,50000],\"values\":{\"0\":0,\"1\":2,\"11\":1,\"13\":1,\"14\":0}},\"GPU_PROCESS_LAUNCH_TIME_MS_2\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":925,\"range\":[1,64000],\"values\":{\"818\":0,\"903\":1,\"997\":0}},\"MEMORY_TOTAL\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":376916,\"range\":[32768,16777216],\"values\":{\"345412\":0,\"368115\":1,\"392310\":0}},\"GHOST_WINDOWS\":{\"bucket_count\":32,\"histogram_type\":0,\"sum\""
		":0,\"range\":[1,128],\"values\":{\"0\":1,\"1\":0}},\"SHUTDOWN_OK\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":1,\"1\":0}},\"HTTP_KBREAD_PER_CONN2\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":2,\"range\":[1,100000],\"values\":{\"0\":6,\"2\":1,\"3\":0}},\"HTTP_TRANSACTION_IS_SSL\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":40,\"range\":[1,2],\"values\":{\"0\":19,\"1\":40,\"2\":0}},\"HTTP_PAGELOAD_IS_SSL\":{\"bucket_count\":3,\"histogram_type\":2"
		",\"sum\":3,\"range\":[1,2],\"values\":{\"0\":0,\"1\":3,\"2\":0}},\"HTTP_SCHEME_UPGRADE_TYPE\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":24,\"range\":[1,50],\"values\":{\"0\":0,\"1\":24,\"2\":0}},\"TLS_EARLY_DATA_NEGOTIATED\":{\"bucket_count\":4,\"histogram_type\":1,\"sum\":0,\"range\":[1,3],\"values\":{\"0\":31,\"1\":0}},\"SSL_HANDSHAKE_VERSION\":{\"bucket_count\":17,\"histogram_type\":1,\"sum\":141,\"range\":[1,16],\"values\":{\"2\":0,\"3\":3,\"4\":33,\"5\":0}},\"SSL_HANDSHAKE_RESULT\":{"
		"\"bucket_count\":673,\"histogram_type\":1,\"sum\":0,\"range\":[1,672],\"values\":{\"0\":31,\"1\":0}},\"SSL_TIME_UNTIL_READY\":{\"bucket_count\":200,\"histogram_type\":0,\"sum\":234743,\"range\":[1,60000],\"values\":{\"76\":0,\"80\":1,\"355\":1,\"465\":1,\"665\":1,\"1044\":1,\"1250\":1,\"1308\":1,\"4610\":2,\"4822\":5,\"5044\":1,\"6039\":12,\"7911\":1,\"9055\":1,\"10841\":1,\"11862\":1,\"12408\":1,\"13577\":2,\"16256\":1,\"17005\":1,\"17788\":0}},\"SSL_RESUMED_SESSION\":{\"bucket_count\":3,\""
		"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":32,\"1\":4,\"2\":0}},\"HTTP_CHANNEL_DISPOSITION\":{\"bucket_count\":17,\"histogram_type\":1,\"sum\":620,\"range\":[1,16],\"values\":{\"0\":4,\"2\":19,\"3\":1,\"8\":7,\"9\":18,\"10\":35,\"11\":1,\"12\":0}},\"HTTP_CHANNEL_ONSTART_SUCCESS\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":88,\"range\":[1,2],\"values\":{\"0\":8,\"1\":88,\"2\":0}},\"DNS_LOOKUP_METHOD2\":{\"bucket_count\":17,\"histogram_type\":1,\"sum\":528,\"range\":[1,16],"
		"\"values\":{\"0\":0,\"1\":110,\"2\":5,\"3\":2,\"6\":67,\"7\":0}},\"DNS_LOOKUP_TIME\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":835,\"range\":[1,60000],\"values\":{\"2\":0,\"3\":1,\"4\":2,\"5\":2,\"7\":7,\"9\":5,\"11\":4,\"14\":4,\"17\":5,\"21\":5,\"26\":5,\"32\":1,\"40\":4,\"50\":1,\"62\":0}},\"DNS_NATIVE_LOOKUP_TIME\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":2630,\"range\":[1,60000],\"values\":{\"0\":0,\"1\":3,\"2\":15,\"3\":7,\"4\":7,\"5\":9,\"6\":2,\"7\":11,\"9\":9,\"11\":2,\""
		"14\":5,\"17\":9,\"21\":6,\"26\":6,\"32\":2,\"40\":4,\"50\":2,\"62\":4,\"77\":3,\"95\":4,\"118\":3,\"146\":0}},\"DNS_NATIVE_QUEUING\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":1197,\"range\":[1,60000],\"values\":{\"0\":95,\"1\":1,\"5\":1,\"14\":1,\"26\":2,\"32\":1,\"40\":4,\"50\":1,\"62\":2,\"77\":3,\"95\":4,\"118\":0}},\"DNS_FAILED_LOOKUP_TIME\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":10,\"range\":[1,60000],\"values\":{\"4\":0,\"5\":2,\"6\":0}},\"TAB_COUNT\":{\"bucket_count\":100"
		",\"histogram_type\":0,\"sum\":6,\"range\":[1,1000],\"values\":{\"5\":0,\"6\":1,\"7\":0}},\"LOADED_TAB_COUNT\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":1,\"range\":[1,1000],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"STARTUP_CACHE_REQUESTS\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":223,\"range\":[1,50],\"values\":{\"0\":1,\"1\":131,\"2\":46,\"3\":0}},\"SCRIPT_PRELOADER_REQUESTS\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":367,\"range\":[1,50],\"values\":{\"0\":240,\"1\":19,\""
		"2\":174,\"3\":0}},\"SCRIPT_PRELOADER_WAIT_TIME\":{\"bucket_count\":20,\"histogram_type\":0,\"sum\":1,\"range\":[1,10000],\"values\":{\"0\":7,\"1\":1,\"2\":0}},\"NETWORK_ID_ONLINE\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":1,\"range\":[1,50],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"URLCLASSIFIER_LOOKUP_TIME_2\":{\"bucket_count\":30,\"histogram_type\":0,\"sum\":27,\"range\":[1,5000],\"values\":{\"0\":42,\"1\":2,\"9\":1,\"12\":1,\"16\":0}},\"URLCLASSIFIER_CL_CHECK_TIME\":{\"bucket_count\":10,"
		"\"histogram_type\":0,\"sum\":1,\"range\":[1,500],\"values\":{\"0\":45,\"1\":1,\"2\":0}},\"URLCLASSIFIER_VLPS_FILELOAD_TIME\":{\"bucket_count\":10,\"histogram_type\":0,\"sum\":52,\"range\":[1,1000],\"values\":{\"0\":18,\"1\":1,\"2\":2,\"5\":1,\"29\":1,\"70\":0}},\"URLCLASSIFIER_VLPS_METADATA_CORRUPT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":5,\"1\":0}},\"FX_NUMBER_OF_UNIQUE_SITE_ORIGINS_PER_LOADED_TABS_1\":{\"bucket_count\":50,\"histogram_type\":0,\"sum"
		"\":100,\"range\":[1,5000],\"values\":{\"75\":0,\"88\":1,\"103\":0}},\"FX_PAGE_LOAD_MS_2\":{\"bucket_count\":200,\"histogram_type\":1,\"sum\":54481,\"range\":[1,10000],\"values\":{\"9950\":0,\"10000\":1}},\"INPUT_EVENT_RESPONSE_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":14306,\"range\":[1,10000],\"values\":{\"0\":29,\"1\":55,\"2\":92,\"3\":79,\"4\":81,\"5\":65,\"6\":77,\"7\":74,\"8\":156,\"10\":158,\"12\":162,\"14\":205,\"17\":7,\"20\":6,\"24\":3,\"29\":1,\"96\":3,\"268\":1,\"1062\":3,"
		"\"1262\":0}},\"INPUT_EVENT_RESPONSE_COALESCED_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":5481,\"range\":[1,10000],\"values\":{\"0\":7,\"1\":1,\"2\":8,\"3\":4,\"4\":4,\"5\":5,\"6\":4,\"7\":6,\"8\":40,\"10\":77,\"12\":82,\"14\":63,\"20\":1,\"24\":3,\"29\":3,\"34\":1,\"40\":3,\"48\":3,\"57\":3,\"68\":1,\"114\":1,\"268\":1,\"1062\":1,\"1262\":0}},\"FX_SESSION_RESTORE_STARTUP_INIT_SESSION_MS\":{\"bucket_count\":20,\"histogram_type\":0,\"sum\":0,\"range\":[1,30000],\"values\":{\"0\":1,\"1\""
		":0}},\"FX_SESSION_RESTORE_STARTUP_ONLOAD_INITIAL_WINDOW_MS\":{\"bucket_count\":20,\"histogram_type\":0,\"sum\":2,\"range\":[1,30000],\"values\":{\"1\":0,\"2\":1,\"4\":0}},\"FX_SESSION_RESTORE_RESTORE_WINDOW_MS\":{\"bucket_count\":10,\"histogram_type\":0,\"sum\":49,\"range\":[1,3000],\"values\":{\"8\":0,\"21\":1,\"57\":0}},\"MS_MESSAGE_REQUEST_TIME_MS\":{\"bucket_count\":20,\"histogram_type\":0,\"sum\":5,\"range\":[1,2000],\"values\":{\"0\":1,\"1\":1,\"3\":1,\"5\":0}},\"SEARCH_SERVICE_INIT_MS\":{\""
		"bucket_count\":15,\"histogram_type\":0,\"sum\":409,\"range\":[1,1000],\"values\":{\"203\":0,\"345\":1,\"587\":0}},\"TOUCH_ENABLED_DEVICE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":1,\"1\":0}},\"BROWSER_IS_USER_DEFAULT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":1,\"1\":0}},\"BROWSER_IS_USER_DEFAULT_ERROR\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":1,\"1\":0}},\""
		"BROWSER_SET_DEFAULT_DIALOG_PROMPT_RAWCOUNT\":{\"bucket_count\":15,\"histogram_type\":0,\"sum\":3,\"range\":[1,250],\"values\":{\"2\":0,\"3\":1,\"4\":0}},\"BROWSER_SET_DEFAULT_ALWAYS_CHECK\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":1,\"1\":0}},\"NETWORK_CACHE_V2_MISS_TIME_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":0,\"range\":[1,10000],\"values\":{\"0\":4,\"1\":0}},\"CERT_VALIDATION_SUCCESS_BY_CA\":{\"bucket_count\":257,\"histogram_type\":1,\""
		"sum\":96,\"range\":[1,256],\"values\":{\"2\":0,\"3\":32,\"4\":0}},\"CRLITE_RESULT\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":32,\"1\":0}},\"MASTER_PASSWORD_ENABLED\":{\"bucket_count\":3,\"histogram_type\":3,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":1,\"1\":0}},\"COOKIE_BEHAVIOR\":{\"bucket_count\":16,\"histogram_type\":1,\"sum\":4,\"range\":[1,15],\"values\":{\"3\":0,\"4\":1,\"5\":0}},\"TRACKING_PROTECTION_ENABLED\":{\"bucket_count\":3,\""
		"histogram_type\":2,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":1,\"1\":0}},\"TRACKING_PROTECTION_PBM_DISABLED\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":1,\"1\":0}},\"FINGERPRINTERS_BLOCKED_COUNT\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":1,\"1\":0}},\"CRYPTOMINERS_BLOCKED_COUNT\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":1,\"1\":0}},\"TRACKING_PROTECTION_SHIELD\":"
		"{\"bucket_count\":5,\"histogram_type\":1,\"sum\":2,\"range\":[1,4],\"values\":{\"0\":1,\"2\":1,\"3\":0}},\"TOP_LEVEL_CONTENT_DOCUMENTS_DESTROYED\":{\"bucket_count\":3,\"histogram_type\":4,\"sum\":7,\"range\":[1,2],\"values\":{\"0\":7,\"1\":0}},\"TIME_TO_FIRST_CONTENTFUL_PAINT_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":1454,\"range\":[1,100000],\"values\":{\"1243\":0,\"1380\":1,\"1532\":0}},\"WEBEXT_BACKGROUND_PAGE_LOAD_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":4553,\""
		"range\":[1,60000],\"values\":{\"964\":0,\"1064\":3,\"1174\":1,\"1295\":0}},\"WEBEXT_EXTENSION_STARTUP_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":5923,\"range\":[1,50000],\"values\":{\"211\":0,\"232\":1,\"340\":10,\"374\":1,\"1736\":1,\"1911\":0}}},\"keyedHistograms\":{\"NETWORK_HTTP_REDIRECT_TO_SCHEME\":{\"https\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":3,\"range\":[1,50],\"values\":{\"0\":2,\"1\":3,\"2\":0}}},\"SSL_TIME_UNTIL_HANDSHAKE_FINISHED_KEYED_BY_KA\":{\"x25519\":{\""
		"bucket_count\":200,\"histogram_type\":0,\"sum\":234743,\"range\":[1,60000],\"values\":{\"76\":0,\"80\":1,\"355\":1,\"465\":1,\"665\":1,\"1044\":1,\"1250\":1,\"1308\":1,\"4610\":2,\"4822\":5,\"5044\":1,\"6039\":12,\"7911\":1,\"9055\":1,\"10841\":1,\"11862\":1,\"12408\":1,\"13577\":2,\"16256\":1,\"17005\":1,\"17788\":0}}},\"HTTP_CHANNEL_DISPOSITION_UPGRADE\":{\"disabledNoReason\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":91,\"range\":[1,50],\"values\":{\"0\":7,\"1\":18,\"2\":35,\"3\":1,\"4\""
		":0}},\"disabledWont\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":41,\"range\":[1,50],\"values\":{\"0\":4,\"2\":19,\"3\":1,\"4\":0}}},\"HTTP3_CHANNEL_ONSTART_SUCCESS\":{\"no_http3\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":59,\"range\":[1,2],\"values\":{\"0\":8,\"1\":59,\"2\":0}}},\"DNS_LOOKUP_DISPOSITION3\":{\"mozilla.cloudflare-dns.com\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":692,\"range\":[1,50],\"values\":{\"5\":0,\"6\":113,\"7\":2,\"8\":0}}},\""
		"URLCLASSIFIER_COMPLETE_REMOTE_STATUS2\":{\"google4\":{\"bucket_count\":17,\"histogram_type\":1,\"sum\":13,\"range\":[1,16],\"values\":{\"12\":0,\"13\":1,\"14\":0}}},\"URLCLASSIFIER_COMPLETE_TIMEOUT2\":{\"google4\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":1,\"1\":1,\"2\":0}}},\"URLCLASSIFIER_COMPLETE_SERVER_RESPONSE_TIME\":{\"google4\":{\"bucket_count\":15,\"histogram_type\":0,\"sum\":5001,\"range\":[1,5000],\"values\":{\"2627\":0,\"5000\":1}}},\""
		"WEBEXT_BACKGROUND_PAGE_LOAD_MS_BY_ADDONID\":{\"pictureinpicture@mozilla.org\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":1139,\"range\":[1,60000],\"values\":{\"964\":0,\"1064\":1,\"1174\":0}},\"screenshots@mozilla.org\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":1143,\"range\":[1,60000],\"values\":{\"964\":0,\"1064\":1,\"1174\":0}},\"webcompat@mozilla.org\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":1185,\"range\":[1,60000],\"values\":{\"1064\":0,\"1174\":1,\"1295\":0}},\""
		"formautofill@mozilla.org\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":1086,\"range\":[1,60000],\"values\":{\"964\":0,\"1064\":1,\"1174\":0}}},\"WEBEXT_EXTENSION_STARTUP_MS_BY_ADDONID\":{\"default-theme@mozilla.org\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":357,\"range\":[1,50000],\"values\":{\"309\":0,\"340\":1,\"374\":0}},\"yandex@search.mozilla.org\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":343,\"range\":[1,50000],\"values\":{\"309\":0,\"340\":1,\"374\":0}},\""
		"google@search.mozilla.org\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":355,\"range\":[1,50000],\"values\":{\"309\":0,\"340\":1,\"374\":0}},\"ddg@search.mozilla.org\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":358,\"range\":[1,50000],\"values\":{\"309\":0,\"340\":1,\"374\":0}},\"doh-rollout@mozilla.org\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":248,\"range\":[1,50000],\"values\":{\"211\":0,\"232\":1,\"255\":0}},\"ozonru@search.mozilla.org\":{\"bucket_count\":100,\""
		"histogram_type\":0,\"sum\":354,\"range\":[1,50000],\"values\":{\"309\":0,\"340\":1,\"374\":0}},\"screenshots@mozilla.org\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":1747,\"range\":[1,50000],\"values\":{\"1577\":0,\"1736\":1,\"1911\":0}},\"pictureinpicture@mozilla.org\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":372,\"range\":[1,50000],\"values\":{\"309\":0,\"340\":1,\"374\":0}},\"mailru@search.mozilla.org\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":354,\"range\":[1,50000]"
		",\"values\":{\"309\":0,\"340\":1,\"374\":0}},\"wikipedia@search.mozilla.org\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":344,\"range\":[1,50000],\"values\":{\"309\":0,\"340\":1,\"374\":0}},\"formautofill@mozilla.org\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":374,\"range\":[1,50000],\"values\":{\"340\":0,\"374\":1,\"412\":0}},\"webcompat@mozilla.org\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":364,\"range\":[1,50000],\"values\":{\"309\":0,\"340\":1,\"374\":0}},\""
		"priceru@search.mozilla.org\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":353,\"range\":[1,50000],\"values\":{\"309\":0,\"340\":1,\"374\":0}}},\"QM_FIRST_INITIALIZATION_ATTEMPT\":{\"Storage\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"PersistentOrigin\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}}},\"HTTP_TRAFFIC_ANALYSIS_3\":{\"Connection\":{\"bucket_count\":51,\""
		"histogram_type\":5,\"sum\":17,\"range\":[1,50],\"values\":{\"0\":7,\"1\":3,\"2\":5,\"4\":1,\"5\":0}},\"Transaction\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":62,\"range\":[1,50],\"values\":{\"0\":33,\"1\":18,\"2\":13,\"4\":2,\"5\":2,\"6\":0}}},\"SQLITE_STORE_OPEN\":{\"permissions.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":1,\"1\":0}},\":memory:\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":2,\""
		"1\":0}},\"2918063365piupsah.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":2,\"1\":0}},\"3561288849sdhlie.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":2,\"1\":0}},\"2823318777ntouromlalnodry--naod.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":2,\"1\":0}},\"content-prefs.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\""
		"values\":{\"0\":1,\"1\":0}},\"1657114595AmcateirvtiSty.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":5,\"1\":0}},\"1451318868ntouromlalnodry--epcr.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":2,\"1\":0}},\"protections.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":1,\"1\":0}},\"storage.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\""
		"range\":[1,50],\"values\":{\"0\":1,\"1\":0}},\"places.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":3,\"1\":0}},\"3870112724rsegmnoittet-es.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":3,\"1\":0}},\"webappsstore.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":2,\"1\":0}},\"cookies.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":"
		"[1,50],\"values\":{\"0\":2,\"1\":0}},\"formhistory.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":1,\"1\":0}}},\"SQLITE_STORE_QUERY\":{\"permissions.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":7,\"1\":0}},\":memory:\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":24,\"1\":0}},\"2918063365piupsah.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\""
		"range\":[1,50],\"values\":{\"0\":22,\"1\":0}},\"3561288849sdhlie.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":22,\"1\":0}},\"2823318777ntouromlalnodry--naod.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":22,\"1\":0}},\"content-prefs.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":14,\"1\":0}},\"1657114595AmcateirvtiSty.sqlite\":{\"bucket_count\":51,\""
		"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":108,\"1\":0}},\"1451318868ntouromlalnodry--epcr.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":23,\"1\":0}},\"protections.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":5,\"1\":0}},\"storage.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":6,\"1\":0}},\"places.sqlite\":{\"bucket_count\":51,\""
		"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":216,\"1\":0}},\"3870112724rsegmnoittet-es.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":75,\"1\":0}},\"webappsstore.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":28,\"1\":0}},\"cookies.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":29,\"1\":0}},\"formhistory.sqlite\":{\"bucket_count\":51,"
		"\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":10,\"1\":0}}}},\"info\":{\"reason\":\"aborted-session\",\"revision\":\"https://hg.mozilla.org/releases/mozilla-release/rev/179e1482851c07d65bf29a21c9e42ea312fc87fa\",\"timezoneOffset\":180,\"previousBuildId\":null,\"sessionId\":\"e5b37eb9-9e84-4a07-a335-a034c9f62687\",\"subsessionId\":\"09648cf0-0e55-4933-8c9f-23a4a4cd2b20\",\"previousSessionId\":\"2c75f0ca-09ba-4979-96ec-4e540a500427\",\"previousSubsessionId\":\""
		"a5c9a354-8f33-4513-a476-0955cdb2ba05\",\"subsessionCounter\":1,\"profileSubsessionCounter\":10,\"sessionStartDate\":\"2021-06-03T09:00:00.0+03:00\",\"subsessionStartDate\":\"2021-06-03T09:00:00.0+03:00\",\"sessionLength\":61,\"subsessionLength\":60,\"addons\":\"doh-rollout%40mozilla.org:2.0.0,formautofill%40mozilla.org:1.0,pictureinpicture%40mozilla.org:1.0.0,screenshots%40mozilla.org:39.0.0,webcompat%40mozilla.org:21.0.0,default-theme%40mozilla.org:1.1,google%40search.mozilla.org:1.1,"
		"wikipedia%40search.mozilla.org:1.1,yandex%40search.mozilla.org:1.1,ddg%40search.mozilla.org:1.1,priceru%40search.mozilla.org:1.0,mailru%40search.mozilla.org:1.0,ozonru%40search.mozilla.org:1.2\"}},\"clientId\":\"6f375794-79e5-4070-8b47-ae5f290622f0\",\"environment\":{\"build\":{\"applicationId\":\"{ec8030f7-c20a-464f-9b0e-13a3a9e97384}\",\"applicationName\":\"Firefox\",\"architecture\":\"x86-64\",\"buildId\":\"20210504152106\",\"version\":\"88.0.1\",\"vendor\":\"Mozilla\",\"displayVersion\":\""
		"88.0.1\",\"platformVersion\":\"88.0.1\",\"xpcomAbi\":\"x86_64-msvc\",\"updaterAvailable\":true},\"partner\":{\"distributionId\":null,\"distributionVersion\":null,\"partnerId\":null,\"distributor\":null,\"distributorChannel\":null,\"partnerNames\":[]},\"system\":{\"memoryMB\":8089,\"virtualMaxMB\":134217728,\"cpu\":{\"count\":4,\"cores\":2,\"vendor\":\"GenuineIntel\",\"family\":6,\"model\":142,\"stepping\":9,\"l2cacheKB\":256,\"l3cacheKB\":3072,\"speedMHz\":2712,\"extensions\":[\"hasMMX\",\"hasSSE"
		"\",\"hasSSE2\",\"hasSSE3\",\"hasSSSE3\",\"hasSSE4_1\",\"hasSSE4_2\",\"hasAVX\",\"hasAVX2\",\"hasAES\"]},\"os\":{\"installYear\":2021,\"hasSuperfetch\":true,\"hasPrefetch\":true,\"name\":\"Windows_NT\",\"version\":\"10.0\",\"locale\":\"ru-RU\",\"servicePackMajor\":0,\"servicePackMinor\":0,\"windowsBuildNumber\":19042,\"windowsUBR\":985},\"hdd\":{\"binary\":{\"model\":\"SanDisk SD8SN8U-128G-1006\",\"revision\":\"X4120006\",\"type\":\"SSD\"},\"profile\":{\"model\":\"SanDisk SD8SN8U-128G-1006\",\""
		"revision\":\"X4120006\",\"type\":\"SSD\"},\"system\":{\"model\":\"SanDisk SD8SN8U-128G-1006\",\"revision\":\"X4120006\",\"type\":\"SSD\"}},\"gfx\":{\"D2DEnabled\":true,\"DWriteEnabled\":true,\"ContentBackend\":\"Skia\",\"Headless\":false,\"EmbeddedInFirefoxReality\":false,\"adapters\":[{\"description\":\"Intel(R) HD Graphics 620\",\"vendorID\":\"0x8086\",\"deviceID\":\"0x5916\",\"subsysID\":\"00000000\",\"RAM\":0,\"driver\":\"igdumdim64 igd10iumd64 igd10iumd64 igd12umd64 igdumdim32 igd10iumd32 "
		"igd10iumd32 igd12umd32\",\"driverVendor\":null,\"driverVersion\":\"27.20.100.8854\",\"driverDate\":\"10-14-2020\",\"GPUActive\":true}],\"monitors\":[{\"screenWidth\":1920,\"screenHeight\":1080,\"refreshRate\":60,\"pseudoDisplay\":false}],\"features\":{\"compositor\":\"webrender\",\"hwCompositing\":{\"status\":\"available\"},\"gpuProcess\":{\"status\":\"available\"},\"wrQualified\":{\"status\":\"available\"},\"webrender\":{\"status\":\"available\"},\"wrCompositor\":{\"status\":\"available\"},\""
		"wrSoftware\":{\"status\":\"unavailable:FEATURE_FAILURE_RELEASE_D3D11_SUPPORTED\"},\"openglCompositing\":{\"status\":\"unused\"},\"omtp\":{\"status\":\"disabled:FEATURE_FAILURE_DISABLED\"},\"d3d11\":{\"status\":\"available\",\"version\":45312,\"warp\":false,\"textureSharing\":true,\"blocklisted\":false},\"d2d\":{\"status\":\"available\",\"version\":\"1.1\"}}},\"appleModelId\":null,\"sec\":{\"antivirus\":[\"Антивирусная программа Microsoft Defender\"],\"antispyware\":null,\""
		"firewall\":[\"Брандмауэр Windows\"]},\"isWow64\":false,\"isWowARM64\":false},\"settings\":{\"blocklistEnabled\":true,\"e10sEnabled\":true,\"e10sMultiProcesses\":8,\"fissionEnabled\":false,\"telemetryEnabled\":false,\"locale\":\"ru\",\"intl\":{\"requestedLocales\":[\"ru\"],\"availableLocales\":[\"ru\",\"en-US\"],\"appLocales\":[\"ru\",\"en-US\"],\"systemLocales\":[\"ru-RU\",\"en-US\"],\"regionalPrefsLocales\":[\"ru-RU\"],\"acceptLanguages\":[\"ru-RU\",\"ru\",\"en-US\",\"en\"]},\"update\":"
		"{\"channel\":\"release\",\"enabled\":true,\"autoDownload\":true},\"userPrefs\":{\"browser.shell.checkDefaultBrowser\":false,\"browser.search.region\":\"RU\",\"browser.search.widget.inNavBar\":false,\"security.enterprise_roots.auto-enabled\":true,\"security.enterprise_roots.enabled\":true,\"widget.content.allow-gtk-dark-theme\":false,\"widget.content.gtk-high-contrast.enabled\":true},\"sandbox\":{\"effectiveContentProcessLevel\":6},\"launcherProcessState\":0,\"addonCompatibilityCheckEnabled\":true,"
		"\"isDefaultBrowser\":false,\"attribution\":{\"campaign\":\"%2528not%2Bset%2529\",\"content\":\"%2528not%2Bset%2529\",\"dltoken\":\"ece63bbb-e8a7-4e8f-9a32-93f8c1aad9c6\",\"experiment\":\"%2528not%2Bset%2529\",\"medium\":\"referral\",\"source\":\"www.google.com\",\"ua\":\"chrome\",\"variation\":\"%2528not%2Bset%2529\"},\"defaultSearchEngine\":\"yandex-ru\",\"defaultSearchEngineData\":{\"loadPath\":\"[other]addEngineWithDetails:yandex@search.mozilla.org\",\"name\":\"Яндекс\",\"origin\":\""
		"default\",\"submissionURL\":\"https://yandex.ru/search?clid=2186618&text=\"}},\"profile\":{\"creationDate\":18779,\"firstUseDate\":18779},\"addons\":{\"activeAddons\":{\"doh-rollout@mozilla.org\":{\"version\":\"2.0.0\",\"scope\":1,\"type\":\"extension\",\"updateDay\":18751,\"isSystem\":true,\"isWebExtension\":true,\"multiprocessCompatible\":true,\"blocklisted\":false,\"description\":\"This used to be a Mozilla add-on that supported the roll-out of DoH, but now only exists as a stub t\",\"name\":\""
		"DoH Roll-Out\",\"userDisabled\":false,\"appDisabled\":false,\"foreignInstall\":false,\"hasBinaryComponents\":false,\"installDay\":18751},\"formautofill@mozilla.org\":{\"version\":\"1.0\",\"scope\":1,\"type\":\"extension\",\"updateDay\":18751,\"isSystem\":true,\"isWebExtension\":true,\"multiprocessCompatible\":true,\"blocklisted\":false,\"description\":null,\"name\":\"Form Autofill\",\"userDisabled\":false,\"appDisabled\":false,\"foreignInstall\":false,\"hasBinaryComponents\":false,\"installDay\""
		":18751},\"pictureinpicture@mozilla.org\":{\"version\":\"1.0.0\",\"scope\":1,\"type\":\"extension\",\"updateDay\":18751,\"isSystem\":true,\"isWebExtension\":true,\"multiprocessCompatible\":true,\"blocklisted\":false,\"description\":\"Fixes for web compatibility with Picture-in-Picture\",\"name\":\"Picture-In-Picture\",\"userDisabled\":false,\"appDisabled\":false,\"foreignInstall\":false,\"hasBinaryComponents\":false,\"installDay\":18751},\"screenshots@mozilla.org\":{\"version\":\"39.0.0\",\"scope\""
		":1,\"type\":\"extension\",\"updateDay\":18751,\"isSystem\":true,\"isWebExtension\":true,\"multiprocessCompatible\":true,\"blocklisted\":false,\"description\":\"Take clips and screenshots from the Web and save them temporarily or permanently.\",\"name\":\"Firefox Screenshots\",\"userDisabled\":false,\"appDisabled\":false,\"foreignInstall\":false,\"hasBinaryComponents\":false,\"installDay\":18751},\"webcompat@mozilla.org\":{\"version\":\"21.0.0\",\"scope\":1,\"type\":\"extension\",\"updateDay\""
		":18751,\"isSystem\":true,\"isWebExtension\":true,\"multiprocessCompatible\":true,\"blocklisted\":false,\"description\":\"Urgent post-release fixes for web compatibility.\",\"name\":\"Web Compatibility Interventions\",\"userDisabled\":false,\"appDisabled\":false,\"foreignInstall\":false,\"hasBinaryComponents\":false,\"installDay\":18751}},\"theme\":{\"id\":\"default-theme@mozilla.org\",\"blocklisted\":false,\"description\":\"Тема с цветовой гаммой операционной "
		"системы.\",\"name\":\"Стандартная\",\"userDisabled\":false,\"appDisabled\":false,\"version\":\"1.1\",\"scope\":4,\"foreignInstall\":false,\"hasBinaryComponents\":false,\"installDay\":18779,\"updateDay\":18779},\"activePlugins\":[],\"activeGMPlugins\":{\"gmp-gmpopenh264\":{\"version\":\"1.8.1.1\",\"userDisabled\":false,\"applyBackgroundUpdates\":1},\"gmp-widevinecdm\":{\"version\":\"4.10.1582.2\",\"userDisabled\":false,\"applyBackgroundUpdates\":1}}},\"experiments\":{\""
		"bug-1690367-rollout-moving-webrtc-networking-functionality-into-i-release-87-100\":{\"branch\":\"active\",\"type\":\"normandy-prefrollout\",\"enrollmentId\":\"d91702fa-eba7-49ad-8d49-11a3add1163c\"},\"bug-1703186-rollout-http3-support-release-88-89\":{\"branch\":\"active\",\"type\":\"normandy-prefrollout\",\"enrollmentId\":\"a5d2d1db-9812-4555-ac4c-b0ca07b89ce1\"}}}}", 
		LAST);

	web_add_auto_header("Origin", 
		"https://light.mail.ru");

	web_custom_request("cspreport.mail.ru_2", 
		"URL=https://cspreport.mail.ru/?v=1.0.1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t207.inf", 
		"Mode=HTML", 
		"EncType=application/csp-report", 
		"Body={\"csp-report\":{\"blocked-uri\":\"https://gum.criteo.com/sync?c=405&r=2&j=rtus_callback\",\"column-number\":33,\"document-uri\":\"https://light.mail.ru/compose/?folder=0\",\"line-number\":57,\"original-policy\":\"default-src blob: wss://*.mail.ru https://www.google.com/recaptcha/ https://*.mail.ru https://*.yandex.ru https://*.radar.imgsmail.ru https://yastatic.net https://*.mradx.net https://*.imgsmail.ru; script-src 'self' 'unsafe-inline' 'unsafe-eval' https://*.mail.ru https://"
		"*.imgsmail.ru https://portal.mail.ru https://ad.mail.ru https://*.yandex.ru https://cdn.consentmanager.mgr.consensu.org https://consentmanager.mgr.consensu.org https://yastatic.net https://*.mradx.net; img-src data: blob: https: https://yastatic.net https://*.mradx.net https://*.imgsmail.ru; style-src 'self' 'unsafe-inline' 'unsafe-eval' https://*.mail.ru https://*.imgsmail.ru https://cdn.consentmanager.mgr.consensu.org https://consentmanager.mgr.consensu.org https://*.mradx.net; font-src data: "
		"https://*.mail.ru https://*.imgsmail.ru https://yastatic.net https://*.mradx.net; report-uri https://cspreport.mail.ru/?v=1.0.1\",\"referrer\":\"https://light.mail.ru/messages/inbox?authid=kpgj5prz.fko&dwhsplit=s10273.b1s&from=login\",\"source-file\":\"https://js.imgsmail.ru/mail/m/data/utf/ts/1620726240/light/js/build/app.min.js?v=3.240%20line%201%20%3E%20eval\",\"violated-directive\":\"script-src\"}}", 
		LAST);

	web_revert_auto_header("Origin");

	web_custom_request("142108", 
		"URL=https://an.yandex.ru/meta/142108?target-ref=https%3A%2F%2Flight.mail.ru%2Fcompose%2F%3Ffolder%3D0&page-ref=https%3A%2F%2Flight.mail.ru%2Fmessages%2Finbox%3Fauthid%3Dkpgj5prz.fko%26dwhsplit%3Ds10273.b1s%26from%3Dlogin&charset=utf-8&pcode-test-ids=363741%2C0%2C55%3B364539%2C0%2C20%3B362536%2C0%2C81%3B367340%2C0%2C59%3B356980%2C0%2C34%3B369243%2C0%2C26%3B351586%2C0%2C48%3B369110%2C0%2C32%3B369812%2C0%2C45&pcode-flags="
		"%7B%22USE_WIDGET_FROM_PCODE%22%3Atrue%2C%22COMBO_HEADER%22%3A%22withoutHeader%22%2C%22SINGLE_CONTEXT_BLACKLIST%22%3A%5B%5D%2C%22USE_SUPERBUNDLE%22%3Atrue%2C%22USE_SMART_SSR%22%3A%221%22%2C%22SINGLE_CONTEXT%22%3Atrue%2C%22DEFAULT_SSR_FORMATS%22%3A%5B%22zen%22%2C%22zen2%22%2C%22zen2-gallery%22%2C%22billboard%22%2C%22horizontal%22%2C%22horizontal0318%22%2C%22constructor%22%2C%22modernAdaptive%22%5D%2C%22SSR_UNIFORMAT%22%3A%221%22%2C%22SSR_PERCENT_LOGGING%22%3A0.1%2C%22ADAPTIVE_TOWER_VIDEO%22%3A%22exp"
		"%22%2C%22DEFAULT_BLACKLIST_PAGES%22%3A%5B%22419507%22%2C%22419506%22%2C%22106253%22%2C%22188382%22%2C%22189903%22%5D%2C%22COMBO_PACKSHOT_EXP%22%3A%22exp%22%2C%22SMART_BANNER_CAROUSEL%22%3A%22legacy%22%2C%22CUSTOM_DOMAIN_TEXT_FLAGS%22%3A%22ctl%22%2C%22LEADERBOARD_VIDEO%22%3A%22exp%22%2C%22DISABLE_VIDEO_CONTROL%22%3A%22ctl%22%2C%22RMP_POSTER_2%22%3A%22stickyColor%22%2C%22SMART_BANNER_LAYOUT_VERSION%22%3A%22control%22%2C%22PCODEVER%22%3A%2214855%22%7D&server-side-rendering-enabled-formats="
		"zen%0Azen2%0Azen2-gallery%0Abillboard%0Ahorizontal%0Ahorizontal0318%0Aconstructor%0AmodernAdaptive&raw-smart-content=1&smart-format-names=smart-banner-adaptive_v1%0Asmart-banner-mosaic_v1&pcode-icookie=7171949581622700283&imp-id=383&test-tag=293569604616194&ad-session-id=2701011622702574579&target-id=17772121&tga-with-creatives=1&pcode-version=14870&pcodever=14870&flash-ver=0&available-width=240&available-height=400&layout-config="
		"%7B%22win_width%22%3A1920%2C%22win_height%22%3A976%2C%22pixel_ratio%22%3A1%2C%22bandwidth%22%3A-1%2C%22w%22%3A239%2C%22h%22%3A400%2C%22width%22%3A240%2C%22height%22%3A400%2C%22visible%22%3A1%2C%22left%22%3A95%2C%22top%22%3A638%2C%22ad_no%22%3A0%2C%22req_no%22%3A0%7D&uniformat=true&callback=Ya%5B8955576677577%5D", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t208.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded", 
		LAST);

	web_custom_request("ocsp.digicert.com_9", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t209.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"Body=0Q0O0M0K0I0\t+", 
		LAST);

	web_add_cookie("tmr_reqNum=209; DOMAIN=top-fwz1.mail.ru");

	web_add_auto_header("Origin", 
		"https://light.mail.ru");

	web_custom_request("tracker_6", 
		"URL=https://top-fwz1.mail.ru/tracker?js=13;id=110605;u=https%3A//light.mail.ru/compose/%3Ffolder%3D0;r=https%3A//light.mail.ru/messages/inbox%3Fauthid%3Dkpgj5prz.fko%26dwhsplit%3Ds10273.b1s%26from%3Dlogin;st=1622702564017;s=1920*1080;vp=1903*976;touch=0;hds=1;flash=;sid=94835849e3d5524e;ver=60.3.0;tz=-180%2FEurope%2FMoscow;nt=0/0/1622702557031/////0/0/0/0/0/0/1817/6495/6495/6503/6986/7008/7038/25706/25706/;ni=;detect=0;lvid=1622531536446%3A1622702582742%3A205%3A80978b2cdef2874c0abc9091fc38bf0c;_="
		"0.890382176457783;e=RT/load;et=1622702582739", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t210.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_custom_request("tracker_7", 
		"URL=https://top-fwz1.mail.ru/tracker?js=13;id=2035946;u=https%3A//light.mail.ru/compose/%3Ffolder%3D0;r=https%3A//light.mail.ru/messages/inbox%3Fauthid%3Dkpgj5prz.fko%26dwhsplit%3Ds10273.b1s%26from%3Dlogin;st=1622702564017;s=1920*1080;vp=1903*976;touch=0;hds=1;flash=;sid=94835849e3d5524e;ver=60.3.0;tz=-180%2FEurope%2FMoscow;nt=0/0/1622702557031/////0/0/0/0/0/0/1817/6495/6495/6503/6986/7008/7038/25706/25706/;ni=;detect=0;lvid=1622531536446%3A1622702582744%3A206%3A80978b2cdef2874c0abc9091fc38bf0c;"
		"opts=sec;_=0.3578597045045745;e=RT/load;et=1622702582739", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t211.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_custom_request("tracker_8", 
		"URL=https://top-fwz1.mail.ru/tracker?js=13;id=3123969;u=https%3A//light.mail.ru/compose/%3Ffolder%3D0;r=https%3A//light.mail.ru/messages/inbox%3Fauthid%3Dkpgj5prz.fko%26dwhsplit%3Ds10273.b1s%26from%3Dlogin;st=1622702564017;s=1920*1080;vp=1903*976;touch=0;hds=1;flash=;sid=94835849e3d5524e;ver=60.3.0;tz=-180%2FEurope%2FMoscow;nt=0/0/1622702557031/////0/0/0/0/0/0/1817/6495/6495/6503/6986/7008/7038/25706/25706/;ni=;detect=0;lvid=1622531536446%3A1622702582748%3A207%3A80978b2cdef2874c0abc9091fc38bf0c;"
		"opts=sec;_=0.5231929096869732;e=RT/load;et=1622702582739", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t212.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_custom_request("tracker_9", 
		"URL=https://top-fwz1.mail.ru/tracker?js=13;id=3206667;u=https%3A//light.mail.ru/compose/%3Ffolder%3D0;r=https%3A//light.mail.ru/messages/inbox%3Fauthid%3Dkpgj5prz.fko%26dwhsplit%3Ds10273.b1s%26from%3Dlogin;st=1622702564017;userid=test_nt_1@mail.ru;s=1920*1080;vp=1903*976;touch=0;hds=1;flash=;sid=94835849e3d5524e;ver=60.3.0;tz=-180%2FEurope%2FMoscow;nt=0/0/1622702557031/////0/0/0/0/0/0/1817/6495/6495/6503/6986/7008/7038/25706/25706/;ni=;detect=0;lvid="
		"1622531536446%3A1622702582750%3A208%3A80978b2cdef2874c0abc9091fc38bf0c;opts=sec;_=0.3708108479159151;e=RT/load;et=1622702582739", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t213.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_custom_request("tracker_10", 
		"URL=https://top-fwz1.mail.ru/tracker?js=13;id=3210335;u=https%3A//light.mail.ru/compose/%3Ffolder%3D0;r=https%3A//light.mail.ru/messages/inbox%3Fauthid%3Dkpgj5prz.fko%26dwhsplit%3Ds10273.b1s%26from%3Dlogin;st=1622702564017;userid=test_nt_1@mail.ru;s=1920*1080;vp=1903*976;touch=0;hds=1;flash=;sid=94835849e3d5524e;ver=60.3.0;tz=-180%2FEurope%2FMoscow;nt=0/0/1622702557031/////0/0/0/0/0/0/1817/6495/6495/6503/6986/7008/7038/25706/25706/;ni=;detect=0;lvid="
		"1622531536446%3A1622702582752%3A209%3A80978b2cdef2874c0abc9091fc38bf0c;opts=sec;_=0.6323815664837571;e=RT/load;et=1622702582739", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t214.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_url("142108_2", 
		"URL=https://mc.yandex.ru/watch/142108?wmode=7&page-url=https%3A%2F%2Flight.mail.ru%2Fcompose%2F%3Ffolder%3D0&page-ref=https%3A%2F%2Flight.mail.ru%2Fmessages%2Finbox%3Fauthid%3Dkpgj5prz.fko%26dwhsplit%3Ds10273.b1s%26from%3Dlogin&nohit=1&charset=utf-8&cnt-class=1&browser-info="
		"pv%3A1%3Agdpr%3A14%3Avf%3A1bo6nxnn5zutxtrx%3Afu%3A0%3Aen%3Autf-8%3Ala%3Aru-RU%3Av%3A551%3Acn%3A1%3Adp%3A0%3Als%3A448983736298%3Ahid%3A191971395%3Az%3A180%3Ai%3A20210603094302%3Aet%3A1622702583%3Ac%3A1%3Arn%3A88203721%3Au%3A1622700309306886778%3Aw%3A1903x976%3As%3A1920x1080x24%3Ask%3A1%3Ans%3A1622702557031%3Arqnl%3A1%3Afip%3A0aa8960ff311d171379f7ecd0df7025a-a81f3b9bcdd80a361c14af38dc09b309-a81f3b9bcdd80a361c14af38dc09b309-4bd84c89c35a312599d807af285e7b5f-6456f00690ac9fc94dca4eb4fd6d061a-131e42c9237"
		"e3c82052c9abd4227fb0f-61b9878bbce18de73aafc8582a198c0c-a2394cfee1eb770b55e7f92fbaeda64c-a81f3b9bcdd80a361c14af38dc09b309-c6d7b47b2dcff33f80cab17f3a360d0b-2facd2c41a0047c68391f933b930bc3a%3Ati%3A2%3Ast%3A1622702583%3At%3A%D0%9D%D0%BE%D0%B2%D0%BE%D0%B5%20%D0%BF%D0%B8%D1%81%D1%8C%D0%BC%D0%BE%20-%20test_nt_1%40mail.ru%20-%20%D0%9F%D0%BE%D1%87%D1%82%D0%B0%20Mail.ru", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t215.inf", 
		"Mode=HTML", 
		LAST);

	web_url("142108_3", 
		"URL=https://mc.yandex.ru/watch/142108?wmode=7&page-url=https%3A%2F%2Flight.mail.ru%2Fmessages%2Finbox%3Fauthid%3Dkpgj5prz.fko%26dwhsplit%3Ds10273.b1s%26from%3Dlogin&page-ref=https%3A%2F%2Faccount.mail.ru%2F&nohit=1&charset=utf-8&cnt-class=1&browser-info="
		"pv%3A1%3Agdpr%3A14%3Avf%3A1bo6nxnn5zutxtrx%3Afu%3A0%3Aen%3Autf-8%3Ala%3Aru-RU%3Av%3A551%3Acn%3A1%3Adp%3A0%3Als%3A448983736298%3Ahid%3A706576533%3Az%3A180%3Ai%3A20210603094224%3Aet%3A1622702544%3Ac%3A1%3Arn%3A1031518936%3Au%3A1622700309306886778%3Aw%3A1903x976%3As%3A1920x1080x24%3Ask%3A1%3Ans%3A1622702539076%3Anp%3AV2luMzI%3D%3Arqnl%3A2%3Ati%3A2%3Ast%3A1622702583%3At%3A(5)%20%D0%92%D1%85%D0%BE%D0%B4%D1%8F%D1%89%D0%B8%D0%B5%20-%20test_nt_1%40mail.ru%20-%20%D0%9F%D0%BE%D1%87%D1%82%D0%B0%20Mail.ru", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t216.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("cspreport.mail.ru_3", 
		"URL=https://cspreport.mail.ru/?v=1.0.1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t217.inf", 
		"Mode=HTML", 
		"EncType=application/csp-report", 
		"Body={\"csp-report\":{\"blocked-uri\":\"https://mc.yandex.md/metrika/zzlc.html\",\"document-uri\":\"https://light.mail.ru/compose/?folder=0\",\"original-policy\":\"default-src blob: wss://*.mail.ru https://www.google.com/recaptcha/ https://*.mail.ru https://*.yandex.ru https://*.radar.imgsmail.ru https://yastatic.net https://*.mradx.net https://*.imgsmail.ru; script-src 'self' 'unsafe-inline' 'unsafe-eval' https://*.mail.ru https://*.imgsmail.ru https://portal.mail.ru https://ad.mail.ru https://"
		"*.yandex.ru https://cdn.consentmanager.mgr.consensu.org https://consentmanager.mgr.consensu.org https://yastatic.net https://*.mradx.net; img-src data: blob: https: https://yastatic.net https://*.mradx.net https://*.imgsmail.ru; style-src 'self' 'unsafe-inline' 'unsafe-eval' https://*.mail.ru https://*.imgsmail.ru https://cdn.consentmanager.mgr.consensu.org https://consentmanager.mgr.consensu.org https://*.mradx.net; font-src data: https://*.mail.ru https://*.imgsmail.ru https://yastatic.net https"
		"://*.mradx.net; report-uri https://cspreport.mail.ru/?v=1.0.1\",\"referrer\":\"https://light.mail.ru/messages/inbox?authid=kpgj5prz.fko&dwhsplit=s10273.b1s&from=login\",\"violated-directive\":\"default-src\"}}", 
		LAST);

	web_revert_auto_header("Origin");

	web_add_auto_header("Origin", 
		"https://light.mail.ru");

	web_submit_data("1", 
		"Action=https://mc.yandex.ru/watch/142108/1?page-url=https%3A%2F%2Flight.mail.ru%2Fcompose%2F%3Ffolder%3D0&charset=utf-8&cnt-class=1&browser-info="
		"pa%3A1%3Aar%3A1%3Agdpr%3A14%3Avf%3A1bo6nxnn5zutxtrx%3Afp%3A6897%3Afu%3A1%3Aen%3Autf-8%3Ala%3Aru-RU%3Av%3A551%3Acn%3A1%3Adp%3A0%3Als%3A448983736298%3Ahid%3A191971395%3Az%3A180%3Ai%3A20210603094303%3Aet%3A1622702583%3Ac%3A1%3Arn%3A108837489%3Arqn%3A4%3Au%3A1622700309306886778%3Aw%3A1903x976%3As%3A1920x1080x24%3Ask%3A1%3Aeu%3A0%3Ans%3A1622702557031%3Ads%3A0%2C0%2C4678%2C0%2C0%2C0%2C%2C483%2C30%2C25706%2C25706%2C20%2C7008%3Adsn%3A0%2C0%2C4678%2C0%2C-1%2C0%2C%2C492%2C30%2C25706%2C25706%2C20%2C7009%3Arq"
		"nl%3A1%3Apu%3A31162736591622700309306886778%3Azzlc%3Ana%3Acc%3A5191215641622531000%3Afip%3A0aa8960ff311d171379f7ecd0df7025a-a81f3b9bcdd80a361c14af38dc09b309-a81f3b9bcdd80a361c14af38dc09b309-4bd84c89c35a312599d807af285e7b5f-6456f00690ac9fc94dca4eb4fd6d061a-131e42c9237e3c82052c9abd4227fb0f-61b9878bbce18de73aafc8582a198c0c-a2394cfee1eb770b55e7f92fbaeda64c-a81f3b9bcdd80a361c14af38dc09b309-c6d7b47b2dcff33f80cab17f3a360d0b-2facd2c41a0047c68391f933b930bc3a%3Ati%3A2%3Ast%3A1622702583", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=image/gif", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t218.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=site-info", "Value={\"__ym\":{\"adSessionID\":\"2701011622702574579\"}}", ENDITEM, 
		LAST);

	web_add_cookie("tmr_reqNum=214; DOMAIN=top-fwz1.mail.ru");

	web_custom_request("tracker_11", 
		"URL=https://top-fwz1.mail.ru/tracker?js=13;id=110605;u=https%3A//light.mail.ru/compose/%3Ffolder%3D0;r=https%3A//light.mail.ru/messages/inbox%3Fauthid%3Dkpgj5prz.fko%26dwhsplit%3Ds10273.b1s%26from%3Dlogin;st=1622702564017;s=1920*1080;vp=1903*976;touch=0;hds=1;flash=;sid=94835849e3d5524e;ver=60.3.0;tz=-180%2FEurope%2FMoscow;ni=;detect=0;lvid=1622531536446%3A1622702597766%3A210%3A80978b2cdef2874c0abc9091fc38bf0c;_=0.34494181376777855;e=PVT/15", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t219.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_custom_request("tracker_12", 
		"URL=https://top-fwz1.mail.ru/tracker?js=13;id=2035946;u=https%3A//light.mail.ru/compose/%3Ffolder%3D0;r=https%3A//light.mail.ru/messages/inbox%3Fauthid%3Dkpgj5prz.fko%26dwhsplit%3Ds10273.b1s%26from%3Dlogin;st=1622702564017;s=1920*1080;vp=1903*976;touch=0;hds=1;flash=;sid=94835849e3d5524e;ver=60.3.0;tz=-180%2FEurope%2FMoscow;ni=;detect=0;lvid=1622531536446%3A1622702597767%3A211%3A80978b2cdef2874c0abc9091fc38bf0c;opts=sec;_=0.9108837063616421;e=PVT/15", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t220.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_custom_request("tracker_13", 
		"URL=https://top-fwz1.mail.ru/tracker?js=13;id=3123969;u=https%3A//light.mail.ru/compose/%3Ffolder%3D0;r=https%3A//light.mail.ru/messages/inbox%3Fauthid%3Dkpgj5prz.fko%26dwhsplit%3Ds10273.b1s%26from%3Dlogin;st=1622702564017;s=1920*1080;vp=1903*976;touch=0;hds=1;flash=;sid=94835849e3d5524e;ver=60.3.0;tz=-180%2FEurope%2FMoscow;ni=;detect=0;lvid=1622531536446%3A1622702597769%3A212%3A80978b2cdef2874c0abc9091fc38bf0c;opts=sec;_=0.7222548787199667;e=PVT/15", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t221.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_custom_request("tracker_14", 
		"URL=https://top-fwz1.mail.ru/tracker?js=13;id=3206667;u=https%3A//light.mail.ru/compose/%3Ffolder%3D0;r=https%3A//light.mail.ru/messages/inbox%3Fauthid%3Dkpgj5prz.fko%26dwhsplit%3Ds10273.b1s%26from%3Dlogin;st=1622702564017;userid=test_nt_1@mail.ru;s=1920*1080;vp=1903*976;touch=0;hds=1;flash=;sid=94835849e3d5524e;ver=60.3.0;tz=-180%2FEurope%2FMoscow;ni=;detect=0;lvid=1622531536446%3A1622702597771%3A213%3A80978b2cdef2874c0abc9091fc38bf0c;opts=sec;_=0.9051968319413857;e=PVT/15", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t222.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_revert_auto_header("Origin");

	web_custom_request("tracker_15", 
		"URL=https://top-fwz1.mail.ru/tracker?js=13;id=3210335;u=https%3A//light.mail.ru/compose/%3Ffolder%3D0;r=https%3A//light.mail.ru/messages/inbox%3Fauthid%3Dkpgj5prz.fko%26dwhsplit%3Ds10273.b1s%26from%3Dlogin;st=1622702564017;userid=test_nt_1@mail.ru;s=1920*1080;vp=1903*976;touch=0;hds=1;flash=;sid=94835849e3d5524e;ver=60.3.0;tz=-180%2FEurope%2FMoscow;ni=;detect=0;lvid=1622531536446%3A1622702597772%3A214%3A80978b2cdef2874c0abc9091fc38bf0c;opts=sec;_=0.2644536490568491;e=PVT/15", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t223.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_add_cookie("tmr_reqNum=219; DOMAIN=top-fwz1.mail.ru");

	web_add_auto_header("Origin", 
		"https://light.mail.ru");

	lr_think_time(18);

	web_custom_request("tracker_16", 
		"URL=https://top-fwz1.mail.ru/tracker?js=13;id=110605;u=https%3A//light.mail.ru/compose/%3Ffolder%3D0;r=https%3A//light.mail.ru/messages/inbox%3Fauthid%3Dkpgj5prz.fko%26dwhsplit%3Ds10273.b1s%26from%3Dlogin;st=1622702564017;s=1920*1080;vp=1903*976;touch=0;hds=1;flash=;sid=94835849e3d5524e;ver=60.3.0;tz=-180%2FEurope%2FMoscow;ni=;detect=0;lvid=1622531536446%3A1622702616903%3A215%3A80978b2cdef2874c0abc9091fc38bf0c;_=0.6327548386500943;e=RT/unload;et=1622702616902;pvt=52885", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t224.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_custom_request("tracker_17", 
		"URL=https://top-fwz1.mail.ru/tracker?js=13;id=2035946;u=https%3A//light.mail.ru/compose/%3Ffolder%3D0;r=https%3A//light.mail.ru/messages/inbox%3Fauthid%3Dkpgj5prz.fko%26dwhsplit%3Ds10273.b1s%26from%3Dlogin;st=1622702564017;s=1920*1080;vp=1903*976;touch=0;hds=1;flash=;sid=94835849e3d5524e;ver=60.3.0;tz=-180%2FEurope%2FMoscow;ni=;detect=0;lvid=1622531536446%3A1622702616904%3A216%3A80978b2cdef2874c0abc9091fc38bf0c;opts=sec;_=0.27964563369241824;e=RT/unload;et=1622702616902;pvt=52885", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t225.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_custom_request("tracker_18", 
		"URL=https://top-fwz1.mail.ru/tracker?js=13;id=3123969;u=https%3A//light.mail.ru/compose/%3Ffolder%3D0;r=https%3A//light.mail.ru/messages/inbox%3Fauthid%3Dkpgj5prz.fko%26dwhsplit%3Ds10273.b1s%26from%3Dlogin;st=1622702564017;s=1920*1080;vp=1903*976;touch=0;hds=1;flash=;sid=94835849e3d5524e;ver=60.3.0;tz=-180%2FEurope%2FMoscow;ni=;detect=0;lvid=1622531536446%3A1622702616907%3A217%3A80978b2cdef2874c0abc9091fc38bf0c;opts=sec;_=0.9153228141078679;e=RT/unload;et=1622702616902;pvt=52885", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t226.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_custom_request("tracker_19", 
		"URL=https://top-fwz1.mail.ru/tracker?js=13;id=3206667;u=https%3A//light.mail.ru/compose/%3Ffolder%3D0;r=https%3A//light.mail.ru/messages/inbox%3Fauthid%3Dkpgj5prz.fko%26dwhsplit%3Ds10273.b1s%26from%3Dlogin;st=1622702564017;userid=test_nt_1@mail.ru;s=1920*1080;vp=1903*976;touch=0;hds=1;flash=;sid=94835849e3d5524e;ver=60.3.0;tz=-180%2FEurope%2FMoscow;ni=;detect=0;lvid=1622531536446%3A1622702616908%3A218%3A80978b2cdef2874c0abc9091fc38bf0c;opts=sec;_=0.09911950868526986;e=RT/unload;et=1622702616902;"
		"pvt=52885", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t227.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_revert_auto_header("Origin");

	web_add_auto_header("Origin", 
		"https://light.mail.ru");

	web_custom_request("tracker_20", 
		"URL=https://top-fwz1.mail.ru/tracker?js=13;id=3210335;u=https%3A//light.mail.ru/compose/%3Ffolder%3D0;r=https%3A//light.mail.ru/messages/inbox%3Fauthid%3Dkpgj5prz.fko%26dwhsplit%3Ds10273.b1s%26from%3Dlogin;st=1622702564017;userid=test_nt_1@mail.ru;s=1920*1080;vp=1903*976;touch=0;hds=1;flash=;sid=94835849e3d5524e;ver=60.3.0;tz=-180%2FEurope%2FMoscow;ni=;detect=0;lvid=1622531536446%3A1622702616909%3A219%3A80978b2cdef2874c0abc9091fc38bf0c;opts=sec;_=0.4652104809777775;e=RT/unload;et=1622702616902;pvt"
		"=52885", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t228.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_add_cookie("tmr_reqNum=219; DOMAIN=light.mail.ru");

	web_add_cookie("tmr_detect=0%7C1622702566837; DOMAIN=light.mail.ru");

	web_reg_find("Text=Письмо отправлено - test_nt_1@mail.ru - Почта Mail.ru", 
		LAST);

	web_revert_auto_header("Origin");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

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
		"Name=form_sign", "Value=410128643619954147831296167803621882439", ENDITEM, 
		"Name=form_token", "Value=5b5d465f7163537b1900030708010903060705020c00020104020309070303000606070e0108020603060d0f0705070e184255584c5f415f", ENDITEM, 
		"Name=message", "Value=1rBfIrAE", ENDITEM, 
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
		"Name=Subject", "Value=Tema", ENDITEM, 
		"Name=File", "Value=", "File=Yes", ENDITEM, 
		"Name=Body", "Value=\r\nHello,my friend!\r\n\r\n-- \r\nMary N\r\n\r\n", ENDITEM, 
		"Name=captcha", "Value=", ENDITEM, 
		LAST);

	web_add_cookie("tmr_reqNum=224; DOMAIN=top-fwz1.mail.ru");

	web_add_auto_header("Origin", 
		"https://light.mail.ru");

	web_custom_request("counter_11", 
		"URL=https://top-fwz1.mail.ru/counter?js=13;id=110605;u=https%3A//light.mail.ru/messages/inbox%3Ffromcomposemsg%3D1;r=https%3A//light.mail.ru/compose/%3Ffolder%3D0;st=1622702618381;s=1920*1080;vp=1920*976;touch=0;hds=1;flash=;sid=ee96cf3141e9c105;ver=60.3.0;tz=-180%2FEurope%2FMoscow;ni=;detect=0;lvid=1622531536446%3A1622702618874%3A220%3A80978b2cdef2874c0abc9091fc38bf0c;_=0.4058097131658084", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t230.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_revert_auto_header("Origin");

	web_custom_request("counter_12", 
		"URL=https://top-fwz1.mail.ru/counter?js=13;id=2035946;u=https%3A//light.mail.ru/messages/inbox%3Ffromcomposemsg%3D1;r=https%3A//light.mail.ru/compose/%3Ffolder%3D0;st=1622702618381;s=1920*1080;vp=1920*976;touch=0;hds=1;flash=;sid=ee96cf3141e9c105;ver=60.3.0;tz=-180%2FEurope%2FMoscow;ni=;detect=0;lvid=1622531536446%3A1622702618877%3A221%3A80978b2cdef2874c0abc9091fc38bf0c;opts=sec;_=0.5134988978141533", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t231.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_add_auto_header("Origin", 
		"https://light.mail.ru");

	web_custom_request("counter_13", 
		"URL=https://top-fwz1.mail.ru/counter?js=13;id=3123969;u=https%3A//light.mail.ru/messages/inbox%3Ffromcomposemsg%3D1;r=https%3A//light.mail.ru/compose/%3Ffolder%3D0;st=1622702618381;s=1920*1080;vp=1920*976;touch=0;hds=1;flash=;sid=ee96cf3141e9c105;ver=60.3.0;tz=-180%2FEurope%2FMoscow;ni=;detect=0;lvid=1622531536446%3A1622702618880%3A222%3A80978b2cdef2874c0abc9091fc38bf0c;opts=sec;_=0.4678387524243717", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t232.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_add_cookie("VID=2vLEvU2oV6o200000U0yD4o2:::5d2d28c-0-0-5d03690:CAASEGmJTDCIs0Rjh2hw5MYH3t0aYPrLs26WUwp5zfDuIqbLkG2gfDmQ74O3qcpF2EaKZnJVUyNu5T9Ew3_yW8x-Vqk206DcKeTiK9ZmeSjI_dBIB2TggCRZT_FsPTVRyTIs5L1LS-s9nV1x4zbeXoM8i3VDLw; DOMAIN=top-fwz1.mail.ru");

	web_custom_request("counter_14", 
		"URL=https://top-fwz1.mail.ru/counter?js=13;id=3206667;u=https%3A//light.mail.ru/messages/inbox%3Ffromcomposemsg%3D1;r=https%3A//light.mail.ru/compose/%3Ffolder%3D0;st=1622702618381;userid=test_nt_1@mail.ru;s=1920*1080;vp=1920*976;touch=0;hds=1;flash=;sid=ee96cf3141e9c105;ver=60.3.0;tz=-180%2FEurope%2FMoscow;ni=;detect=0;lvid=1622531536446%3A1622702618882%3A223%3A80978b2cdef2874c0abc9091fc38bf0c;opts=sec;_=0.9282439820998031", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t233.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_revert_auto_header("Origin");

	web_add_auto_header("Origin", 
		"https://light.mail.ru");

	web_custom_request("counter_15", 
		"URL=https://top-fwz1.mail.ru/counter?js=13;id=3210335;u=https%3A//light.mail.ru/messages/inbox%3Ffromcomposemsg%3D1;r=https%3A//light.mail.ru/compose/%3Ffolder%3D0;st=1622702618381;userid=test_nt_1@mail.ru;s=1920*1080;vp=1920*976;touch=0;hds=1;flash=;sid=ee96cf3141e9c105;ver=60.3.0;tz=-180%2FEurope%2FMoscow;ni=;detect=0;lvid=1622531536446%3A1622702618884%3A224%3A80978b2cdef2874c0abc9091fc38bf0c;opts=sec;_=0.4339281867116175", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t234.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	lr_end_transaction("CREATE_LETTER",LR_AUTO);

	web_revert_auto_header("Origin");

	web_custom_request("cspreport.mail.ru_4", 
		"URL=https://cspreport.mail.ru/?v=1.0.1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t235.inf", 
		"Mode=HTML", 
		"EncType=application/csp-report", 
		"Body={\"csp-report\":{\"blocked-uri\":\"https://gum.criteo.com/sync?c=405&r=2&j=rtus_callback\",\"column-number\":33,\"document-uri\":\"https://light.mail.ru/messages/inbox?fromcomposemsg=1\",\"line-number\":57,\"original-policy\":\"default-src blob: wss://*.mail.ru https://www.google.com/recaptcha/ https://*.mail.ru https://*.yandex.ru https://*.radar.imgsmail.ru https://yastatic.net https://*.mradx.net https://*.imgsmail.ru; script-src 'self' 'unsafe-inline' 'unsafe-eval' https://*.mail.ru https"
		"://*.imgsmail.ru https://portal.mail.ru https://ad.mail.ru https://*.yandex.ru https://cdn.consentmanager.mgr.consensu.org https://consentmanager.mgr.consensu.org https://yastatic.net https://*.mradx.net; img-src data: blob: https: https://yastatic.net https://*.mradx.net https://*.imgsmail.ru; style-src 'self' 'unsafe-inline' 'unsafe-eval' https://*.mail.ru https://*.imgsmail.ru https://cdn.consentmanager.mgr.consensu.org https://consentmanager.mgr.consensu.org https://*.mradx.net; font-src data:"
		" https://*.mail.ru https://*.imgsmail.ru https://yastatic.net https://*.mradx.net; report-uri https://cspreport.mail.ru/?v=1.0.1\",\"referrer\":\"https://light.mail.ru/compose/?folder=0\",\"source-file\":\"https://js.imgsmail.ru/mail/m/data/utf/ts/1620726240/light/js/build/app.min.js?v=3.240%20line%201%20%3E%20eval\",\"violated-directive\":\"script-src\"}}", 
		LAST);

	web_add_auto_header("Origin", 
		"https://light.mail.ru");

	web_custom_request("142108_4", 
		"URL=https://an.yandex.ru/meta/142108?target-ref=https%3A%2F%2Flight.mail.ru%2Fmessages%2Finbox%3Ffromcomposemsg%3D1&page-ref=https%3A%2F%2Flight.mail.ru%2Fcompose%2F%3Ffolder%3D0&charset=utf-8&pcode-test-ids=363741%2C0%2C55%3B364539%2C0%2C20%3B362536%2C0%2C81%3B367340%2C0%2C59%3B356980%2C0%2C34%3B369243%2C0%2C26%3B351586%2C0%2C48%3B369110%2C0%2C32%3B369812%2C0%2C45&pcode-flags="
		"%7B%22USE_WIDGET_FROM_PCODE%22%3Atrue%2C%22COMBO_HEADER%22%3A%22withoutHeader%22%2C%22SINGLE_CONTEXT_BLACKLIST%22%3A%5B%5D%2C%22USE_SUPERBUNDLE%22%3Atrue%2C%22USE_SMART_SSR%22%3A%221%22%2C%22SINGLE_CONTEXT%22%3Atrue%2C%22DEFAULT_SSR_FORMATS%22%3A%5B%22zen%22%2C%22zen2%22%2C%22zen2-gallery%22%2C%22billboard%22%2C%22horizontal%22%2C%22horizontal0318%22%2C%22constructor%22%2C%22modernAdaptive%22%5D%2C%22SSR_UNIFORMAT%22%3A%221%22%2C%22SSR_PERCENT_LOGGING%22%3A0.1%2C%22ADAPTIVE_TOWER_VIDEO%22%3A%22exp"
		"%22%2C%22DEFAULT_BLACKLIST_PAGES%22%3A%5B%22419507%22%2C%22419506%22%2C%22106253%22%2C%22188382%22%2C%22189903%22%5D%2C%22COMBO_PACKSHOT_EXP%22%3A%22exp%22%2C%22SMART_BANNER_CAROUSEL%22%3A%22legacy%22%2C%22CUSTOM_DOMAIN_TEXT_FLAGS%22%3A%22ctl%22%2C%22LEADERBOARD_VIDEO%22%3A%22exp%22%2C%22DISABLE_VIDEO_CONTROL%22%3A%22ctl%22%2C%22RMP_POSTER_2%22%3A%22stickyColor%22%2C%22SMART_BANNER_LAYOUT_VERSION%22%3A%22control%22%2C%22PCODEVER%22%3A%2214855%22%7D&server-side-rendering-enabled-formats="
		"zen%0Azen2%0Azen2-gallery%0Abillboard%0Ahorizontal%0Ahorizontal0318%0Aconstructor%0AmodernAdaptive&raw-smart-content=1&smart-format-names=smart-banner-adaptive_v1%0Asmart-banner-mosaic_v1&pcode-icookie=7171949581622700283&imp-id=383&test-tag=293569604616194&ad-session-id=4483401622702621524&target-id=48915695&tga-with-creatives=1&pcode-version=14870&pcodever=14870&flash-ver=0&available-width=240&available-height=400&layout-config="
		"%7B%22win_width%22%3A1920%2C%22win_height%22%3A976%2C%22pixel_ratio%22%3A1%2C%22bandwidth%22%3A-1%2C%22w%22%3A239%2C%22h%22%3A400%2C%22width%22%3A240%2C%22height%22%3A400%2C%22visible%22%3A1%2C%22left%22%3A95%2C%22top%22%3A637%2C%22ad_no%22%3A0%2C%22req_no%22%3A0%7D&uniformat=true&callback=Ya%5B1809005588196%5D", 
		"Method=GET", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t236.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded", 
		LAST);

	lr_start_transaction("LOG_OUT");

	web_custom_request("jstracer_2", 
		"URL=https://an.yandex.ru/jstracer?pcode_native=14870&values=performance&adb=false&verison=14870&bundle_version=14870&widget_pf=no", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t237.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"service\":\"pcode_native\",\"tags\":{\"L_010\":0,\"L_020\":0,\"L_030\":0,\"L_040\":0,\"L_050\":1937,\"L_060\":4},\"labels\":{\"adb\":\"false\",\"verison\":\"14870\",\"bundle_version\":\"14870\",\"widget_pf\":\"no\",\"version\":\"14870\"},\"timestamp\":1622702621537,\"eventType\":\"values\",\"eventName\":\"performance\",\"data\":{\"adfox\":false,\"pcode\":false},\"sid\":\"4483401622702621524\",\"version\":\"14870\",\"location\":\"https://light.mail.ru/messages/inbox?fromcomposemsg=1\",\""
		"topLocation\":\"https://light.mail.ru/messages/inbox?fromcomposemsg=1\",\"topAncestor\":\"https://light.mail.ru\",\"ancestorOrigins\":[],\"documentIsVisible\":true,\"referrer\":\"https://light.mail.ru/compose/?folder=0\",\"topReferrer\":\"https://light.mail.ru/compose/?folder=0\",\"currentScriptSrc\":\"https://an.yandex.ru/system/widget.js\",\"secureIFrame\":false,\"isVideoADB\":false,\"value\":1,\"rnd\":0.3524740973579008,\"topDocumentFocus\":false}", 
		LAST);

	web_add_cookie("tmr_reqNum=229; DOMAIN=top-fwz1.mail.ru");

	web_custom_request("tracker_21", 
		"URL=https://top-fwz1.mail.ru/tracker?js=13;id=110605;u=https%3A//light.mail.ru/messages/inbox%3Ffromcomposemsg%3D1;r=https%3A//light.mail.ru/compose/%3Ffolder%3D0;st=1622702618381;s=1920*1080;vp=1903*976;touch=0;hds=1;flash=;sid=ee96cf3141e9c105;ver=60.3.0;tz=-180%2FEurope%2FMoscow;ni=;detect=0;lvid=1622531536446%3A1622702628614%3A225%3A80978b2cdef2874c0abc9091fc38bf0c;_=0.18686767691762607;e=RT/unload;et=1622702628613;pvt=10232", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t238.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_add_cookie("VID=2vLEvU2oV6o200000U0yD4o2:::5d2d28c-0-0-5d03690:CAASEJpiYI_cUedloYvfyrR4kbAaYBq9ea9mpRsU7UGW7RYDMh5ol_JTLNAx6lJrQpa7sK3ssSND_thEzztlsE5hdHmWqAeiYqzDM6AW6VrGdY2_fmkWXawybdb9uu-cicnjSJuhQ8mGnzfms6zfSFtVgx764Q; DOMAIN=top-fwz1.mail.ru");

	web_custom_request("tracker_22", 
		"URL=https://top-fwz1.mail.ru/tracker?js=13;id=2035946;u=https%3A//light.mail.ru/messages/inbox%3Ffromcomposemsg%3D1;r=https%3A//light.mail.ru/compose/%3Ffolder%3D0;st=1622702618381;s=1920*1080;vp=1903*976;touch=0;hds=1;flash=;sid=ee96cf3141e9c105;ver=60.3.0;tz=-180%2FEurope%2FMoscow;ni=;detect=0;lvid=1622531536446%3A1622702628615%3A226%3A80978b2cdef2874c0abc9091fc38bf0c;opts=sec;_=0.8720664340094264;e=RT/unload;et=1622702628613;pvt=10232", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t239.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_custom_request("tracker_23", 
		"URL=https://top-fwz1.mail.ru/tracker?js=13;id=3123969;u=https%3A//light.mail.ru/messages/inbox%3Ffromcomposemsg%3D1;r=https%3A//light.mail.ru/compose/%3Ffolder%3D0;st=1622702618381;s=1920*1080;vp=1903*976;touch=0;hds=1;flash=;sid=ee96cf3141e9c105;ver=60.3.0;tz=-180%2FEurope%2FMoscow;ni=;detect=0;lvid=1622531536446%3A1622702628617%3A227%3A80978b2cdef2874c0abc9091fc38bf0c;opts=sec;_=0.4977356069068848;e=RT/unload;et=1622702628613;pvt=10232", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t240.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_url("142108_5", 
		"URL=https://an.yandex.ru/meta/142108?imp-id=387&target-ref=https%3A%2F%2Flight.mail.ru%2Fmessages%2Finbox%3Ffromcomposemsg%3D1&page-ref=https%3A%2F%2Flight.mail.ru%2Fcompose%2F%3Ffolder%3D0&ad-session-id=4483401622702621524&ss-skip-token-length=30&layout-config="
		"%7B%22win_width%22%3A1920%2C%22win_height%22%3A976%2C%22pixel_ratio%22%3A1%2C%22bandwidth%22%3A-1%2C%22w%22%3A1446.9833984375%2C%22h%22%3A0%2C%22width%22%3A1447%2C%22height%22%3A0%2C%22visible%22%3A1%2C%22left%22%3A359%2C%22top%22%3A451%2C%22req_no%22%3A0%2C%22ad_no%22%3A0%7D&test-tag=293569744601101&tga-with-creatives=1&return-widget-settings=1&yaw_ver=14870&pcodever=14870&use-server-side-rendering=1&pcode-test-ids="
		"363741%2C0%2C73%3B364539%2C0%2C16%3B362532%2C0%2C60%3B367340%2C0%2C71%3B356980%2C0%2C46%3B369240%2C0%2C38%3B351578%2C0%2C68%3B367337%2C0%2C11%3B369812%2C0%2C99&available-width=1446.9833984375&pcode-icookie=4019394421622700307", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t241.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("tracker_24", 
		"URL=https://top-fwz1.mail.ru/tracker?js=13;id=3206667;u=https%3A//light.mail.ru/messages/inbox%3Ffromcomposemsg%3D1;r=https%3A//light.mail.ru/compose/%3Ffolder%3D0;st=1622702618381;userid=test_nt_1@mail.ru;s=1920*1080;vp=1903*976;touch=0;hds=1;flash=;sid=ee96cf3141e9c105;ver=60.3.0;tz=-180%2FEurope%2FMoscow;ni=;detect=0;lvid=1622531536446%3A1622702628618%3A228%3A80978b2cdef2874c0abc9091fc38bf0c;opts=sec;_=0.16258126579835608;e=RT/unload;et=1622702628613;pvt=10232", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t242.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_revert_auto_header("Origin");

	web_custom_request("tracker_25", 
		"URL=https://top-fwz1.mail.ru/tracker?js=13;id=3210335;u=https%3A//light.mail.ru/messages/inbox%3Ffromcomposemsg%3D1;r=https%3A//light.mail.ru/compose/%3Ffolder%3D0;st=1622702618381;userid=test_nt_1@mail.ru;s=1920*1080;vp=1903*976;touch=0;hds=1;flash=;sid=ee96cf3141e9c105;ver=60.3.0;tz=-180%2FEurope%2FMoscow;ni=;detect=0;lvid=1622531536446%3A1622702628618%3A229%3A80978b2cdef2874c0abc9091fc38bf0c;opts=sec;_=0.5588781648765054;e=RT/unload;et=1622702628613;pvt=10232", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t243.inf", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_add_auto_header("Origin", 
		"https://light.mail.ru");

	web_custom_request("jstracer_3", 
		"URL=https://an.yandex.ru/jstracer?pcode_native=14870&values=performance&adb=false&verison=14870&bundle_version=14870&widget_pf=no", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t244.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		"Body={\"service\":\"pcode_native\",\"tags\":{\"B_010\":0,\"B_020\":0,\"B_030\":0,\"B_040\":0,\"B_050\":261,\"B_060\":2,\"M_010\":0,\"M_020\":0,\"M_030\":0,\"M_040\":0,\"M_050\":155,\"M_060\":3},\"labels\":{\"adb\":\"false\",\"verison\":\"14870\",\"bundle_version\":\"14870\",\"widget_pf\":\"no\",\"version\":\"14870\"},\"timestamp\":1622702628632,\"eventType\":\"values\",\"eventName\":\"performance\",\"data\":{\"adfox\":false,\"pcode\":false},\"sid\":\"4483401622702621524\",\"version\":\"14870\",\""
		"location\":\"https://light.mail.ru/messages/inbox?fromcomposemsg=1\",\"topLocation\":\"https://light.mail.ru/messages/inbox?fromcomposemsg=1\",\"topAncestor\":\"https://light.mail.ru\",\"ancestorOrigins\":[],\"documentIsVisible\":true,\"referrer\":\"https://light.mail.ru/compose/?folder=0\",\"topReferrer\":\"https://light.mail.ru/compose/?folder=0\",\"currentScriptSrc\":\"https://an.yandex.ru/system/widget.js\",\"secureIFrame\":false,\"isVideoADB\":false,\"value\":1,\"rnd\":0.3524740973579008,\""
		"topDocumentFocus\":true}", 
		LAST);

	lr_think_time(6);

	web_submit_data("1_2", 
		"Action=https://mc.yandex.ru/watch/142108/1?page-url=https%3A%2F%2Flight.mail.ru%2Fmessages%2Finbox%3Ffromcomposemsg%3D1&charset=utf-8&cnt-class=1&browser-info="
		"pa%3A1%3Aar%3A1%3Agdpr%3A14%3Avf%3A1bo6nxnn5zutxtrx%3Afp%3A1343%3Afu%3A1%3Aen%3Autf-8%3Ala%3Aru-RU%3Av%3A551%3Acn%3A1%3Adp%3A0%3Als%3A448983736298%3Ahid%3A1061281284%3Az%3A180%3Ai%3A20210603094350%3Aet%3A1622702631%3Ac%3A1%3Arn%3A210479705%3Arqn%3A7%3Au%3A1622700309306886778%3Aw%3A1903x976%3As%3A1920x1080x24%3Ask%3A1%3Ans%3A1622702616901%3Ads%3A0%2C0%2C99%2C4%2C989%2C981%2C1%2C350%2C17%2C11718%2C%2C%2C1537%3Adsn%3A0%2C0%2C99%2C5%2C988%2C980%2C1%2C355%2C18%2C11719%2C%2C%2C1537%3Arqnl%3A1%3Afip%3A0a"
		"a8960ff311d171379f7ecd0df7025a-a81f3b9bcdd80a361c14af38dc09b309-a81f3b9bcdd80a361c14af38dc09b309-4bd84c89c35a312599d807af285e7b5f-6456f00690ac9fc94dca4eb4fd6d061a-131e42c9237e3c82052c9abd4227fb0f-61b9878bbce18de73aafc8582a198c0c-a2394cfee1eb770b55e7f92fbaeda64c-a81f3b9bcdd80a361c14af38dc09b309-c6d7b47b2dcff33f80cab17f3a360d0b-2facd2c41a0047c68391f933b930bc3a%3Ati%3A2%3Ast%3A1622702631", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=image/gif", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t245.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=site-info", "Value={\"__ym\":{\"adSessionID\":\"4483401622702621524\"}}", ENDITEM, 
		LAST);

	web_revert_auto_header("Origin");

	web_custom_request("status.geotrust.com_11", 
		"URL=http://status.geotrust.com/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t246.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"Body=0Q0O0M0K0I0\t+", 
		LAST);

	web_add_cookie("mrcu=CE2D60B5DDCF61BFBB5A1324FC6D; DOMAIN=mail.ru");

	web_add_cookie("p=Do8AACWvkQAA; DOMAIN=mail.ru");

	web_add_cookie("i=AQBqcLhgAwATAAgEAXseAb0HCAQBghUBiQ0FAgEA; DOMAIN=mail.ru");

	web_add_cookie("s=octavius=1|fver=0|ww=1920|wh=976; DOMAIN=mail.ru");

	web_add_cookie("tmr_reqNum=229; DOMAIN=mail.ru");

	web_add_cookie("tmr_lvid=80978b2cdef2874c0abc9091fc38bf0c; DOMAIN=mail.ru");

	web_add_cookie("tmr_lvidTS=1622531536446; DOMAIN=mail.ru");

	web_add_cookie("b=XEkJAKDlQBUAb4S/C/U5wwwBAAAYMwAAGOP+NwlX66wLlwk4DK2EvwuJLdEJ; DOMAIN=mail.ru");

	web_add_cookie("VID=2vLEvU2oV6o200000U0yD4o2:::5d2d28c-0-0-5d03690:CAASEPA-lwCHieZCDrmIxfgzDIYaYEoiFqookAsvRRI8hq_8Ii7bI9fcIoF7tT9T3qzCD2yUO8AslGgF9wfHCHKGcgyJGf1vWvqw5uuB9qB_-RqrixwAG-PoOOA8MUBSHdWu_LnuOxTbkEj0x4MweStBfKypdA; DOMAIN=mail.ru");

	web_add_cookie("searchuid=2383026761622531533; DOMAIN=mail.ru");

	web_add_cookie("c=IHq4YAUAEHsTAAAkAAAAMwb5IX/svFBuHCWXAAAC; DOMAIN=mail.ru");

	web_add_cookie("t=obLD1AAAAAAIAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAACAAAAAAAAAAAAAACAAAYDzAcA; DOMAIN=mail.ru");

	web_add_cookie("Mpop=1619934231:5b5d465f7163537b1905000017031f051c054f6c5150445e05190401041d455c43436e574d6700115c565c5b1b4341:test_nt_1@mail.ru:; DOMAIN=mail.ru");

	web_add_cookie("tmr_detect=0%7C1622700330576; DOMAIN=mail.ru");

	web_add_cookie("act=12a6e26869ef4572b6babc792c2b7f82; DOMAIN=mail.ru");

	web_reg_find("Text=Mail.ru: почта, поиск в интернете, новости, игры", 
		LAST);

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("logout", 
		"URL=https://auth.mail.ru/cgi-bin/logout?page=https%3A%2F%2Fmail.ru%2F%3Ffrom%3Dlogout", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t247.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("p=Do8AACWvkQAA; DOMAIN=xray.mail.ru");

	web_add_cookie("tmr_reqNum=231; DOMAIN=xray.mail.ru");

	web_add_cookie("tmr_lvid=80978b2cdef2874c0abc9091fc38bf0c; DOMAIN=xray.mail.ru");

	web_add_cookie("tmr_lvidTS=1622531536446; DOMAIN=xray.mail.ru");

	web_add_auto_header("Origin", 
		"https://mail.ru");

	web_custom_request("batch_12", 
		"URL=https://xray.mail.ru/batch?p=whiteline&r=https%3A%2F%2Flight.mail.ru%2F&pgid=kpgj97k7.v5", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://mail.ru/", 
		"Snapshot=t248.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=batch="
		"%5B%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22true%22%2C%22i%22%3A%22home%3A1%22%2C%22value%22%3A%221%22%2C%22t%22%3A%22load_inline%22%2C%22uid%22%3A%220%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22true%22%2C%22i%22%3A%22home%3A1%22%2C%22value%22%3A%221%22%2C%22t%22%3A%22is-modern%22%2C%22uid%22%3A%221%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22true%22%2C%22i%22%3A%22home%3A1%22%2C%22value%22%3A%221%22%2C%22t%22%3A%22load_inline_2.20.6%22%2C%22uid%22%3A%222%22%7D%2C%7B%22v%22%3A%221%22"
		"%2C%22skipdwh%22%3A%22true%22%2C%22i%22%3A%22home%3A1%22%2C%22value%22%3A%221%22%2C%22t%22%3A%22social_counters_hit_ok%22%2C%22uid%22%3A%223%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22true%22%2C%22i%22%3A%22home%3A1%22%2C%22value%22%3A%221%22%2C%22t%22%3A%22social_counters_hit_vk%22%2C%22uid%22%3A%224%22%7D%5D", 
		LAST);

	web_add_cookie("tmr_reqNum=231; DOMAIN=portal.mail.ru");

	web_add_cookie("c=IHq4YAUAEHsTAAAkAAAAMwb5IX/svFBuHCWXAAAC; DOMAIN=portal.mail.ru");

	web_revert_auto_header("Origin");

	web_url("NaviData_3", 
		"URL=https://portal.mail.ru/NaviData?mac=1&Socials=1&ldata=1&_=0.18666382737747345", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://mail.ru/", 
		"Snapshot=t249.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("tmr_reqNum=231; DOMAIN=mail.ru");

	web_add_header("Origin", 
		"https://mail.ru");

	web_custom_request("batch_13", 
		"URL=https://mail.ru/api/v1/utils/xray/batch?p=resplash&r=https%3A%2F%2Flight.mail.ru%2F&pgid=kpgj976x.udi", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=https://mail.ru/?from=logout", 
		"Snapshot=t250.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=batch="
		"%5B%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22dwh%22%3A%22%7B%5C%22id%5C%22%3A%5C%22kpgj97xes5s%5C%22%7D%22%2C%22t%22%3A%22pk-xray-ready%22%2C%22uid%22%3A%220%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22false%22%2C%22dwh%22%3A%22%7B%5C%22id%5C%22%3A%5C%22kpgj97xes5s%5C%22%7D%22%2C%22i%22%3A%22split_%3A1%22%2C%22t%22%3A%22hit_top%22%2C%22uid%22%3A%221%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22true%22%2C%22dwh%22%3A%22%7B%5C%22id%5C%22%3A%5C%22kpgj97xes5s%5C%22%7D%22%2C%22"
		"rlog%22%3A%22resplash_xray_err%22%2C%22rlog_message%22%3A%22%7B%5C%22t%5C%22%3A%5C%22pk-device%5C%22%2C%5C%22err%5C%22%3A%5C%22xray_send_dwh-with-skipdwh%5C%22%7D%22%2C%22t%22%3A%22xray_send_dwh-with-skipdwh%22%2C%22uid%22%3A%223%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22true%22%2C%22dwh%22%3A%22%7B%5C%22id%5C%22%3A%5C%22kpgj97xes5s%5C%22%7D%22%2C%22t%22%3A%22pk-device%22%2C%22i%22%3A%22type_unk%3A1%2Cexp_high%3A1%22%2C%22uid%22%3A%222%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22true"
		"%22%2C%22dwh%22%3A%22%7B%5C%22id%5C%22%3A%5C%22kpgj97xes5s%5C%22%7D%22%2C%22rlog%22%3A%22resplash_xray_err%22%2C%22rlog_message%22%3A%22%7B%5C%22t%5C%22%3A%5C%22pk-nav-net%5C%22%2C%5C%22err%5C%22%3A%5C%22xray_send_dwh-with-skipdwh%5C%22%7D%22%2C%22t%22%3A%22xray_send_dwh-with-skipdwh%22%2C%22uid%22%3A%225%22%7D%2C%7B%22v%22%3A%229627%22%2C%22skipdwh%22%3A%22true%22%2C%22dwh%22%3A%22%7B%5C%22id%5C%22%3A%5C%22kpgj97xes5s%5C%22%7D%22%2C%22t%22%3A%22pk-nav-net%22%2C%22i%22%3A%22dns%3A27%2Ctcp%3A9534%2"
		"Crequest%3A0%2Cresponse%3A0%22%2C%22uid%22%3A%224%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22true%22%2C%22dwh%22%3A%22%7B%5C%22id%5C%22%3A%5C%22kpgj97xes5s%5C%22%7D%22%2C%22rlog%22%3A%22resplash_xray_err%22%2C%22rlog_message%22%3A%22%7B%5C%22t%5C%22%3A%5C%22pk-conn%5C%22%2C%5C%22err%5C%22%3A%5C%22xray_send_dwh-with-skipdwh%5C%22%7D%22%2C%22t%22%3A%22xray_send_dwh-with-skipdwh%22%2C%22uid%22%3A%227%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22true%22%2C%22dwh%22%3A%22%7B%5C%22id%5C%22%3"
		"A%5C%22kpgj97xes5s%5C%22%7D%22%2C%22t%22%3A%22pk-conn%22%2C%22i%22%3A%22effective_type_unk%3A1%22%2C%22uid%22%3A%226%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22true%22%2C%22dwh%22%3A%22%7B%5C%22id%5C%22%3A%5C%22kpgj97xes5s%5C%22%7D%22%2C%22rlog%22%3A%22resplash_xray_err%22%2C%22rlog_message%22%3A%22%7B%5C%22t%5C%22%3A%5C%22pk-init%5C%22%2C%5C%22err%5C%22%3A%5C%22xray_send_dwh-with-skipdwh%5C%22%7D%22%2C%22t%22%3A%22xray_send_dwh-with-skipdwh%22%2C%22uid%22%3A%229%22%7D%2C%7B%22v%22%3A%22127"
		"14%22%2C%22skipdwh%22%3A%22true%22%2C%22dwh%22%3A%22%7B%5C%22id%5C%22%3A%5C%22kpgj97xes5s%5C%22%7D%22%2C%22t%22%3A%22pk-init%22%2C%22i%22%3A%22ver_200050000%3A1%2Cscore_slow%3A12714%22%2C%22uid%22%3A%228%22%7D%2C%7B%22v%22%3A%221%22%2C%22skipdwh%22%3A%22true%22%2C%22dwh%22%3A%22%7B%5C%22id%5C%22%3A%5C%22kpgj97xes5s%5C%22%7D%22%2C%22rlog%22%3A%22resplash_xray_err%22%2C%22rlog_message%22%3A%22%7B%5C%22t%5C%22%3A%5C%22pk-paint%5C%22%2C%5C%22err%5C%22%3A%5C%22xray_send_dwh-with-skipdwh%5C%22%7D%22%2C%"
		"22t%22%3A%22xray_send_dwh-with-skipdwh%22%2C%22uid%22%3A%2211%22%7D%2C%7B%22v%22%3A%2213032%22%2C%22skipdwh%22%3A%22true%22%2C%22dwh%22%3A%22%7B%5C%22id%5C%22%3A%5C%22kpgj97xes5s%5C%22%7D%22%2C%22t%22%3A%22pk-paint%22%2C%22i%22%3A%22first-contentful-paint%3A13032%2Cscore_poor%3A13032%22%2C%22uid%22%3A%2210%22%7D%5D", 
		LAST);

	lr_end_transaction("LOG_OUT",LR_AUTO);

	return 0;
}