# 1 "d:\\loadrunner\\hw_!_lightmail\\\\combined_HW_!_Lightmail.c"
# 1 "D:\\LoadRunner\\include/lrun.h" 1
 
 












 











# 103 "D:\\LoadRunner\\include/lrun.h"





















































		


		typedef unsigned size_t;
	
	
        
	

















	

 



















 
 
 
 
 


 
 
 
 
 
 














int     lr_start_transaction   (char * transaction_name);
int lr_start_sub_transaction          (char * transaction_name, char * trans_parent);
long lr_start_transaction_instance    (char * transaction_name, long parent_handle);
int   lr_start_cross_vuser_transaction		(char * transaction_name, char * trans_id_param); 



int     lr_end_transaction     (char * transaction_name, int status);
int lr_end_sub_transaction            (char * transaction_name, int status);
int lr_end_transaction_instance       (long transaction, int status);
int   lr_end_cross_vuser_transaction	(char * transaction_name, char * trans_id_param, int status);


 
typedef char* lr_uuid_t;
 



lr_uuid_t lr_generate_uuid();

 


int lr_generate_uuid_free(lr_uuid_t uuid);

 



int lr_generate_uuid_on_buf(lr_uuid_t buf);

   
# 273 "D:\\LoadRunner\\include/lrun.h"
int lr_start_distributed_transaction  (char * transaction_name, lr_uuid_t correlator, long timeout  );

   







int lr_end_distributed_transaction  (lr_uuid_t correlator, int status);


double lr_stop_transaction            (char * transaction_name);
double lr_stop_transaction_instance   (long parent_handle);


void lr_resume_transaction           (char * trans_name);
void lr_resume_transaction_instance  (long trans_handle);


int lr_update_transaction            (const char *trans_name);


 
void lr_wasted_time(long time);


 
int lr_set_transaction(const char *name, double duration, int status);
 
long lr_set_transaction_instance(const char *name, double duration, int status, long parent_handle);


int   lr_user_data_point                      (char *, double);
long lr_user_data_point_instance                   (char *, double, long);
 



int lr_user_data_point_ex(const char *dp_name, double value, int log_flag);
long lr_user_data_point_instance_ex(const char *dp_name, double value, long parent_handle, int log_flag);


int lr_transaction_add_info      (const char *trans_name, char *info);
int lr_transaction_instance_add_info   (long trans_handle, char *info);
int lr_dpoint_add_info           (const char *dpoint_name, char *info);
int lr_dpoint_instance_add_info        (long dpoint_handle, char *info);


double lr_get_transaction_duration       (char * trans_name);
double lr_get_trans_instance_duration    (long trans_handle);
double lr_get_transaction_think_time     (char * trans_name);
double lr_get_trans_instance_think_time  (long trans_handle);
double lr_get_transaction_wasted_time    (char * trans_name);
double lr_get_trans_instance_wasted_time (long trans_handle);
int    lr_get_transaction_status		 (char * trans_name);
int	   lr_get_trans_instance_status		 (long trans_handle);

 



int lr_set_transaction_status(int status);

 



int lr_set_transaction_status_by_name(int status, const char *trans_name);
int lr_set_transaction_instance_status(int status, long trans_handle);


typedef void* merc_timer_handle_t;
 

merc_timer_handle_t lr_start_timer();
double lr_end_timer(merc_timer_handle_t timer_handle);


 
 
 
 
 
 











 



int   lr_rendezvous  (char * rendezvous_name);
 




int   lr_rendezvous_ex (char * rendezvous_name);



 
 
 
 
 
char *lr_get_vuser_ip (void);
void   lr_whoami (int *vuser_id, char ** sgroup, int *scid);
char *	  lr_get_host_name (void);
char *	  lr_get_master_host_name (void);

 
long     lr_get_attrib_long	(char * attr_name);
char *   lr_get_attrib_string	(char * attr_name);
double   lr_get_attrib_double      (char * attr_name);

char * lr_paramarr_idx(const char * paramArrayName, unsigned int index);
char * lr_paramarr_random(const char * paramArrayName);
int    lr_paramarr_len(const char * paramArrayName);

int	lr_param_unique(const char * paramName);
int lr_param_sprintf(const char * paramName, const char * format, ...);


 
 
static void *ci_this_context = 0;






 








void lr_continue_on_error (int lr_continue);
char *   lr_unmask (const char *EncodedString);
char *   lr_decrypt (const char *EncodedString);


 
 
 
 
 
 



 







 















void   lr_abort (void);
void lr_exit(int exit_option, int exit_status);
void lr_abort_ex (unsigned long flags);

void   lr_peek_events (void);


 
 
 
 
 


void   lr_think_time (double secs);

 


void lr_force_think_time (double secs);


 
 
 
 
 



















int   lr_msg (char * fmt, ...);
int   lr_debug_message (unsigned int msg_class,
									    char * format,
										...);
# 513 "D:\\LoadRunner\\include/lrun.h"
void   lr_new_prefix (int type,
                                 char * filename,
                                 int line);
# 516 "D:\\LoadRunner\\include/lrun.h"
int   lr_log_message (char * fmt, ...);
int   lr_message (char * fmt, ...);
int   lr_error_message (char * fmt, ...);
int   lr_output_message (char * fmt, ...);
int   lr_vuser_status_message (char * fmt, ...);
int   lr_error_message_without_fileline (char * fmt, ...);
int   lr_fail_trans_with_error (char * fmt, ...);

 
 
 
 
 
# 540 "D:\\LoadRunner\\include/lrun.h"

 
 
 
 
 





int   lr_next_row ( char * table);
int lr_advance_param ( char * param);



														  
														  

														  
														  

													      
 


char *   lr_eval_string (char * str);
int   lr_eval_string_ext (const char *in_str,
                                     unsigned long const in_len,
                                     char ** const out_str,
                                     unsigned long * const out_len,
                                     unsigned long const options,
                                     const char *file,
								     long const line);
# 574 "D:\\LoadRunner\\include/lrun.h"
void   lr_eval_string_ext_free (char * * pstr);

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
int lr_param_increment (char * dst_name,
                              char * src_name);
# 597 "D:\\LoadRunner\\include/lrun.h"













											  
											  

											  
											  
											  

int	  lr_save_var (char *              param_val,
							  unsigned long const param_val_len,
							  unsigned long const options,
							  char *			  param_name);
# 621 "D:\\LoadRunner\\include/lrun.h"
int   lr_save_string (const char * param_val, const char * param_name);



int   lr_set_custom_error_message (const char * param_val, ...);

int   lr_remove_custom_error_message ();


int   lr_free_parameter (const char * param_name);
int   lr_save_int (const int param_val, const char * param_name);
int   lr_save_timestamp (const char * tmstampParam, ...);
int   lr_save_param_regexp (const char *bufferToScan, unsigned int bufSize, ...);

int   lr_convert_double_to_integer (const char *source_param_name, const char * target_param_name);
int   lr_convert_double_to_double (const char *source_param_name, const char *format_string, const char * target_param_name);

 
 
 
 
 
 
# 700 "D:\\LoadRunner\\include/lrun.h"
void   lr_save_datetime (const char *format, int offset, const char *name);









 











 
 
 
 
 






 



char * lr_error_context_get_entry (char * key);

 



long   lr_error_context_get_error_id (void);


 
 
 

int lr_table_get_rows_num (char * param_name);

int lr_table_get_cols_num (char * param_name);

char * lr_table_get_cell_by_col_index (char * param_name, int row, int col);

char * lr_table_get_cell_by_col_name (char * param_name, int row, const char* col_name);

int lr_table_get_column_name_by_index (char * param_name, int col, 
											char * * const col_name,
											size_t * col_name_len);
# 761 "D:\\LoadRunner\\include/lrun.h"

int lr_table_get_column_name_by_index_free (char * col_name);

 
 
 
 
# 776 "D:\\LoadRunner\\include/lrun.h"
int   lr_zip (const char* param1, const char* param2);
int   lr_unzip (const char* param1, const char* param2);

 
 
 
 
 
 
 
 

 
 
 
 
 
 
int   lr_param_substit (char * file,
                                   int const line,
                                   char * in_str,
                                   size_t const in_len,
                                   char * * const out_str,
                                   size_t * const out_len);
# 800 "D:\\LoadRunner\\include/lrun.h"
void   lr_param_substit_free (char * * pstr);


 
# 812 "D:\\LoadRunner\\include/lrun.h"





char *   lrfnc_eval_string (char * str,
                                      char * file_name,
                                      long const line_num);
# 820 "D:\\LoadRunner\\include/lrun.h"


int   lrfnc_save_string ( const char * param_val,
                                     const char * param_name,
                                     const char * file_name,
                                     long const line_num);
# 826 "D:\\LoadRunner\\include/lrun.h"

int   lrfnc_free_parameter (const char * param_name );







typedef struct _lr_timestamp_param
{
	int iDigits;
}lr_timestamp_param;

extern const lr_timestamp_param default_timestamp_param;

int   lrfnc_save_timestamp (const char * param_name, const lr_timestamp_param* time_param);

int lr_save_searched_string(char * buffer, long buf_size, unsigned int occurrence,
			    char * search_string, int offset, unsigned int param_val_len, 
			    char * param_name);

 
char *   lr_string (char * str);

 
# 929 "D:\\LoadRunner\\include/lrun.h"

int   lr_save_value (char * param_val,
                                unsigned long const param_val_len,
                                unsigned long const options,
                                char * param_name,
                                char * file_name,
                                long const line_num);
# 936 "D:\\LoadRunner\\include/lrun.h"


 
 
 
 
 











int   lr_printf (char * fmt, ...);
 
int   lr_set_debug_message (unsigned int msg_class,
                                       unsigned int swtch);
# 958 "D:\\LoadRunner\\include/lrun.h"
unsigned int   lr_get_debug_message (void);


 
 
 
 
 

void   lr_double_think_time ( double secs);
void   lr_usleep (long);


 
 
 
 
 
 




int *   lr_localtime (long offset);


int   lr_send_port (long port);


# 1034 "D:\\LoadRunner\\include/lrun.h"



struct _lr_declare_identifier{
	char signature[24];
	char value[128];
};

int   lr_pt_abort (void);

void vuser_declaration (void);






# 1063 "D:\\LoadRunner\\include/lrun.h"


# 1075 "D:\\LoadRunner\\include/lrun.h"
















 
 
 
 
 







int    _lr_declare_transaction   (char * transaction_name);


 
 
 
 
 







int   _lr_declare_rendezvous  (char * rendezvous_name);

 
 
 
 
 


typedef int PVCI;






typedef int VTCERR;









PVCI   vtc_connect(char * servername, int portnum, int options);
VTCERR   vtc_disconnect(PVCI pvci);
VTCERR   vtc_get_last_error(PVCI pvci);
VTCERR   vtc_query_column(PVCI pvci, char * columnName, int columnIndex, char * *outvalue);
VTCERR   vtc_query_row(PVCI pvci, int rowIndex, char * **outcolumns, char * **outvalues);
VTCERR   vtc_send_message(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_if_unique(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_row1(PVCI pvci, char * columnNames, char * messages, char * delimiter, unsigned char sendflag, unsigned short *outUpdates);
VTCERR   vtc_search_row(PVCI pvci, char * columnNames, char * messages, char * delimiter, char * **outcolumns, char * **outvalues);
VTCERR   vtc_update_message(PVCI pvci, char * column, int index , char * message, unsigned short *outRc);
VTCERR   vtc_update_message_ifequals(PVCI pvci, char * columnName, int index,	char * message, char * ifmessage, unsigned short 	*outRc);
VTCERR   vtc_update_row1(PVCI pvci, char * columnNames, int index , char * messages, char * delimiter, unsigned short *outUpdates);
VTCERR   vtc_retrieve_message(PVCI pvci, char * column, char * *outvalue);
VTCERR   vtc_retrieve_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues);
VTCERR   vtc_retrieve_row(PVCI pvci, char * **outcolumns, char * **outvalues);
VTCERR   vtc_rotate_message(PVCI pvci, char * column, char * *outvalue, unsigned char sendflag);
VTCERR   vtc_rotate_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_rotate_row(PVCI pvci, char * **outcolumns, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_increment(PVCI pvci, char * column, int index , int incrValue, int *outValue);
VTCERR   vtc_clear_message(PVCI pvci, char * column, int index , unsigned short *outRc);
VTCERR   vtc_clear_column(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_ensure_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_drop_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_clear_row(PVCI pvci, int rowIndex, unsigned short *outRc);
VTCERR   vtc_create_column(PVCI pvci, char * column,unsigned short *outRc);
VTCERR   vtc_column_size(PVCI pvci, char * column, int *size);
void   vtc_free(char * msg);
void   vtc_free_list(char * *msglist);
VTCERR   vtc_update_all_message_ifequals(PVCI pvci, char * columnNames, char * message, char * ifmessage, char * delimiter, unsigned short *outRc);

VTCERR   lrvtc_connect(char * servername, int portnum, int options);
VTCERR   lrvtc_connect_ex(char * vtc_first_param, ...);
VTCERR   lrvtc_connect_ex_no_ellipsis(const char *vtc_first_param, char ** arguments, int argCount);
VTCERR   lrvtc_disconnect();
VTCERR   lrvtc_query_column(char * columnName, int columnIndex);
VTCERR   lrvtc_query_row(int columnIndex);
VTCERR   lrvtc_send_message(char * columnName, char * message);
VTCERR   lrvtc_send_if_unique(char * columnName, char * message);
VTCERR   lrvtc_send_row1(char * columnNames, char * messages, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_search_row(char * columnNames, char * messages, char * delimiter);
VTCERR   lrvtc_update_message(char * columnName, int index , char * message);
VTCERR   lrvtc_update_message_ifequals(char * columnName, int index, char * message, char * ifmessage);
VTCERR   lrvtc_update_row1(char * columnNames, int index , char * messages, char * delimiter);
VTCERR   lrvtc_retrieve_message(char * columnName);
VTCERR   lrvtc_retrieve_messages1(char * columnNames, char * delimiter);
VTCERR   lrvtc_retrieve_row();
VTCERR   lrvtc_rotate_message(char * columnName, unsigned char sendflag);
VTCERR   lrvtc_rotate_messages1(char * columnNames, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_rotate_row(unsigned char sendflag);
VTCERR   lrvtc_increment(char * columnName, int index , int incrValue);
VTCERR   lrvtc_noop();
VTCERR   lrvtc_clear_message(char * columnName, int index);
VTCERR   lrvtc_clear_column(char * columnName); 
VTCERR   lrvtc_ensure_index(char * columnName); 
VTCERR   lrvtc_drop_index(char * columnName); 
VTCERR   lrvtc_clear_row(int rowIndex);
VTCERR   lrvtc_create_column(char * columnName);
VTCERR   lrvtc_column_size(char * columnName);
VTCERR   lrvtc_update_all_message_ifequals(char * columnNames, char * message, char * ifmessage, char * delimiter);



 
 
 
 
 

 
int lr_enable_ip_spoofing();
int lr_disable_ip_spoofing();


 




int lr_convert_string_encoding(char * sourceString, char * fromEncoding, char * toEncoding, char * paramName);
int lr_read_file(const char *filename, const char *outputParam, int continueOnError);

int lr_get_char_count(const char * string);


 
int lr_db_connect (char * pFirstArg, ...);
int lr_db_disconnect (char * pFirstArg,	...);
int lr_db_executeSQLStatement (char * pFirstArg, ...);
int lr_db_dataset_action(char * pFirstArg, ...);
int lr_checkpoint(char * pFirstArg,	...);
int lr_db_getvalue(char * pFirstArg, ...);







 
 



















# 1 "d:\\loadrunner\\hw_!_lightmail\\\\combined_HW_!_Lightmail.c" 2

# 1 "D:\\LoadRunner\\include/SharedParameter.h" 1



 
 
 
 
# 100 "D:\\LoadRunner\\include/SharedParameter.h"






typedef int PVCI2;






typedef int VTCERR2;


 
 
 

 
extern PVCI2    vtc_connect(char *servername, int portnum, int options);
extern VTCERR2  vtc_disconnect(PVCI2 pvci);
extern VTCERR2  vtc_get_last_error(PVCI2 pvci);

 
extern VTCERR2  vtc_query_column(PVCI2 pvci, char *columnName, int columnIndex, char **outvalue);
extern VTCERR2  vtc_query_row(PVCI2 pvci, int columnIndex, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_send_message(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_if_unique(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_row1(PVCI2 pvci, char *columnNames, char *messages, char *delimiter,  unsigned char sendflag, unsigned short *outUpdates);
extern VTCERR2  vtc_search_row(PVCI2 pvci, char *columnNames, char *messages, char *delimiter, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_update_message(PVCI2 pvci, char *column, int index , char *message, unsigned short *outRc);
extern VTCERR2  vtc_update_message_ifequals(PVCI2 pvci, char	*columnName, int index,	char *message, char	*ifmessage,	unsigned short 	*outRc);
extern VTCERR2  vtc_update_row1(PVCI2 pvci, char *columnNames, int index , char *messages, char *delimiter, unsigned short *outUpdates);
extern VTCERR2  vtc_retrieve_message(PVCI2 pvci, char *column, char **outvalue);
extern VTCERR2  vtc_retrieve_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues);
extern VTCERR2  vtc_retrieve_row(PVCI2 pvci, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_rotate_message(PVCI2 pvci, char *column, char **outvalue, unsigned char sendflag);
extern VTCERR2  vtc_rotate_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues, unsigned char sendflag);
extern VTCERR2  vtc_rotate_row(PVCI2 pvci, char ***outcolumns, char ***outvalues, unsigned char sendflag);
extern VTCERR2	vtc_increment(PVCI2 pvci, char *column, int index , int incrValue, int *outValue);
extern VTCERR2  vtc_clear_message(PVCI2 pvci, char *column, int index , unsigned short *outRc);
extern VTCERR2  vtc_clear_column(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_clear_row(PVCI2 pvci, int rowIndex, unsigned short *outRc);

extern VTCERR2  vtc_create_column(PVCI2 pvci, char *column,unsigned short *outRc);
extern VTCERR2  vtc_column_size(PVCI2 pvci, char *column, int *size);
extern VTCERR2  vtc_ensure_index(PVCI2 pvci, char *column, unsigned short *outRc);
extern VTCERR2  vtc_drop_index(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_noop(PVCI2 pvci);

 
extern void vtc_free(char *msg);
extern void vtc_free_list(char **msglist);

 


 




 




















 




 
 
 

extern VTCERR2  lrvtc_connect(char *servername, int portnum, int options);
 
 
extern VTCERR2  lrvtc_disconnect();
extern VTCERR2  lrvtc_query_column(char *columnName, int columnIndex);
extern VTCERR2  lrvtc_query_row(int columnIndex);
extern VTCERR2  lrvtc_send_message(char *columnName, char *message);
extern VTCERR2  lrvtc_send_if_unique(char *columnName, char *message);
extern VTCERR2  lrvtc_send_row1(char *columnNames, char *messages, char *delimiter,  unsigned char sendflag);
extern VTCERR2  lrvtc_search_row(char *columnNames, char *messages, char *delimiter);
extern VTCERR2  lrvtc_update_message(char *columnName, int index , char *message);
extern VTCERR2  lrvtc_update_message_ifequals(char *columnName, int index, char 	*message, char *ifmessage);
extern VTCERR2  lrvtc_update_row1(char *columnNames, int index , char *messages, char *delimiter);
extern VTCERR2  lrvtc_retrieve_message(char *columnName);
extern VTCERR2  lrvtc_retrieve_messages1(char *columnNames, char *delimiter);
extern VTCERR2  lrvtc_retrieve_row();
extern VTCERR2  lrvtc_rotate_message(char *columnName, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_messages1(char *columnNames, char *delimiter, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_row(unsigned char sendflag);
extern VTCERR2  lrvtc_increment(char *columnName, int index , int incrValue);
extern VTCERR2  lrvtc_clear_message(char *columnName, int index);
extern VTCERR2  lrvtc_clear_column(char *columnName);
extern VTCERR2  lrvtc_clear_row(int rowIndex);
extern VTCERR2  lrvtc_create_column(char *columnName);
extern VTCERR2  lrvtc_column_size(char *columnName);
extern VTCERR2  lrvtc_ensure_index(char *columnName);
extern VTCERR2  lrvtc_drop_index(char *columnName);

extern VTCERR2  lrvtc_noop();

 
 
 

                               


 
 
 





















# 2 "d:\\loadrunner\\hw_!_lightmail\\\\combined_HW_!_Lightmail.c" 2

# 1 "globals.h" 1



 
 

# 1 "D:\\LoadRunner\\include/web_api.h" 1







# 1 "D:\\LoadRunner\\include/as_web.h" 1



























































 




 



 











 





















 
 
 

  int
	web_add_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_add_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
	
  int
	web_add_auto_header(
		const char *		mpszHeader,
		const char *		mpszValue);

  int
	web_add_header(
		const char *		mpszHeader,
		const char *		mpszValue);
  int
	web_add_cookie(
		const char *		mpszCookie);
  int
	web_cleanup_auto_headers(void);
  int
	web_cleanup_cookies(void);
  int
	web_concurrent_end(
		const char * const	mpszReserved,
										 
		...								 
	);
  int
	web_concurrent_start(
		const char * const	mpszConcurrentGroupName,
										 
										 
		...								 
										 
	);
  int
	web_create_html_param(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim);
  int
	web_create_html_param_ex(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim,
		const char *		mpszNum);
  int
	web_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_disable_keep_alive(void);
  int
	web_enable_keep_alive(void);
  int
	web_find(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_get_int_property(
		const int			miHttpInfoType);
  int
	web_image(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_image_check(
		const char *		mpszName,
		...);
  int
	web_java_check(
		const char *		mpszName,
		...);
  int
	web_link(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

	
  int
	web_global_verification(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
  int
	web_reg_find(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
				
  int
	web_reg_save_param(
		const char *		mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 

  int
	web_convert_param(
		const char * 		mpszParamName, 
										 
		...);							 
										 
										 


										 

										 
  int
	web_remove_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
				
  int
	web_remove_auto_header(
		const char *		mpszHeaderName,
		...);							 
										 



  int
	web_remove_cookie(
		const char *		mpszCookie);

  int
	web_save_header(
		const char *		mpszType,	 
		const char *		mpszName);	 
  int
	web_set_certificate(
		const char *		mpszIndex);
  int
	web_set_certificate_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_set_connections_limit(
		const char *		mpszLimit);
  int
	web_set_max_html_param_len(
		const char *		mpszLen);
  int
	web_set_max_retries(
		const char *		mpszMaxRetries);
  int
	web_set_proxy(
		const char *		mpszProxyHost);
  int
	web_set_pac(
		const char *		mpszPacUrl);
  int
	web_set_proxy_bypass(
		const char *		mpszBypass);
  int
	web_set_secure_proxy(
		const char *		mpszProxyHost);
  int
	web_set_sockets_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue
	);
  int
	web_set_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue,
		...								 
	);
  int
	web_set_timeout(
		const char *		mpszWhat,
		const char *		mpszTimeout);
  int
	web_set_user(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);

  int
	web_sjis_to_euc_param(
		const char *		mpszParamName,
										 
		const char *		mpszParamValSjis);
										 

  int
	web_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_submit_form(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	spdy_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_set_proxy_bypass_local(
		const char * mpszNoLocal
		);

  int 
	web_cache_cleanup(void);

  int
	web_create_html_query(
		const char* mpszStartQuery,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_create_radio_button_param(
		const char *NameFiled,
		const char *NameAndVal,
		const char *ParamName
		);

  int
	web_convert_from_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										
  int
	web_convert_to_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_ex(
		const char * mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_xpath(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_json(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_regexp(
		 const char * mpszParamName,
		 ...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_attrib(
		const char * mpszParamName,
		...);
										 
										 
										 
										 
										 
										 
										 		
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_run(
		const char * mpszCode,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_reset(void);

  int
	web_convert_date_param(
		const char * 		mpszParamName,
		...);










# 789 "D:\\LoadRunner\\include/as_web.h"


# 802 "D:\\LoadRunner\\include/as_web.h"



























# 840 "D:\\LoadRunner\\include/as_web.h"

 
 
 


  int
	FormSubmit(
		const char *		mpszFormName,
		...);
  int
	InitWebVuser(void);
  int
	SetUser(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);
  int
	TerminateWebVuser(void);
  int
	URL(
		const char *		mpszUrlName);
























# 908 "D:\\LoadRunner\\include/as_web.h"


  int
	web_rest(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 

  int
web_stream_open(
	const char *		mpszArg1,
	...
);
  int
	web_stream_wait(
		const char *		mpszArg1,
		...
	);

  int
	web_stream_close(
		const char *		mpszArg1,
		...
	);

  int
web_stream_play(
	const char *		mpszArg1,
	...
	);

  int
web_stream_pause(
	const char *		mpszArg1,
	...
	);

  int
web_stream_seek(
	const char *		mpszArg1,
	...
	);

  int
web_stream_get_param_int(
	const char*			mpszStreamID,
	const int			miStateType
	);

  double
web_stream_get_param_double(
	const char*			mpszStreamID,
	const int			miStateType
	);

  int
web_stream_get_param_string(
	const char*			mpszStreamID,
	const int			miStateType,
	const char*			mpszParameterName
	);

  int
web_stream_set_param_int(
	const char*			mpszStreamID,
	const int			miStateType,
	const int			miStateValue
	);

  int
web_stream_set_param_double(
	const char*			mpszStreamID,
	const int			miStateType,
	const double		mdfStateValue
	);

  int
web_stream_set_custom_mpd(
	const char*			mpszStreamID,
	const char*			aMpdBuf
	);

 
 
 






# 9 "D:\\LoadRunner\\include/web_api.h" 2

















 







 















  int
	web_reg_add_cookie(
		const char *		mpszCookie,
		...);							 
										 

  int
	web_report_data_point(
		const char *		mpszEventType,
		const char *		mpszEventName,
		const char *		mpszDataPointName,
		const char *		mpszLAST);	 
										 
										 
										 

  int
	web_text_link(
		const char *		mpszStepName,
		...);

  int
	web_element(
		const char *		mpszStepName,
		...);

  int
	web_image_link(
		const char *		mpszStepName,
		...);

  int
	web_static_image(
		const char *		mpszStepName,
		...);

  int
	web_image_submit(
		const char *		mpszStepName,
		...);

  int
	web_button(
		const char *		mpszStepName,
		...);

  int
	web_edit_field(
		const char *		mpszStepName,
		...);

  int
	web_radio_group(
		const char *		mpszStepName,
		...);

  int
	web_check_box(
		const char *		mpszStepName,
		...);

  int
	web_list(
		const char *		mpszStepName,
		...);

  int
	web_text_area(
		const char *		mpszStepName,
		...);

  int
	web_map_area(
		const char *		mpszStepName,
		...);

  int
	web_eval_java_script(
		const char *		mpszStepName,
		...);

  int
	web_reg_dialog(
		const char *		mpszArg1,
		...);

  int
	web_reg_cross_step_download(
		const char *		mpszArg1,
		...);

  int
	web_browser(
		const char *		mpszStepName,
		...);

  int
	web_control(
		const char *		mpszStepName,
		...);

  int
	web_set_rts_key(
		const char *		mpszArg1,
		...);

  int
	web_save_param_length(
		const char * 		mpszParamName,
		...);

  int
	web_save_timestamp_param(
		const char * 		mpszParamName,
		...);

  int
	web_load_cache(
		const char *		mpszStepName,
		...);							 
										 

  int
	web_dump_cache(
		const char *		mpszStepName,
		...);							 
										 
										 

  int
	web_reg_find_in_log(
		const char *		mpszArg1,
		...);							 
										 
										 

  int
	web_get_sockets_info(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 

  int
	web_add_cookie_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

  int
	web_hook_java_script(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

 
 
 
 
 
 
 
 
 
 
 
 
  int
	web_reg_async_attributes(
		const char *		mpszArg,
		...
	);

 
 
 
 
 
 
  int
	web_sync(
		 const char *		mpszArg1,
		 ...
	);

 
 
 
 
  int
	web_stop_async(
		const char *		mpszArg1,
		...
	);

 
 
 
 
 

 
 
 

typedef enum WEB_ASYNC_CB_RC_ENUM_T
{
	WEB_ASYNC_CB_RC_OK,				 

	WEB_ASYNC_CB_RC_ABORT_ASYNC_NOT_ERROR,
	WEB_ASYNC_CB_RC_ABORT_ASYNC_ERROR,
										 
										 
										 
										 
	WEB_ASYNC_CB_RC_ENUM_COUNT
} WEB_ASYNC_CB_RC_ENUM;

 
 
 

typedef enum WEB_CONVERS_CB_CALL_REASON_ENUM_T
{
	WEB_CONVERS_CB_CALL_REASON_BUFFER_RECEIVED,
	WEB_CONVERS_CB_CALL_REASON_END_OF_TASK,

	WEB_CONVERS_CB_CALL_REASON_ENUM_COUNT
} WEB_CONVERS_CB_CALL_REASON_ENUM;

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

typedef
int														 
	(*RequestCB_t)();

typedef
int														 
	(*ResponseBodyBufferCB_t)(
		  const char *		aLastBufferStr,
		  int				aLastBufferLen,
		  const char *		aAccumulatedStr,
		  int				aAccumulatedLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseCB_t)(
		  const char *		aResponseHeadersStr,
		  int				aResponseHeadersLen,
		  const char *		aResponseBodyStr,
		  int				aResponseBodyLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseHeadersCB_t)(
		  int				aHttpStatusCode,
		  const char *		aAccumulatedHeadersStr,
		  int				aAccumulatedHeadersLen);



 
 
 

typedef enum WEB_CONVERS_UTIL_RC_ENUM_T
{
	WEB_CONVERS_UTIL_RC_OK,
	WEB_CONVERS_UTIL_RC_CONVERS_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_TASK_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_UNAVIALABLE,
	WEB_CONVERS_UTIL_RC_INVALID_ARGUMENT,

	WEB_CONVERS_UTIL_RC_ENUM_COUNT
} WEB_CONVERS_UTIL_RC_ENUM;

 
 
 

  int					 
	web_util_set_request_url(
		  const char *		aUrlStr);

  int					 
	web_util_set_request_body(
		  const char *		aRequestBodyStr);

  int					 
	web_util_set_formatted_request_body(
		  const char *		aRequestBodyStr);


 
 
 
 
 

 
 
 
 
 

 
 
 
 
 
 
 
 

 
 
  int
web_websocket_connect(
		 const char *	mpszArg1,
		 ...
		 );


 
 
 
 
 																						
  int
web_websocket_send(
	   const char *		mpszArg1,
		...
	   );

 
 
 
 
 
 
  int
web_websocket_close(
		const char *	mpszArg1,
		...
		);

 
typedef
void														
(*OnOpen_t)(
			  const char* connectionID,  
			  const char * responseHeader,  
			  int length  
);

typedef
void														
(*OnMessage_t)(
	  const char* connectionID,  
	  int isbinary,  
	  const char * data,  
	  int length  
	);

typedef
void														
(*OnError_t)(
	  const char* connectionID,  
	  const char * message,  
	  int length  
	);

typedef
void														
(*OnClose_t)(
	  const char* connectionID,  
	  int isClosedByClient,  
	  int code,  
	  const char* reason,  
	  int length  
	 );
 
 
 
 
 





# 7 "globals.h" 2

# 1 "lrw_custom_body.h" 1



 
const char * const body_variable_1 = "Body={\"type\":\"main\",\"id\":\"699d92f8-f995-499b-bd9b-f12f9c25e565\",\"creationDate\":\"2021-06-03T06:37:22.789Z\",\"version\":4,\"application\":{\"architecture\":\"x86-64\",\"buildId\":\"20210504152106\",\"name\":\"Firefox\",\"version\":\"88.0.1\",\"displayVersion\":\"88.0.1\",\"vendor\":\"Mozilla\",\"platformVersion\":\"88.0.1\",\"xpcomAbi\":\"x86_64-msvc\",\"channel\":\"release\"},\"payload\":{\"ver\":4,\"simpleMeasurements\":{\"totalTime\":2163,\"start\":199,\"main\":572,\"selectProfile\":619,\"afterProfileLocked\":623,\"startupCrashDetectionBegin\":1699,\"startupCrashDetectionEnd\":34943,\"firstPaint\":3482,\"firstPaint2\":3946,\"sessionRestoreInit\":1998,\"sessionRestored\":4162,\"createTopLevelWindow\":1044,\"blankWindowShown\":1681,\"AMI_startup_begin\":1743,\"XPI_startup_begin\":1773,\"XPI_bootstrap_addons_begin\":1780,\"XPI_bootstrap_addons_end\":1826,\"XPI_startup_end\":1826,\"AMI_startup_end\":1826,\"XPI_finalUIStartup\":1999,\"sessionRestoreInitialized\":2001,\"delayedStartupStarted\":3951,\""
		"delayedStartupFinished\":4078,\"startupInterrupted\":0,\"debuggerAttached\":0,\"startupWindowVisibleReadBytes\":1586108,\"startupWindowVisibleWriteBytes\":86706,\"startupSessionRestoreReadBytes\":15873657,\"startupSessionRestoreWriteBytes\":119970,\"activeTicks\":129},\"processes\":{\"parent\":{\"scalars\":{\"networking.loading_certs_task\":80,\"blocklist.mlbf_stash_time_oldest\":\"Tue, 08 Dec 2020 18:35:12 GMT\",\"os.environment.is_taskbar_pinned\":false,\"contentblocking.fingerprinting_blocking_enabled\":true,\"browser.engagement.max_concurrent_tab_count\":5,\"startup.is_cold\":false,\"findbar.shown\":1,\"blocklist.mlbf_enabled\":true,\"browser.engagement.session_time_including_suspend\":2162510,\"a11y.backplate\":true,\"browser.engagement.active_ticks\":129,\"browser.engagement.total_uri_count_normal_and_private_mode\":33,\"browser.searchinit.init_result_status_code\":\"0\",\"browser.engagement.max_concurrent_window_count\":1,\"startup.seconds_since_last_os_restart\":163363,\"blocklist.mlbf_stashes\":tru"
		"e,\"blocklist.mlbf_stash_time_newest\":\"Thu, 03 Jun 2021 00:35:08 GMT\",\"security.https_only_mode_enabled_pbm\":0,\"browser.engagement.tab_open_event_count\":5,\"dom.contentprocess.os_priority_lowered\":47,\"os.environment.is_admin_without_uac\":false,\"contentblocking.cryptomining_blocking_enabled\":true,\"networking.http3_enabled\":false,\"browser.engagement.unique_domains_count\":7,\"script.preloader.mainthread_recompile\":1,\"browser.engagement.session_time_excluding_suspend\":2162510,\"timestamps.first_paint_two\":3946,\"networking.nss_initialization\":73,\"formautofill.availability\":false,\"dom.contentprocess.os_priority_change_considered\":95,\"browser.engagement.total_uri_count\":33,\"os.environment.launch_method\":\"Other\",\"contentblocking.trackers_blocked_count\":19,\"media.element_in_page_count\":2,\"widget.dark_mode\":false,\"browser.engagement.max_concurrent_tab_pinned_count\":0,\"startup.profile_selection_reason\":\"default\",\"blocklist.mlbf_generation_time\":\"Fri, 04 Dec 2020 12:35:11 "
		"GMT\",\"security.https_only_mode_enabled\":0,\"os.environment.allowed_app_sources\":\"StoreOnly\",\"contentblocking.category\":0,\"dom.contentprocess.os_priority_raised\":47,\"gfx.os_compositor\":true,\"browser.engagement.unfiltered_uri_count\":33,\"browser.startup.abouthome_cache_result\":7,\"blocklist.lastModified_rs_addons_mlbf\":\"Thu, 03 Jun 2021 00:38:06 GMT\",\"browser.engagement.profile_count\":1,\"timestamps.first_paint\":3482,\"startup.skeleton_ui_disabled_reason\":\"EnabledKeyDoesNotExist\"},\"keyedScalars\":{\"a11y.theme\":{\"default\":false},\"browser.ui.interaction.nav_bar\":{\"back-button\":1,\"PanelUI-menu-button\":1,\"urlbar-input\":1},\"normandy.recipe_freshness\":{\"259\":1652,\"531\":2734,\"553\":2735,\"661\":2105,\"689\":2207,\"690\":2208,\"691\":2205,\"719\":2733,\"720\":2732,\"721\":2336,\"767\":2566,\"786\":2698,\"839\":2717,\"840\":2716,\"875\":2879,\"909\":3591,\"910\":3590,\"917\":3589,\"918\":2962,\"929\":2981,\"931\":3009,\"1010\":3593,\"1014\":3221,\"1072\":3388,\"1080\":3410,"
		"\"1082\":3562,\"1084\":3561,\"1091\":3433,\"1095\":3560,\"1096\":3451,\"1105\":3559,\"1106\":3558,\"1107\":3557,\"1109\":3535,\"1110\":3530,\"1111\":3493,\"1124\":3599,\"1138\":3582,\"1141\":3586,\"1147\":3629,\"1149\":3630,\"1153\":3631,\"1156\":3632},\"urlbar.tips\":{\"searchTip_onboard-shown\":1},\"browser.search.data_transferred\":{\"sggt-yandex-ru\":13745},\"browser.ui.toolbar_widgets\":{\"library-button_pinned_nav-bar-end\":true,\"bookmark_pinned_pageaction-urlbar\":true,\"drag-space_pinned_off\":true,\"new-tab-button_pinned_tabs-bar\":true,\"downloads-button_pinned_nav-bar-end\":true,\"stop-reload-button_pinned_nav-bar-start\":true,\"menu-toolbar_pinned_off\":true,\"home-button_pinned_nav-bar-start\":true,\"personal-bookmarks_pinned_bookmarks-bar\":true,\"import-button_pinned_bookmarks-bar\":true,\"tabbrowser-tabs_pinned_tabs-bar\":true,\"titlebar_pinned_off\":true,\"fxa-toolbar-menu-button_pinned_nav-bar-end\":true,\"pocket_pinned_pageaction-urlbar\":true,\"alltabs-button_pinned_tabs-bar\":true,\"si"
		"debar-button_pinned_nav-bar-end\":true,\"forward-button_pinned_nav-bar-start\":true,\"menubar-items_pinned_menu-bar\":true,\"back-button_pinned_nav-bar-start\":true,\"bookmarks-bar_pinned_newtab\":true},\"browser.ui.interaction.content_context\":{\"context-paste\":1,\"context-copy\":1,\"context-delete\":1},\"urlbar.picked.searchengine\":{\"0\":2},\"networking.data_transferred_v3_kb\":{\"Y4_N3BasicBg\":46,\"Y1_N1\":6102,\"Y6_N3ContentLead\":55,\"Y0_N1Sys\":139,\"Y8_N3ContentOth\":565,\"Y2_N3Oth\":8672,\"Y5_N3BasicOth\":1206},\"browser.ui.interaction.tabs_bar\":{\"tabs-newtab-button\":1,\"tab-close-button\":1},\"browser.engagement.sessionrestore_interstitial\":{\"deferred_restore\":1},\"browser.ui.interaction.keyboard\":{\"key-find\":2},\"browser.engagement.navigation.urlbar\":{\"search_enter\":2},\"telemetry.event_counts\":{\"urlbar#abandonment#blur\":1,\"normandy#enroll#preference_rollout\":1,\"doh#state#rollback\":1,\"navigation#search#urlbar\":2,\"normandy#enrollFailed#preference_rollout\":1,\"urlbar#enga"
		"gement#enter\":2}}},\"content\":{\"histograms\":{\"CYCLE_COLLECTOR_MAX_PAUSE\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":460,\"range\":[1,10000],\"values\":{\"0\":104,\"1\":24,\"2\":10,\"4\":5,\"5\":2,\"8\":2,\"10\":1,\"14\":2,\"17\":1,\"20\":2,\"29\":1,\"40\":2,\"48\":3,\"57\":0}},\"GC_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":947,\"range\":[1,10000],\"values\":{\"0\":2,\"1\":16,\"2\":7,\"3\":1,\"4\":12,\"5\":9,\"6\":2,\"7\":8,\"8\":7,\"10\":7,\"12\":4,\"14\":7,\"17\":8,\"20\":7,\"24\":6,\"29\":1,\"34\":0}},\"GC_BUDGET_MS_2\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":10701,\"range\":[1,200],\"values\":{\"4\":0,\"5\":72,\"6\":7,\"7\":11,\"8\":9,\"9\":22,\"10\":33,\"11\":11,\"12\":8,\"13\":9,\"14\":17,\"15\":13,\"23\":1,\"40\":1,\"43\":5,\"46\":175,\"50\":0}},\"GC_ANIMATION_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":133,\"range\":[1,10000],\"values\":{\"0\":22,\"1\":4,\"2\":1,\"3\":1,\"5\":1,\"7\":3,\"8\":3,\"10\":3,\"12\":1,\"14\":2,\"17\":0}},\"GC_MAX_PAUSE_MS_2\":{"
		"\"bucket_count\":50,\"histogram_type\":0,\"sum\":734,\"range\":[1,10000],\"values\":{\"0\":4,\"1\":15,\"2\":7,\"3\":3,\"4\":9,\"5\":9,\"6\":4,\"7\":11,\"8\":12,\"10\":14,\"12\":4,\"14\":5,\"17\":2,\"20\":4,\"24\":1,\"29\":0}},\"GC_PREPARE_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":41,\"range\":[1,1000],\"values\":{\"0\":77,\"1\":19,\"2\":4,\"3\":2,\"4\":2,\"5\":0}},\"GC_MARK_ROOTS_US\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":43916,\"range\":[1,150000],\"values\":{\"25\":0,\"32\":3,\"40\":2,\"51\":4,\"65\":3,\"82\":10,\"104\":3,\"132\":8,\"167\":9,\"211\":14,\"267\":8,\"338\":3,\"427\":8,\"540\":8,\"683\":5,\"863\":11,\"1091\":3,\"1379\":1,\"3522\":1,\"4453\":0}},\"GC_MARK_GRAY_MS_2\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":80,\"range\":[1,10000],\"values\":{\"0\":90,\"1\":1,\"2\":1,\"3\":1,\"4\":4,\"6\":1,\"7\":1,\"8\":3,\"10\":2,\"12\":0}},\"GC_MARK_WEAK_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":0,\"range\":[1,10000],\"values\":{\"0\":104,\"1\":0}},\"GC_PRETENUR"
		"E_COUNT_2\":{\"bucket_count\":20,\"histogram_type\":0,\"sum\":0,\"range\":[1,100],\"values\":{\"0\":479,\"1\":0}},\"GC_TENURED_SURVIVAL_RATE\":{\"bucket_count\":50,\"histogram_type\":1,\"sum\":9330,\"range\":[1,100],\"values\":{\"0\":2,\"13\":1,\"24\":1,\"38\":1,\"59\":2,\"61\":1,\"63\":1,\"65\":1,\"69\":1,\"71\":1,\"75\":2,\"77\":2,\"79\":2,\"86\":2,\"88\":1,\"92\":13,\"94\":3,\"96\":14,\"98\":50,\"100\":3}},\"GC_TIME_BETWEEN_S\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":6664,\"range\":[1,120],\"values\":{\"0\":12,\"4\":37,\"8\":3,\"9\":3,\"10\":2,\"11\":1,\"12\":1,\"13\":3,\"16\":2,\"19\":1,\"20\":1,\"21\":1,\"22\":1,\"25\":1,\"27\":1,\"33\":4,\"35\":2,\"37\":1,\"39\":1,\"51\":1,\"54\":3,\"57\":12,\"120\":10}},\"GC_TIME_BETWEEN_SLICES_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":8637,\"range\":[1,2000],\"values\":{\"0\":26,\"1\":7,\"2\":6,\"3\":2,\"4\":1,\"5\":3,\"6\":1,\"7\":2,\"8\":1,\"9\":2,\"10\":3,\"11\":3,\"13\":2,\"15\":25,\"17\":6,\"19\":11,\"22\":16,\"25\":35,\"29\":108,\"33\":1"
		"1,\"38\":2,\"44\":4,\"50\":2,\"57\":5,\"86\":3,\"99\":7,\"113\":2,\"130\":6,\"149\":0}},\"GC_SLICE_COUNT\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":394,\"range\":[1,200],\"values\":{\"1\":0,\"2\":5,\"3\":9,\"4\":53,\"5\":8,\"6\":14,\"7\":3,\"8\":0}},\"GC_EFFECTIVENESS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":7513,\"range\":[1,50000],\"values\":{\"0\":11,\"1\":11,\"2\":6,\"3\":4,\"4\":4,\"5\":4,\"6\":3,\"7\":3,\"8\":1,\"9\":4,\"11\":4,\"13\":1,\"14\":3,\"15\":6,\"17\":5,\"19\":1,\"21\":2,\"23\":2,\"25\":3,\"28\":2,\"31\":1,\"34\":1,\"41\":3,\"50\":1,\"81\":1,\"89\":1,\"119\":5,\"158\":1,\"211\":2,\"232\":1,\"255\":1,\"340\":1,\"412\":1,\"454\":1,\"605\":1,\"807\":1,\"1911\":1,\"2104\":0}},\"GHOST_WINDOWS\":{\"bucket_count\":32,\"histogram_type\":0,\"sum\":0,\"range\":[1,128],\"values\":{\"0\":8,\"1\":0}},\"CANVAS_WEBGL_SUCCESS\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"TOTAL_CONTENT_PAGE_LOAD_TIME\":{\"bucket_count\":100,"
		"\"histogram_type\":0,\"sum\":676278,\"range\":[100,30000],\"values\":{\"405\":0,\"429\":1,\"813\":1,\"862\":1,\"1635\":1,\"1837\":1,\"2064\":1,\"2926\":1,\"3101\":1,\"3287\":1,\"4398\":1,\"6609\":1,\"7870\":1,\"13285\":1,\"14925\":1,\"16767\":1,\"22428\":1,\"25196\":1,\"28305\":1,\"30000\":7}},\"HTTP_PAGE_DNS_ISSUE_TIME\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":1108,\"range\":[1,30000],\"values\":{\"0\":3,\"29\":1,\"63\":2,\"94\":1,\"140\":1,\"564\":1,\"688\":0}},\"HTTP_PAGE_DNS_LOOKUP_TIME\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":224,\"range\":[1,30000],\"values\":{\"0\":1,\"1\":1,\"2\":1,\"9\":2,\"11\":1,\"20\":2,\"140\":1,\"171\":0}},\"HTTP_PAGE_TLS_HANDSHAKE\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":12149,\"range\":[1,30000],\"values\":{\"35\":0,\"43\":1,\"255\":1,\"688\":1,\"1522\":1,\"4111\":2,\"5015\":0}},\"HTTP_PAGE_TCP_CONNECTION_2\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":38679,\"range\":[1,30000],\"values\":{\"63\":0,\"77\":1,\"688\":1,\"4111\":1,\"6118\":"
		"1,\"7463\":1,\"9104\":2,\"11106\":0}},\"HTTP_SUB_DNS_LOOKUP_TIME\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":6323,\"range\":[1,30000],\"values\":{\"0\":110,\"1\":53,\"2\":13,\"3\":3,\"4\":2,\"5\":1,\"6\":13,\"7\":15,\"9\":21,\"11\":9,\"13\":8,\"16\":2,\"20\":3,\"24\":1,\"29\":2,\"35\":2,\"43\":2,\"52\":3,\"63\":2,\"77\":1,\"140\":1,\"4111\":1,\"5015\":0}},\"SCRIPT_PRELOADER_REQUESTS\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":458,\"range\":[1,50],\"values\":{\"0\":222,\"2\":229,\"3\":0}},\"SCRIPT_PRELOADER_WAIT_TIME\":{\"bucket_count\":20,\"histogram_type\":0,\"sum\":0,\"range\":[1,10000],\"values\":{\"0\":62,\"1\":0}},\"INPUT_EVENT_RESPONSE_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":304547,\"range\":[1,10000],\"values\":{\"0\":852,\"1\":192,\"2\":190,\"3\":313,\"4\":392,\"5\":546,\"6\":656,\"7\":760,\"8\":1882,\"10\":2089,\"12\":2191,\"14\":3489,\"17\":3043,\"20\":2558,\"24\":1151,\"29\":434,\"34\":96,\"40\":35,\"48\":29,\"57\":7,\"81\":3,\"96\":3,\"114\":2,\"135\":1,\"160\":1,"
		"\"190\":3,\"226\":1,\"268\":2,\"318\":2,\"533\":2,\"752\":1,\"1062\":2,\"2516\":2,\"2990\":0}},\"INPUT_EVENT_RESPONSE_COALESCED_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":142918,\"range\":[1,10000],\"values\":{\"0\":600,\"1\":104,\"2\":93,\"3\":142,\"4\":170,\"5\":229,\"6\":294,\"7\":344,\"8\":843,\"10\":999,\"12\":1036,\"14\":1029,\"17\":196,\"20\":247,\"24\":277,\"29\":192,\"34\":92,\"40\":85,\"48\":146,\"57\":106,\"68\":51,\"81\":84,\"96\":82,\"114\":98,\"135\":30,\"160\":20,\"190\":5,\"226\":5,\"268\":3,\"318\":1,\"533\":1,\"752\":1,\"1062\":1,\"2516\":1,\"2990\":0}},\"MEDIA_AUDIO_BACKEND\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":5,\"range\":[1,50],\"values\":{\"4\":0,\"5\":1,\"6\":0}},\"MASTER_PASSWORD_ENABLED\":{\"bucket_count\":3,\"histogram_type\":3,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":1,\"1\":0}},\"VIDEO_PLAY_TIME_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":15769,\"range\":[1,7200000],\"values\":{\"12706\":0,\"14776\":1,\"17184\":0}},\"VIDEO_HIDDEN_PLAY_TIME"
		"_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":0,\"range\":[1,7200000],\"values\":{\"0\":1,\"1\":0}},\"PWMGR_FORM_AUTOFILL_RESULT\":{\"bucket_count\":21,\"histogram_type\":1,\"sum\":16,\"range\":[1,20],\"values\":{\"3\":0,\"4\":4,\"5\":0}},\"PWMGR_LOGIN_PAGE_SAFETY\":{\"bucket_count\":9,\"histogram_type\":1,\"sum\":4,\"range\":[1,8],\"values\":{\"0\":6,\"4\":1,\"5\":0}},\"CONTENT_DOCUMENTS_DESTROYED\":{\"bucket_count\":3,\"histogram_type\":4,\"sum\":128,\"range\":[1,2],\"values\":{\"0\":128,\"1\":0}},\"WEBFONT_DOWNLOAD_TIME_AFTER_START\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":607510,\"range\":[1,60000],\"values\":{\"16532\":0,\"20494\":5,\"25406\":5,\"60000\":3}},\"JS_EXECUTION_PROPORTION\":{\"bucket_count\":20,\"histogram_type\":1,\"sum\":55,\"range\":[1,100],\"values\":{\"0\":2,\"1\":6,\"7\":3,\"12\":1,\"18\":0}},\"JS_DELAZIFICATION_PROPORTION\":{\"bucket_count\":20,\"histogram_type\":1,\"sum\":2659,\"range\":[1,100],\"values\":{\"0\":0,\"1\":1,\"7\":3,\"12\":2,\"18\":5,\"23\":3,\"29"
		"\":1,\"100\":1}},\"JS_XDR_ENCODING_PROPORTION\":{\"bucket_count\":20,\"histogram_type\":1,\"sum\":1,\"range\":[1,100],\"values\":{\"0\":4,\"1\":1,\"7\":0}},\"JS_BASELINE_COMPILE_PROPORTION\":{\"bucket_count\":20,\"histogram_type\":1,\"sum\":714,\"range\":[1,100],\"values\":{\"0\":4,\"1\":11,\"100\":1}},\"JS_BYTECODE_CACHING_TIME\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":25,\"range\":[1,10000],\"values\":{\"0\":2,\"2\":1,\"5\":1,\"9\":2,\"10\":0}},\"CONTENT_PAINT_TIME\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":10420,\"range\":[1,1000],\"values\":{\"0\":1174,\"1\":1344,\"2\":1191,\"3\":876,\"4\":376,\"5\":209,\"6\":102,\"7\":45,\"8\":17,\"9\":5,\"10\":8,\"11\":7,\"12\":5,\"14\":2,\"16\":5,\"18\":1,\"29\":2,\"33\":0}},\"TIME_TO_NON_BLANK_PAINT_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":97858,\"range\":[1,100000],\"values\":{\"234\":0,\"260\":1,\"289\":1,\"321\":2,\"356\":1,\"665\":1,\"1243\":1,\"1380\":1,\"2096\":1,\"6614\":1,\"7342\":1,\"8150\":1,\"13740\":1,\"48132\":1,\"5343"
		"2\":0}},\"TIME_TO_FIRST_CONTENTFUL_PAINT_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":99003,\"range\":[1,100000],\"values\":{\"260\":0,\"289\":2,\"321\":1,\"356\":1,\"395\":1,\"909\":1,\"1243\":1,\"1380\":1,\"2096\":1,\"6614\":1,\"7342\":1,\"8150\":1,\"13740\":1,\"48132\":1,\"53432\":0}},\"TIME_TO_DOM_LOADING_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":124102,\"range\":[1,50000],\"values\":{\"2\":0,\"3\":1,\"13\":1,\"19\":1,\"232\":1,\"255\":1,\"281\":2,\"309\":1,\"605\":1,\"1075\":1,\"1183\":1,\"1433\":1,\"1577\":1,\"5495\":1,\"6049\":2,\"8069\":1,\"8882\":1,\"9777\":1,\"14354\":2,\"37488\":1,\"41265\":0}},\"TIME_TO_DOM_INTERACTIVE_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":266301,\"range\":[1,50000],\"values\":{\"5\":0,\"6\":1,\"17\":1,\"281\":1,\"550\":1,\"666\":2,\"733\":2,\"1736\":1,\"1911\":1,\"4992\":1,\"5495\":1,\"6049\":1,\"8069\":1,\"8882\":1,\"14354\":2,\"21073\":1,\"28106\":1,\"34056\":1,\"50000\":2}},\"TIME_TO_DOM_CONTENT_LOADED_START_MS\":{\"bucket_count\":1"
		"00,\"histogram_type\":0,\"sum\":259940,\"range\":[1,50000],\"values\":{\"11\":0,\"12\":1,\"17\":1,\"281\":1,\"550\":1,\"666\":2,\"733\":2,\"1736\":1,\"2104\":1,\"4992\":1,\"5495\":1,\"8069\":1,\"8882\":1,\"14354\":2,\"21073\":1,\"28106\":1,\"34056\":1,\"50000\":2}},\"TIME_TO_DOM_CONTENT_LOADED_END_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":260127,\"range\":[1,50000],\"values\":{\"15\":0,\"17\":1,\"31\":1,\"340\":1,\"550\":1,\"666\":2,\"733\":2,\"1736\":1,\"2104\":1,\"4992\":1,\"6049\":1,\"8069\":1,\"8882\":1,\"14354\":2,\"21073\":1,\"28106\":1,\"34056\":1,\"50000\":2}},\"TIME_TO_DOM_COMPLETE_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":445666,\"range\":[1,50000],\"values\":{\"17\":0,\"19\":1,\"31\":1,\"340\":1,\"888\":1,\"1577\":1,\"2104\":1,\"2806\":1,\"3089\":1,\"3400\":1,\"6049\":1,\"8069\":1,\"11846\":1,\"14354\":1,\"17392\":1,\"23196\":1,\"28106\":1,\"37488\":1,\"50000\":4}},\"TIME_TO_LOAD_EVENT_START_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":290804,\"range\":[1,50"
		"000],\"values\":{\"17\":0,\"19\":1,\"31\":1,\"340\":1,\"888\":1,\"1577\":1,\"2104\":1,\"2806\":1,\"3089\":1,\"3400\":1,\"6049\":1,\"8069\":1,\"11846\":1,\"23196\":1,\"50000\":3}},\"TIME_TO_LOAD_EVENT_END_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":290893,\"range\":[1,50000],\"values\":{\"17\":0,\"19\":1,\"34\":1,\"340\":1,\"888\":1,\"1577\":1,\"2104\":1,\"2806\":1,\"3089\":1,\"3400\":1,\"6049\":1,\"8069\":1,\"11846\":1,\"23196\":1,\"50000\":3}},\"TIME_TO_RESPONSE_START_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":91397,\"range\":[1,50000],\"values\":{\"211\":0,\"232\":2,\"255\":1,\"281\":2,\"977\":1,\"1075\":1,\"1183\":1,\"5495\":1,\"8069\":1,\"8882\":1,\"9777\":1,\"14354\":1,\"37488\":1,\"41265\":0}},\"PERF_PAGE_LOAD_TIME_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":196661,\"range\":[1,50000],\"values\":{\"807\":0,\"888\":1,\"1577\":1,\"2104\":1,\"2806\":1,\"3089\":1,\"3400\":1,\"11846\":1,\"50000\":2}},\"PERF_PAGE_LOAD_TIME_FROM_RESPONSESTART_MS\":{\"bucket_count\":100,\""
		"histogram_type\":0,\"sum\":142045,\"range\":[1,50000],\"values\":{\"666\":0,\"733\":1,\"1433\":1,\"1736\":1,\"2316\":1,\"2549\":1,\"2806\":1,\"4120\":1,\"50000\":2}},\"PERF_DOM_CONTENT_LOADED_TIME_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":98997,\"range\":[1,50000],\"values\":{\"500\":0,\"550\":1,\"666\":2,\"733\":2,\"1736\":1,\"2104\":1,\"5495\":1,\"8069\":1,\"8882\":1,\"14354\":1,\"50000\":1}},\"PERF_DOM_CONTENT_LOADED_TIME_FROM_RESPONSESTART_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":31791,\"range\":[1,50000],\"values\":{\"255\":0,\"281\":1,\"374\":1,\"412\":1,\"454\":2,\"500\":1,\"550\":1,\"733\":1,\"3089\":1,\"4535\":2,\"14354\":1,\"15800\":0}},\"PERF_FIRST_CONTENTFUL_PAINT_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":89828,\"range\":[1,50000],\"values\":{\"255\":0,\"281\":1,\"309\":1,\"340\":2,\"1302\":1,\"1433\":1,\"2104\":1,\"6659\":1,\"8069\":1,\"14354\":1,\"50000\":1}},\"PERF_FIRST_CONTENTFUL_PAINT_FROM_RESPONSESTART_MS\":{\"bucket_count\":100,\"histogram_type"
		"\":0,\"sum\":22735,\"range\":[1,50000],\"values\":{\"41\":0,\"45\":1,\"50\":1,\"55\":1,\"67\":1,\"81\":1,\"232\":1,\"374\":1,\"605\":1,\"1302\":1,\"4992\":1,\"14354\":1,\"15800\":0}},\"PERF_REQUEST_ANIMATION_CALLBACK_NON_PAGELOAD_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":73,\"range\":[1,5000],\"values\":{\"0\":2631,\"1\":14,\"2\":3,\"3\":2,\"4\":1,\"6\":2,\"7\":1,\"8\":3,\"9\":0}},\"PERF_REQUEST_ANIMATION_CALLBACK_PAGELOAD_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":139,\"range\":[1,5000],\"values\":{\"0\":791,\"1\":33,\"2\":9,\"3\":1,\"4\":1,\"6\":2,\"9\":1,\"13\":1,\"14\":1,\"33\":1,\"35\":0}},\"BFCACHE_COMBO\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":15,\"range\":[1,50],\"values\":{\"0\":8,\"2\":6,\"3\":1,\"4\":0}},\"BFCACHE_PAGE_RESTORED\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"BASE_FONT_FAMILIES_PER_PAGE\":{\"bucket_count\":64,\"histogram_type\":0,\"sum\":63,\"range\":[1,256],\"values\":{\"0\":2,\"2\""
		":3,\"3\":3,\"4\":5,\"28\":1,\"30\":0}},\"LANGPACK_FONT_FAMILIES_PER_PAGE\":{\"bucket_count\":64,\"histogram_type\":0,\"sum\":0,\"range\":[1,256],\"values\":{\"0\":14,\"1\":0}},\"USER_FONT_FAMILIES_PER_PAGE\":{\"bucket_count\":64,\"histogram_type\":0,\"sum\":20,\"range\":[1,256],\"values\":{\"0\":9,\"1\":4,\"16\":1,\"17\":0}},\"WEB_FONT_FAMILIES_PER_PAGE\":{\"bucket_count\":64,\"histogram_type\":0,\"sum\":5,\"range\":[1,256],\"values\":{\"0\":11,\"1\":2,\"3\":1,\"4\":0}},\"FALLBACK_TO_PREFS_FONT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":14,\"1\":0}},\"FALLBACK_TO_BASE_FONT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":14,\"1\":0}},\"FALLBACK_TO_LANGPACK_FONT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":14,\"1\":0}},\"FALLBACK_TO_USER_FONT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":14,\"1\":0}},\"MISSING_FONT\":{\"bucket_count\":3,\"histogr"
		"am_type\":2,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":14,\"1\":0}},\"MISSING_FONT_LANGPACK\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":14,\"1\":0}},\"MISSING_FONT_USER\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":14,\"1\":0}},\"APZ_ZOOM_ACTIVITY\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":13,\"1\":0}},\"REL_PRELOAD_MISS_RATIO\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":204,\"range\":[1,50],\"values\":{\"0\":372,\"1\":2,\"2\":101,\"3\":0}},\"USE_COUNTER2_CONSOLE_WARN_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_DOCUMENTOPEN_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_HTMLDOCUMENT_WEBKITVISIBILITYSTATE_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":7,\"range\":[1,2],\"values\":{\"0\":0,\"1\""
		":7,\"2\":0}},\"USE_COUNTER2_WINDOW_CHROME_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_WINDOW_PERFORMANCELONGTASKTIMING_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":5,\"range\":[1,2],\"values\":{\"0\":0,\"1\":5,\"2\":0}},\"USE_COUNTER2_WINDOW_TOUCHLIST_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_WINDOW_VISUALVIEWPORT_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":6,\"range\":[1,2],\"values\":{\"0\":0,\"1\":6,\"2\":0}},\"USE_COUNTER2_WINDOW_WEBKITREQUESTFILESYSTEM_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":6,\"range\":[1,2],\"values\":{\"0\":0,\"1\":6,\"2\":0}},\"USE_COUNTER2_DEPRECATED_FormSubmissionUntrustedEvent_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_AlignContent_DOCUMENT\":{\"bucket_coun"
		"t\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_AlignItems_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":9,\"range\":[1,2],\"values\":{\"0\":0,\"1\":9,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_AlignSelf_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":8,\"range\":[1,2],\"values\":{\"0\":0,\"1\":8,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BackfaceVisibility_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":5,\"range\":[1,2],\"values\":{\"0\":0,\"1\":5,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderCollapse_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":6,\"range\":[1,2],\"values\":{\"0\":0,\"1\":6,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BoxSizing_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":12,\"range\":[1,2],\"values\":{\"0\":0,\"1\":12,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BreakInside_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":"
		"4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Clear_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":11,\"range\":[1,2],\"values\":{\"0\":0,\"1\":11,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_ColorInterpolationFilters_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":3,\"range\":[1,2],\"values\":{\"0\":0,\"1\":3,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_ColumnCount_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Direction_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Display_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":13,\"range\":[1,2],\"values\":{\"0\":0,\"1\":13,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_FlexDirection_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":8,\"range\":[1,2],\"values\":{\"0\":0,\"1\":8,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_FlexWrap_DOCUMENT\":{\"bucket_count\":"
		"3,\"histogram_type\":2,\"sum\":8,\"range\":[1,2],\"values\":{\"0\":0,\"1\":8,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Float_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":12,\"range\":[1,2],\"values\":{\"0\":0,\"1\":12,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_FontSizeAdjust_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_FontStyle_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":12,\"range\":[1,2],\"values\":{\"0\":0,\"1\":12,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_FontVariantNumeric_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_FontWeight_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":12,\"range\":[1,2],\"values\":{\"0\":0,\"1\":12,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Hyphens_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":8,\"range\":[1,2],\"values\":{\"0\":0,\"1\":8,\"2\":"
		"0}},\"USE_COUNTER2_CSS_PROPERTY_ImageRendering_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":3,\"range\":[1,2],\"values\":{\"0\":0,\"1\":3,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_JustifyContent_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":9,\"range\":[1,2],\"values\":{\"0\":0,\"1\":9,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_JustifySelf_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_LineBreak_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_ListStylePosition_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":3,\"range\":[1,2],\"values\":{\"0\":0,\"1\":3,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_MixBlendMode_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_MozForceBrokenImageIcon_DOCUMENT\":{\"bucke"
		"t_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_MozUserFocus_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":5,\"range\":[1,2],\"values\":{\"0\":0,\"1\":5,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_MozUserModify_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_ObjectFit_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_OutlineStyle_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":3,\"range\":[1,2],\"values\":{\"0\":0,\"1\":3,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_OverflowAnchor_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_OverflowWrap_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":7,\"range\":[1,2],\"values\":{\"0\":0,"
		"\"1\":7,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_PointerEvents_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":8,\"range\":[1,2],\"values\":{\"0\":0,\"1\":8,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Position_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":13,\"range\":[1,2],\"values\":{\"0\":0,\"1\":13,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Resize_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":9,\"range\":[1,2],\"values\":{\"0\":0,\"1\":9,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_ScrollSnapAlign_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_ScrollSnapType_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_ScrollbarWidth_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_StrokeLinecap_DOCUMENT\":{\"bucket"
		"_count\":3,\"histogram_type\":2,\"sum\":6,\"range\":[1,2],\"values\":{\"0\":0,\"1\":6,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_StrokeLinejoin_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":7,\"range\":[1,2],\"values\":{\"0\":0,\"1\":7,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_TableLayout_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":10,\"range\":[1,2],\"values\":{\"0\":0,\"1\":10,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_TextAlign_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":12,\"range\":[1,2],\"values\":{\"0\":0,\"1\":12,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_TextRendering_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_TextTransform_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":11,\"range\":[1,2],\"values\":{\"0\":0,\"1\":11,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_TouchAction_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":7,\"range\":[1,2],\"values\":{\"0\""
		":0,\"1\":7,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_TransformBox_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_UserSelect_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":12,\"range\":[1,2],\"values\":{\"0\":0,\"1\":12,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_VectorEffect_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Visibility_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":11,\"range\":[1,2],\"values\":{\"0\":0,\"1\":11,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitLineClamp_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":6,\"range\":[1,2],\"values\":{\"0\":0,\"1\":6,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WhiteSpace_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":12,\"range\":[1,2],\"values\":{\"0\":0,\"1\":12,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WordBreak_DOCUMENT\":{\"buck"
		"et_count\":3,\"histogram_type\":2,\"sum\":6,\"range\":[1,2],\"values\":{\"0\":0,\"1\":6,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WritingMode_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_ZIndex_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":13,\"range\":[1,2],\"values\":{\"0\":0,\"1\":13,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Appearance_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":3,\"range\":[1,2],\"values\":{\"0\":0,\"1\":3,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_ClipRule_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":25,\"range\":[1,2],\"values\":{\"0\":0,\"1\":25,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_FillRule_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":53,\"range\":[1,2],\"values\":{\"0\":0,\"1\":53,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_FillOpacity_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2"
		"\":0}},\"USE_COUNTER2_CSS_PROPERTY_StrokeOpacity_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":7,\"range\":[1,2],\"values\":{\"0\":0,\"1\":7,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Order_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_FlexGrow_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":8,\"range\":[1,2],\"values\":{\"0\":0,\"1\":8,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_FlexShrink_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":8,\"range\":[1,2],\"values\":{\"0\":0,\"1\":8,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_StrokeMiterlimit_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":5,\"range\":[1,2],\"values\":{\"0\":0,\"1\":5,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_OverflowX_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":9,\"range\":[1,2],\"values\":{\"0\":0,\"1\":9,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_OverflowY_DOCUMENT\":{\"bucket_count\":3,\"histogram_typ"
		"e\":2,\"sum\":11,\"range\":[1,2],\"values\":{\"0\":0,\"1\":11,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_FloodOpacity_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":3,\"range\":[1,2],\"values\":{\"0\":0,\"1\":3,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Opacity_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":26,\"range\":[1,2],\"values\":{\"0\":0,\"1\":26,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_StopOpacity_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderBottomStyle_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":5,\"range\":[1,2],\"values\":{\"0\":0,\"1\":5,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderRightStyle_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":3,\"range\":[1,2],\"values\":{\"0\":0,\"1\":3,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderTopStyle_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":3,\"range\":[1,2],\"values\":{\"0\":0,\"1\":3,\"2\":0}},"
		"\"USE_COUNTER2_CSS_PROPERTY_AnimationDelay_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":8,\"range\":[1,2],\"values\":{\"0\":0,\"1\":8,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_AnimationDirection_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":5,\"range\":[1,2],\"values\":{\"0\":0,\"1\":5,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_AnimationDuration_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":11,\"range\":[1,2],\"values\":{\"0\":0,\"1\":11,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_AnimationFillMode_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":10,\"range\":[1,2],\"values\":{\"0\":0,\"1\":10,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_AnimationIterationCount_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":8,\"range\":[1,2],\"values\":{\"0\":0,\"1\":8,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_AnimationName_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":11,\"range\":[1,2],\"values\":{\"0\":0,\"1\":11,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_AnimationTimingF"
		"unction_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":7,\"range\":[1,2],\"values\":{\"0\":0,\"1\":7,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BackgroundClip_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":7,\"range\":[1,2],\"values\":{\"0\":0,\"1\":7,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BackgroundImage_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":13,\"range\":[1,2],\"values\":{\"0\":0,\"1\":13,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BackgroundOrigin_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BackgroundPositionX_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":7,\"range\":[1,2],\"values\":{\"0\":0,\"1\":7,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BackgroundPositionY_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":5,\"range\":[1,2],\"values\":{\"0\":0,\"1\":5,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BackgroundRepeat_DOCUMENT\":{\"bucket_count\":3,\"histogram_"
		"type\":2,\"sum\":13,\"range\":[1,2],\"values\":{\"0\":0,\"1\":13,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BackgroundSize_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":13,\"range\":[1,2],\"values\":{\"0\":0,\"1\":13,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderImageSlice_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderSpacing_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":10,\"range\":[1,2],\"values\":{\"0\":0,\"1\":10,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BoxShadow_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":11,\"range\":[1,2],\"values\":{\"0\":0,\"1\":11,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_ClipPath_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":10,\"range\":[1,2],\"values\":{\"0\":0,\"1\":10,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Color_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":12,\"range\":[1,2],\"values\":{\"0\":0,\"1\":12,\"2\":0}},\""
		"USE_COUNTER2_CSS_PROPERTY_ColumnWidth_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Content_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":12,\"range\":[1,2],\"values\":{\"0\":0,\"1\":12,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_CounterIncrement_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Cursor_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":13,\"range\":[1,2],\"values\":{\"0\":0,\"1\":13,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Filter_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":14,\"range\":[1,2],\"values\":{\"0\":0,\"1\":14,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_FlexBasis_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":7,\"range\":[1,2],\"values\":{\"0\":0,\"1\":7,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_FontFamily_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\""
		"sum\":12,\"range\":[1,2],\"values\":{\"0\":0,\"1\":12,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_FontSize_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":12,\"range\":[1,2],\"values\":{\"0\":0,\"1\":12,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_FontVariationSettings_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_LetterSpacing_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":10,\"range\":[1,2],\"values\":{\"0\":0,\"1\":10,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_LineHeight_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":12,\"range\":[1,2],\"values\":{\"0\":0,\"1\":12,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_ListStyleType_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":5,\"range\":[1,2],\"values\":{\"0\":0,\"1\":5,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_MaskImage_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":3,\"range\":[1,2],\"values\":{\"0\":0,\"1\":3,\"2\":0}},\"USE_CO"
		"UNTER2_CSS_PROPERTY_MozContextProperties_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_MozTabSize_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Perspective_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Scale_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_StrokeDasharray_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_StrokeDashoffset_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_StrokeWidth_DOCUMENT\":{\"bucket_count\":3,\"histogram_"
		"type\":2,\"sum\":14,\"range\":[1,2],\"values\":{\"0\":0,\"1\":14,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_TextOverflow_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":11,\"range\":[1,2],\"values\":{\"0\":0,\"1\":11,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_TextShadow_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":11,\"range\":[1,2],\"values\":{\"0\":0,\"1\":11,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_TransitionDelay_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_TransitionDuration_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":3,\"range\":[1,2],\"values\":{\"0\":0,\"1\":3,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_TransitionProperty_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":7,\"range\":[1,2],\"values\":{\"0\":0,\"1\":7,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_TransitionTimingFunction_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\""
		"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Translate_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_VerticalAlign_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":11,\"range\":[1,2],\"values\":{\"0\":0,\"1\":11,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WillChange_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":7,\"range\":[1,2],\"values\":{\"0\":0,\"1\":7,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WordSpacing_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":5,\"range\":[1,2],\"values\":{\"0\":0,\"1\":5,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Clip_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":3,\"range\":[1,2],\"values\":{\"0\":0,\"1\":3,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Fill_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":82,\"range\":[1,2],\"values\":{\"0\":0,\"1\":82,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Stroke_DOCUMENT\":{\"bucket_count\":3,\"histo"
		"gram_type\":2,\"sum\":21,\"range\":[1,2],\"values\":{\"0\":0,\"1\":21,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_TransformOrigin_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":7,\"range\":[1,2],\"values\":{\"0\":0,\"1\":7,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_CounterReset_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_GridTemplateColumns_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_ListStyleImage_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Transform_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":11,\"range\":[1,2],\"values\":{\"0\":0,\"1\":11,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_GridColumnEnd_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":"
		"1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_GridColumnStart_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_GridRowEnd_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_GridRowStart_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_MaxHeight_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":11,\"range\":[1,2],\"values\":{\"0\":0,\"1\":11,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_MaxWidth_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":12,\"range\":[1,2],\"values\":{\"0\":0,\"1\":12,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_TextIndent_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":11,\"range\":[1,2],\"values\":{\"0\":0,\"1\":11,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Height_DOCUMENT\":{\"bucket_count\":3,\"hi"
		"stogram_type\":2,\"sum\":81,\"range\":[1,2],\"values\":{\"0\":0,\"1\":81,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_MinHeight_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":12,\"range\":[1,2],\"values\":{\"0\":0,\"1\":12,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_MinWidth_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":12,\"range\":[1,2],\"values\":{\"0\":0,\"1\":12,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Width_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":81,\"range\":[1,2],\"values\":{\"0\":0,\"1\":81,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_OutlineOffset_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":3,\"range\":[1,2],\"values\":{\"0\":0,\"1\":3,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_PaddingBottom_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":11,\"range\":[1,2],\"values\":{\"0\":0,\"1\":11,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_PaddingInlineEnd_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0"
		"}},\"USE_COUNTER2_CSS_PROPERTY_PaddingInlineStart_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_PaddingLeft_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":12,\"range\":[1,2],\"values\":{\"0\":0,\"1\":12,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_PaddingRight_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":12,\"range\":[1,2],\"values\":{\"0\":0,\"1\":12,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_PaddingTop_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":12,\"range\":[1,2],\"values\":{\"0\":0,\"1\":12,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderBottomWidth_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":10,\"range\":[1,2],\"values\":{\"0\":0,\"1\":10,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderLeftWidth_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":9,\"range\":[1,2],\"values\":{\"0\":0,\"1\":9,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderRightWidth_DOCUMENT\":{"
		"\"bucket_count\":3,\"histogram_type\":2,\"sum\":10,\"range\":[1,2],\"values\":{\"0\":0,\"1\":10,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderTopWidth_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":9,\"range\":[1,2],\"values\":{\"0\":0,\"1\":9,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_OutlineWidth_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderBottomLeftRadius_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":8,\"range\":[1,2],\"values\":{\"0\":0,\"1\":8,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderBottomRightRadius_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":8,\"range\":[1,2],\"values\":{\"0\":0,\"1\":8,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderTopLeftRadius_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":8,\"range\":[1,2],\"values\":{\"0\":0,\"1\":8,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderTopRightRadius_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,"
		"\"sum\":8,\"range\":[1,2],\"values\":{\"0\":0,\"1\":8,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Bottom_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":12,\"range\":[1,2],\"values\":{\"0\":0,\"1\":12,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Left_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":13,\"range\":[1,2],\"values\":{\"0\":0,\"1\":13,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_MarginBottom_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":11,\"range\":[1,2],\"values\":{\"0\":0,\"1\":11,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_MarginInlineEnd_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_MarginInlineStart_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_MarginLeft_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":12,\"range\":[1,2],\"values\":{\"0\":0,\"1\":12,\"2\":0}},\"USE_COUNTER2_C"
		"SS_PROPERTY_MarginRight_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":12,\"range\":[1,2],\"values\":{\"0\":0,\"1\":12,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_MarginTop_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":12,\"range\":[1,2],\"values\":{\"0\":0,\"1\":12,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Right_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":12,\"range\":[1,2],\"values\":{\"0\":0,\"1\":12,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Top_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":13,\"range\":[1,2],\"values\":{\"0\":0,\"1\":13,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BackgroundColor_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":12,\"range\":[1,2],\"values\":{\"0\":0,\"1\":12,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderBottomColor_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":10,\"range\":[1,2],\"values\":{\"0\":0,\"1\":10,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderLeftColor_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,"
		"\"sum\":9,\"range\":[1,2],\"values\":{\"0\":0,\"1\":9,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderRightColor_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":5,\"range\":[1,2],\"values\":{\"0\":0,\"1\":5,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderTopColor_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":11,\"range\":[1,2],\"values\":{\"0\":0,\"1\":11,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_StopColor_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":9,\"range\":[1,2],\"values\":{\"0\":0,\"1\":9,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitTextFillColor_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":6,\"range\":[1,2],\"values\":{\"0\":0,\"1\":6,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Background_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":13,\"range\":[1,2],\"values\":{\"0\":0,\"1\":13,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BackgroundPosition_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":13,\"range\":[1,2],\"values\":{\"0\":0,\"1\":13,\"2\":"
		"0}},\"USE_COUNTER2_CSS_PROPERTY_BorderColor_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":12,\"range\":[1,2],\"values\":{\"0\":0,\"1\":12,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderStyle_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":12,\"range\":[1,2],\"values\":{\"0\":0,\"1\":12,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderWidth_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":12,\"range\":[1,2],\"values\":{\"0\":0,\"1\":12,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderTop_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":11,\"range\":[1,2],\"values\":{\"0\":0,\"1\":11,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderRight_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":11,\"range\":[1,2],\"values\":{\"0\":0,\"1\":11,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderBottom_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":11,\"range\":[1,2],\"values\":{\"0\":0,\"1\":11,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderLeft_DOCUMENT\":{\"bucket_count\":3,"
		"\"histogram_type\":2,\"sum\":9,\"range\":[1,2],\"values\":{\"0\":0,\"1\":9,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Border_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":12,\"range\":[1,2],\"values\":{\"0\":0,\"1\":12,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderRadius_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":12,\"range\":[1,2],\"values\":{\"0\":0,\"1\":12,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderImage_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Overflow_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":15,\"range\":[1,2],\"values\":{\"0\":0,\"1\":15,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Transition_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":11,\"range\":[1,2],\"values\":{\"0\":0,\"1\":11,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Animation_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":12,\"range\":[1,2],\"values\":{\"0\":0,\"1\":12,\"2\":0}},"
		"\"USE_COUNTER2_CSS_PROPERTY_OverscrollBehavior_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_PageBreakBefore_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_PageBreakAfter_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Zoom_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":5,\"range\":[1,2],\"values\":{\"0\":0,\"1\":5,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Font_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":11,\"range\":[1,2],\"values\":{\"0\":0,\"1\":11,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_FontVariant_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitTextStroke_DOCUMENT\":{\"bucket_count\":3,\"histog"
		"ram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_ListStyle_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":12,\"range\":[1,2],\"values\":{\"0\":0,\"1\":12,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Margin_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":13,\"range\":[1,2],\"values\":{\"0\":0,\"1\":13,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Outline_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":12,\"range\":[1,2],\"values\":{\"0\":0,\"1\":12,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_MozOutlineRadius_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Padding_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":13,\"range\":[1,2],\"values\":{\"0\":0,\"1\":13,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_FlexFlow_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2"
		"_CSS_PROPERTY_Flex_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":7,\"range\":[1,2],\"values\":{\"0\":0,\"1\":7,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Mask_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_TextDecoration_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":11,\"range\":[1,2],\"values\":{\"0\":0,\"1\":11,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitBackgroundClip_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitBackgroundSize_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitBorderTopLeftRadius_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitBorderTopRightRadius_DOCUMENT\":{\"bucket_c"
		"ount\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitBorderBottomRightRadius_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitBorderBottomLeftRadius_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitTransitionDuration_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitTransitionTimingFunction_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitTransitionProperty_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_MozAnimationName_DOCUMENT\":{\"bucket_co"
		"unt\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitAnimationName_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":6,\"range\":[1,2],\"values\":{\"0\":0,\"1\":6,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_MozAnimationDuration_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitAnimationDuration_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":6,\"range\":[1,2],\"values\":{\"0\":0,\"1\":6,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitAnimationTimingFunction_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitAnimationIterationCount_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":3,\"range\":[1,2],\"values\":{\"0\":0,\"1\":3,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_MozAnimationFillMode_DOCUMENT\":{\"bucket_count\":3,\"hi"
		"stogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitAnimationFillMode_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":5,\"range\":[1,2],\"values\":{\"0\":0,\"1\":5,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitAnimationDelay_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_MozTransform_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":3,\"range\":[1,2],\"values\":{\"0\":0,\"1\":3,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitTransform_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":8,\"range\":[1,2],\"values\":{\"0\":0,\"1\":8,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_PageBreakInside_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":5,\"range\":[1,2],\"values\":{\"0\":0,\"1\":5,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitPerspective_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"value"
		"s\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitBackfaceVisibility_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":6,\"range\":[1,2],\"values\":{\"0\":0,\"1\":6,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitTransformOrigin_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_MozAppearance_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":3,\"range\":[1,2],\"values\":{\"0\":0,\"1\":3,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitAppearance_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":8,\"range\":[1,2],\"values\":{\"0\":0,\"1\":8,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitBoxShadow_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":11,\"range\":[1,2],\"values\":{\"0\":0,\"1\":11,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitFilter_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":6,\"range\":[1,2],\"values\":{\"0\":0,\"1\":6,\"2\":0}},\"USE_COUNTER2_CSS"
		"_PROPERTY_MozHyphens_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":3,\"range\":[1,2],\"values\":{\"0\":0,\"1\":3,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitTextSizeAdjust_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WordWrap_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":11,\"range\":[1,2],\"values\":{\"0\":0,\"1\":11,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_MozMarginStart_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":3,\"range\":[1,2],\"values\":{\"0\":0,\"1\":3,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitFlexDirection_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitFlexWrap_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitJustifyContent_DOCUMENT\":{\"bucket_count\":3,\"h"
		"istogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitAlignItems_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitFlexGrow_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitFlexShrink_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitAlignSelf_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_MozBoxSizing_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":6,\"range\":[1,2],\"values\":{\"0\":0,\"1\":6,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitBoxSizing_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":6,\"range\":[1,2],\"values\":{\"0\":0,"
		"\"1\":6,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitMaskImage_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":5,\"range\":[1,2],\"values\":{\"0\":0,\"1\":5,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_MozUserSelect_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":12,\"range\":[1,2],\"values\":{\"0\":0,\"1\":12,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitUserSelect_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":12,\"range\":[1,2],\"values\":{\"0\":0,\"1\":12,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitBoxAlign_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":3,\"range\":[1,2],\"values\":{\"0\":0,\"1\":3,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitBoxDirection_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitBoxFlex_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitBoxOrie"
		"nt_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":8,\"range\":[1,2],\"values\":{\"0\":0,\"1\":8,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitBoxPack_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":3,\"range\":[1,2],\"values\":{\"0\":0,\"1\":3,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitBorderRadius_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":6,\"range\":[1,2],\"values\":{\"0\":0,\"1\":6,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_MozTransition_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":3,\"range\":[1,2],\"values\":{\"0\":0,\"1\":3,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitTransition_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_MozAnimation_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitAnimation_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":6,"
		"\"range\":[1,2],\"values\":{\"0\":0,\"1\":6,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitFlex_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitFontSmoothing_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":7,\"range\":[1,2],\"values\":{\"0\":0,\"1\":7,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitTapHighlightColor_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":8,\"range\":[1,2],\"values\":{\"0\":0,\"1\":8,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Speak_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitUserDrag_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Orphans_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_P"
		"ROPERTY_Widows_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitUserModify_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_TabSize_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitMarginStart_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitColumnBreakInside_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitPaddingStart_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitMarginEnd_DOCUMENT\":{\"bucket_count\":3,\"histogra"
		"m_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitPrintColorAdjust_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":5,\"range\":[1,2],\"values\":{\"0\":0,\"1\":5,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitColumnCount_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitColumnWidth_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}}},\"keyedHistograms\":{\"HTTP3_OPEN_TO_FIRST_SENT\":{\"uses_http3_sub\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":40955,\"range\":[1,30000],\"values\":{\"24\":0,\"29\":1,\"43\":1,\"63\":1,\"140\":2,\"171\":2,\"1023\":5,\"1248\":1,\"1522\":3,\"7463\":1,\"16527\":1,\"20161\":0}},\"uses_http3_page\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":360,\"range\":[1,30000],\"values\":{\"140\":0,\"171\":2,\"209\":0}}},\"HTTP3_FIRST_SENT_TO_LAST_RECEI"
		"VED\":{\"uses_http3_sub\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":12641,\"range\":[1,30000],\"values\":{\"16\":0,\"20\":2,\"29\":1,\"35\":1,\"43\":2,\"115\":2,\"171\":1,\"209\":1,\"311\":1,\"379\":1,\"462\":2,\"1248\":2,\"1857\":1,\"5015\":1,\"6118\":0}},\"uses_http3_page\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":2990,\"range\":[1,30000],\"values\":{\"1023\":0,\"1248\":2,\"1522\":0}}},\"HTTP3_OPEN_TO_FIRST_RECEIVED\":{\"uses_http3_sub\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":48526,\"range\":[1,30000],\"values\":{\"43\":0,\"52\":1,\"77\":2,\"171\":2,\"1023\":1,\"1248\":3,\"1522\":5,\"1857\":2,\"7463\":1,\"20161\":1,\"24593\":0}},\"uses_http3_page\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":3350,\"range\":[1,30000],\"values\":{\"1248\":0,\"1522\":2,\"1857\":0}}},\"HTTP3_COMPLETE_LOAD\":{\"uses_http3_sub\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":53599,\"range\":[1,30000],\"values\":{\"52\":0,\"63\":1,\"94\":2,\"171\":2,\"1248\":3,\"1522\":6,\"1857\":1,\"6118\":1"
		",\"7463\":1,\"20161\":1,\"24593\":0}},\"uses_http3_page\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":3350,\"range\":[1,30000],\"values\":{\"1248\":0,\"1522\":2,\"1857\":0}}},\"PAGE_LOAD_ERROR\":{\"frame\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":44,\"range\":[1,50],\"values\":{\"43\":0,\"44\":1,\"45\":0}}},\"VIDEO_HIDDEN_PLAY_TIME_PERCENTAGE\":{\"All\":{\"bucket_count\":50,\"histogram_type\":1,\"sum\":0,\"range\":[1,100],\"values\":{\"0\":1,\"1\":0}},\"AV,240<h<=480\":{\"bucket_count\":50,\"histogram_type\":1,\"sum\":0,\"range\":[1,100],\"values\":{\"0\":1,\"1\":0}}},\"VIDEO_INFERRED_DECODE_SUSPEND_PERCENTAGE\":{\"All\":{\"bucket_count\":50,\"histogram_type\":1,\"sum\":0,\"range\":[1,100],\"values\":{\"0\":1,\"1\":0}},\"AV,240<h<=480\":{\"bucket_count\":50,\"histogram_type\":1,\"sum\":0,\"range\":[1,100],\"values\":{\"0\":1,\"1\":0}}},\"MEDIA_CODEC_USED\":{\"audio/mp4a-latm\":{\"bucket_count\":3,\"histogram_type\":4,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":1,\"1\":0}},\"video/avc\":{\"buc"
		"ket_count\":3,\"histogram_type\":4,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":1,\"1\":0}}}},\"scalars\":{\"telemetry.discarded.accumulations\":0,\"telemetry.discarded.scalar_actions\":0,\"telemetry.discarded.keyed_accumulations\":0,\"networking.http3_enabled\":true,\"script.preloader.mainthread_recompile\":62,\"telemetry.discarded.child_events\":0,\"telemetry.discarded.keyed_scalar_actions\":0},\"keyedScalars\":{\"telemetry.event_counts\":{\"security.ui.certerror#load#aboutcerterror\":1}}},\"extension\":{\"histograms\":{\"CYCLE_COLLECTOR_MAX_PAUSE\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":1,\"range\":[1,10000],\"values\":{\"0\":19,\"1\":1,\"2\":0}},\"GC_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":19,\"range\":[1,10000],\"values\":{\"0\":0,\"1\":1,\"2\":1,\"3\":1,\"4\":2,\"5\":1,\"6\":0}},\"GC_BUDGET_MS_2\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":799,\"range\":[1,200],\"values\":{\"4\":0,\"5\":3,\"46\":16,\"50\":0}},\"GC_MAX_PAUSE_MS_2\":{\"bucket_count\":50,\"histogram_type\""
		":0,\"sum\":16,\"range\":[1,10000],\"values\":{\"0\":0,\"1\":1,\"2\":2,\"3\":2,\"5\":1,\"6\":0}},\"GC_PREPARE_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":0,\"range\":[1,1000],\"values\":{\"0\":6,\"1\":0}},\"GC_MARK_ROOTS_US\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":1994,\"range\":[1,150000],\"values\":{\"104\":0,\"132\":1,\"167\":1,\"211\":1,\"267\":2,\"683\":1,\"863\":0}},\"GC_MARK_GRAY_MS_2\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":0,\"range\":[1,10000],\"values\":{\"0\":6,\"1\":0}},\"GC_MARK_WEAK_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":0,\"range\":[1,10000],\"values\":{\"0\":6,\"1\":0}},\"GC_PRETENURE_COUNT_2\":{\"bucket_count\":20,\"histogram_type\":0,\"sum\":0,\"range\":[1,100],\"values\":{\"0\":19,\"1\":0}},\"GC_TENURED_SURVIVAL_RATE\":{\"bucket_count\":50,\"histogram_type\":1,\"sum\":551,\"range\":[1,100],\"values\":{\"73\":0,\"75\":1,\"86\":1,\"92\":1,\"98\":2,\"100\":1}},\"GC_TIME_BETWEEN_S\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":364,\"range"
		"\":[1,120],\"values\":{\"0\":1,\"4\":1,\"10\":1,\"57\":2,\"120\":1}},\"GC_TIME_BETWEEN_SLICES_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":382,\"range\":[1,2000],\"values\":{\"0\":1,\"15\":1,\"25\":4,\"29\":6,\"33\":2,\"38\":0}},\"GC_SLICE_COUNT\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":19,\"range\":[1,200],\"values\":{\"2\":0,\"3\":2,\"4\":2,\"5\":1,\"6\":0}},\"GC_EFFECTIVENESS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":266,\"range\":[1,50000],\"values\":{\"0\":1,\"1\":1,\"10\":1,\"14\":1,\"41\":1,\"192\":1,\"211\":0}},\"GHOST_WINDOWS\":{\"bucket_count\":32,\"histogram_type\":0,\"sum\":0,\"range\":[1,128],\"values\":{\"0\":1,\"1\":0}},\"SCRIPT_PRELOADER_REQUESTS\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":38,\"range\":[1,50],\"values\":{\"0\":21,\"2\":19,\"3\":0}},\"SCRIPT_PRELOADER_WAIT_TIME\":{\"bucket_count\":20,\"histogram_type\":0,\"sum\":0,\"range\":[1,10000],\"values\":{\"0\":7,\"1\":0}},\"MASTER_PASSWORD_ENABLED\":{\"bucket_count\":3,\"histogram_type\":3,\"sum"
		"\":0,\"range\":[1,2],\"values\":{\"0\":1,\"1\":0}},\"CONTENT_DOCUMENTS_DESTROYED\":{\"bucket_count\":3,\"histogram_type\":4,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":4,\"1\":0}},\"CONTENT_PAINT_TIME\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":1,\"range\":[1,1000],\"values\":{\"0\":19,\"1\":1,\"2\":0}},\"TIME_TO_DOM_LOADING_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":69,\"range\":[1,50000],\"values\":{\"9\":0,\"10\":1,\"17\":1,\"19\":1,\"21\":1,\"23\":0}},\"TIME_TO_DOM_INTERACTIVE_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":807,\"range\":[1,50000],\"values\":{\"144\":0,\"158\":2,\"211\":1,\"232\":1,\"255\":0}},\"TIME_TO_DOM_CONTENT_LOADED_START_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":847,\"range\":[1,50000],\"values\":{\"158\":0,\"174\":2,\"232\":2,\"255\":0}},\"TIME_TO_DOM_CONTENT_LOADED_END_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":851,\"range\":[1,50000],\"values\":{\"158\":0,\"174\":2,\"232\":2,\"255\":0}},\"TIME_TO_DOM_COMPLETE_MS\":{\"buck"
		"et_count\":100,\"histogram_type\":0,\"sum\":872,\"range\":[1,50000],\"values\":{\"158\":0,\"174\":2,\"232\":2,\"255\":0}},\"TIME_TO_LOAD_EVENT_START_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":872,\"range\":[1,50000],\"values\":{\"158\":0,\"174\":2,\"232\":2,\"255\":0}},\"TIME_TO_LOAD_EVENT_END_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":872,\"range\":[1,50000],\"values\":{\"158\":0,\"174\":2,\"232\":2,\"255\":0}},\"REL_PRELOAD_MISS_RATIO\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":18,\"1\":0}}},\"keyedHistograms\":{},\"scalars\":{\"telemetry.discarded.accumulations\":0,\"telemetry.discarded.scalar_actions\":0,\"telemetry.discarded.keyed_accumulations\":0,\"networking.http3_enabled\":false,\"script.preloader.mainthread_recompile\":7,\"telemetry.discarded.child_events\":0,\"telemetry.discarded.keyed_scalar_actions\":0},\"keyedScalars\":{}},\"dynamic\":{\"scalars\":{},\"keyedScalars\":{}},\"gpu\":{\"histograms\":{\"CHECKERBOARD_POTENTIAL_DUR"
		"ATION\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":15582,\"range\":[1,1000000],\"values\":{\"12\":0,\"16\":1,\"86\":1,\"113\":6,\"149\":20,\"196\":34,\"258\":7,\"340\":5,\"448\":0}},\"COMPOSITE_TIME\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":52775,\"range\":[1,1000],\"values\":{\"0\":56621,\"1\":9189,\"2\":6205,\"3\":3111,\"4\":1391,\"5\":1036,\"6\":643,\"7\":292,\"8\":154,\"9\":80,\"10\":43,\"11\":24,\"12\":32,\"14\":18,\"16\":9,\"18\":6,\"20\":12,\"23\":6,\"26\":3,\"29\":2,\"33\":1,\"37\":2,\"42\":3,\"47\":2,\"53\":1,\"67\":1,\"84\":2,\"95\":1,\"152\":1,\"171\":1,\"192\":0}},\"COMPOSITE_SWAP_TIME\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":66029,\"range\":[1,1000],\"values\":{\"0\":2486,\"1\":1782,\"2\":10312,\"3\":4068,\"4\":1774,\"5\":869,\"6\":484,\"7\":349,\"8\":235,\"9\":232,\"10\":141,\"11\":128,\"12\":155,\"14\":155,\"16\":54,\"18\":36,\"20\":16,\"23\":11,\"26\":6,\"29\":2,\"33\":3,\"37\":2,\"47\":1,\"53\":2,\"60\":3,\"67\":1,\"75\":2,\"84\":1,\"95\":2,\"107\":1,\"120\":1,\""
		"135\":0}},\"GPU_PROCESS_INITIALIZATION_TIME_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":650,\"range\":[1,64000],\"values\":{\"551\":0,\"608\":1,\"671\":0}},\"KEYPRESS_PRESENT_LATENCY\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":5675,\"range\":[1,200000],\"values\":{\"5\":0,\"6\":2,\"13\":8,\"17\":8,\"22\":22,\"28\":31,\"36\":50,\"46\":23,\"58\":4,\"94\":2,\"244\":1,\"310\":0}},\"MOUSEUP_FOLLOWED_BY_CLICK_PRESENT_LATENCY\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":4992,\"range\":[1,200000],\"values\":{\"8\":0,\"10\":1,\"22\":3,\"28\":9,\"36\":23,\"46\":8,\"58\":4,\"151\":1,\"192\":1,\"310\":2,\"1660\":1,\"2109\":0}},\"SCROLL_PRESENT_LATENCY\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":6893,\"range\":[1,20000],\"values\":{\"2\":0,\"3\":1,\"5\":1,\"9\":2,\"10\":2,\"11\":1,\"14\":1,\"15\":2,\"17\":6,\"19\":3,\"21\":6,\"23\":6,\"25\":7,\"27\":10,\"29\":19,\"32\":26,\"35\":27,\"38\":24,\"41\":27,\"45\":21,\"49\":9,\"53\":0}},\"CONTENT_FULL_PAINT_TIME\":{\"bucket_count\":50,\"his"
		"togram_type\":0,\"sum\":17605,\"range\":[1,1000],\"values\":{\"0\":67,\"1\":346,\"2\":773,\"3\":1117,\"4\":724,\"5\":653,\"6\":286,\"7\":187,\"8\":120,\"9\":80,\"10\":32,\"11\":14,\"12\":14,\"14\":11,\"16\":6,\"18\":3,\"20\":3,\"23\":3,\"29\":4,\"33\":1,\"37\":1,\"42\":1,\"75\":1,\"84\":1,\"95\":0}},\"CONTENT_FRAME_TIME\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":512336,\"range\":[1,5000],\"values\":{\"11\":0,\"13\":33,\"15\":40,\"18\":17,\"21\":21,\"25\":17,\"29\":35,\"34\":23,\"40\":24,\"47\":20,\"55\":33,\"64\":32,\"75\":69,\"88\":359,\"103\":2002,\"120\":1451,\"140\":180,\"164\":40,\"192\":20,\"224\":13,\"262\":4,\"306\":5,\"357\":1,\"417\":4,\"569\":4,\"1059\":2,\"1237\":0}},\"CONTENT_FRAME_TIME_VSYNC\":{\"bucket_count\":100,\"histogram_type\":1,\"sum\":565286,\"range\":[8,792],\"values\":{\"0\":0,\"8\":2,\"16\":55,\"24\":41,\"32\":41,\"40\":23,\"48\":16,\"56\":5,\"64\":11,\"72\":1,\"80\":4,\"88\":4,\"96\":6,\"104\":278,\"112\":661,\"120\":1356,\"128\":700,\"136\":721,\"144\":215,\"152\":78,\"1"
		"60\":30,\"168\":10,\"176\":13,\"184\":16,\"192\":3,\"200\":3,\"208\":7,\"216\":10,\"224\":9,\"232\":12,\"240\":11,\"248\":14,\"256\":7,\"264\":6,\"272\":2,\"280\":2,\"288\":2,\"304\":1,\"312\":2,\"328\":4,\"336\":3,\"344\":1,\"352\":1,\"368\":1,\"376\":1,\"400\":1,\"432\":2,\"456\":1,\"464\":1,\"480\":1,\"488\":1,\"496\":1,\"576\":2,\"600\":1,\"696\":1,\"752\":1,\"792\":3}},\"CONTENT_FRAME_TIME_WITH_SVG\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":460974,\"range\":[1,5000],\"values\":{\"13\":0,\"15\":20,\"18\":23,\"21\":11,\"25\":9,\"29\":14,\"34\":27,\"40\":23,\"47\":14,\"55\":7,\"64\":12,\"75\":4,\"88\":7,\"103\":627,\"120\":2212,\"140\":481,\"164\":41,\"192\":15,\"224\":34,\"262\":9,\"306\":5,\"357\":2,\"417\":2,\"487\":2,\"569\":1,\"665\":1,\"1059\":2,\"1237\":0}}},\"keyedHistograms\":{},\"scalars\":{\"telemetry.discarded.accumulations\":0,\"telemetry.discarded.keyed_accumulations\":0,\"gfx.canvas.remote.activated\":1,\"telemetry.discarded.scalar_actions\":0,\"telemetry.discarded.child_events\":0"
		",\"telemetry.discarded.keyed_scalar_actions\":0},\"keyedScalars\":{}},\"socket\":{\"histograms\":{},\"keyedHistograms\":{},\"scalars\":{},\"keyedScalars\":{}}},\"histograms\":{\"A11Y_INSTANTIATED_FLAG\":{\"bucket_count\":3,\"histogram_type\":3,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":1,\"1\":0}},\"CHILD_PROCESS_LAUNCH_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":7237,\"range\":[1,64000],\"values\":{\"13\":0,\"14\":1,\"138\":1,\"168\":1,\"225\":1,\"248\":2,\"303\":2,\"335\":4,\"409\":1,\"452\":1,\"608\":1,\"741\":1,\"818\":2,\"903\":0}},\"CONTENT_PROCESS_LAUNCH_MAINTHREAD_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":19,\"range\":[1,64000],\"values\":{\"0\":0,\"1\":1,\"2\":9,\"3\":0}},\"CONTENT_PROCESS_LAUNCH_TOTAL_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":4699,\"range\":[1,64000],\"values\":{\"248\":0,\"274\":1,\"303\":2,\"335\":2,\"370\":1,\"409\":1,\"452\":1,\"818\":1,\"903\":1,\"997\":0}},\"CONTENT_PROCESS_SYNC_LAUNCH_MS\":{\"bucket_count\":100,\"histogram_type\":0,"
		"\"sum\":1186,\"range\":[1,64000],\"values\":{\"152\":0,\"168\":1,\"204\":1,\"741\":1,\"818\":0}},\"CONTENT_PROCESS_LAUNCH_IS_SYNC\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":3,\"range\":[1,2],\"values\":{\"0\":10,\"1\":3,\"2\":0}},\"CONTENT_PROCESS_COUNT\":{\"bucket_count\":100,\"histogram_type\":1,\"sum\":36,\"range\":[1,500],\"values\":{\"0\":0,\"1\":4,\"6\":3,\"11\":0}},\"CONTENT_PROCESS_MAX\":{\"bucket_count\":100,\"histogram_type\":1,\"sum\":60,\"range\":[1,500],\"values\":{\"0\":0,\"1\":5,\"6\":5,\"11\":0}},\"CYCLE_COLLECTOR_MAX_PAUSE\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":145,\"range\":[1,10000],\"values\":{\"0\":1,\"1\":29,\"2\":20,\"3\":8,\"4\":4,\"8\":1,\"10\":1,\"17\":1,\"20\":0}},\"GC_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":856,\"range\":[1,10000],\"values\":{\"5\":0,\"6\":1,\"17\":4,\"20\":4,\"24\":5,\"29\":5,\"34\":5,\"40\":3,\"48\":2,\"57\":0}},\"GC_BUDGET_MS_2\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":3151,\"range\":[1,200],\"values\":{\"4\":0,\"5"
		"\":31,\"6\":5,\"7\":3,\"8\":4,\"10\":10,\"11\":5,\"12\":4,\"13\":5,\"14\":6,\"15\":27,\"46\":44,\"50\":0}},\"GC_ANIMATION_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":147,\"range\":[1,10000],\"values\":{\"0\":10,\"1\":1,\"3\":2,\"5\":1,\"6\":2,\"7\":2,\"10\":4,\"12\":3,\"14\":2,\"17\":0}},\"GC_MAX_PAUSE_MS_2\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":547,\"range\":[1,10000],\"values\":{\"5\":0,\"6\":1,\"10\":1,\"12\":2,\"14\":11,\"17\":5,\"20\":3,\"24\":3,\"29\":1,\"34\":1,\"40\":1,\"48\":0}},\"GC_PREPARE_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":20,\"range\":[1,1000],\"values\":{\"0\":13,\"1\":13,\"2\":2,\"3\":1,\"4\":0}},\"GC_MARK_ROOTS_US\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":46804,\"range\":[1,150000],\"values\":{\"167\":0,\"211\":1,\"267\":6,\"427\":1,\"540\":3,\"683\":4,\"1379\":4,\"1743\":4,\"2204\":1,\"2786\":2,\"3522\":2,\"8999\":1,\"11377\":0}},\"GC_MARK_GRAY_MS_2\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":21,\"range\":[1,10000],\"values\":{\""
		"0\":19,\"1\":7,\"2\":1,\"3\":1,\"8\":1,\"10\":0}},\"GC_MARK_WEAK_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":0,\"range\":[1,10000],\"values\":{\"0\":29,\"1\":0}},\"GC_PRETENURE_COUNT_2\":{\"bucket_count\":20,\"histogram_type\":0,\"sum\":0,\"range\":[1,100],\"values\":{\"0\":239,\"1\":0}},\"GC_TENURED_SURVIVAL_RATE\":{\"bucket_count\":50,\"histogram_type\":1,\"sum\":2798,\"range\":[1,100],\"values\":{\"65\":0,\"67\":1,\"86\":1,\"88\":1,\"92\":1,\"94\":2,\"96\":3,\"98\":17,\"100\":3}},\"GC_TIME_BETWEEN_S\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":2128,\"range\":[1,120],\"values\":{\"0\":1,\"3\":1,\"4\":13,\"5\":1,\"17\":1,\"18\":1,\"29\":1,\"54\":1,\"57\":7,\"78\":1,\"120\":1}},\"GC_TIME_BETWEEN_SLICES_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":2894,\"range\":[1,2000],\"values\":{\"0\":15,\"1\":19,\"2\":5,\"3\":2,\"4\":5,\"5\":1,\"9\":1,\"11\":1,\"13\":1,\"15\":9,\"17\":5,\"19\":2,\"22\":3,\"25\":8,\"29\":22,\"33\":5,\"38\":2,\"57\":1,\"65\":1,\"99\":3,\"113\":1,\"130\":1,\"149"
		"\":1,\"225\":1,\"258\":1,\"296\":0}},\"GC_SLICE_COUNT\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":144,\"range\":[1,200],\"values\":{\"2\":0,\"3\":3,\"4\":10,\"5\":3,\"6\":5,\"7\":6,\"8\":1,\"9\":0}},\"GC_EFFECTIVENESS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":497,\"range\":[1,50000],\"values\":{\"0\":12,\"1\":5,\"2\":1,\"3\":1,\"4\":1,\"5\":1,\"8\":2,\"12\":1,\"21\":1,\"28\":1,\"31\":1,\"61\":1,\"281\":1,\"309\":0}},\"GPU_PROCESS_LAUNCH_TIME_MS_2\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":1123,\"range\":[1,64000],\"values\":{\"997\":0,\"1101\":1,\"1216\":0}},\"MEMORY_TOTAL\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":859272,\"range\":[32768,16777216],\"values\":{\"392310\":0,\"418095\":2,\"445575\":0}},\"GHOST_WINDOWS\":{\"bucket_count\":32,\"histogram_type\":0,\"sum\":0,\"range\":[1,128],\"values\":{\"0\":2,\"1\":0}},\"SHUTDOWN_OK\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"HTTP_KBREAD_PER_CONN2\":{\"bucke"
		"t_count\":50,\"histogram_type\":0,\"sum\":6470,\"range\":[1,100000],\"values\":{\"0\":280,\"1\":27,\"2\":9,\"3\":5,\"4\":9,\"5\":6,\"6\":4,\"8\":6,\"10\":8,\"13\":6,\"16\":9,\"20\":14,\"25\":9,\"31\":11,\"39\":12,\"49\":6,\"61\":11,\"76\":5,\"95\":5,\"119\":4,\"186\":1,\"233\":1,\"365\":1,\"457\":2,\"572\":0}},\"HTTP_TRANSACTION_IS_SSL\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1505,\"range\":[1,2],\"values\":{\"0\":233,\"1\":1505,\"2\":0}},\"HTTP_PAGELOAD_IS_SSL\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":27,\"range\":[1,2],\"values\":{\"0\":2,\"1\":27,\"2\":0}},\"HTTP_SCHEME_UPGRADE_TYPE\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":258,\"range\":[1,50],\"values\":{\"0\":0,\"1\":243,\"3\":5,\"4\":0}},\"TLS_EARLY_DATA_NEGOTIATED\":{\"bucket_count\":4,\"histogram_type\":1,\"sum\":0,\"range\":[1,3],\"values\":{\"0\":555,\"1\":0}},\"SSL_HANDSHAKE_VERSION\":{\"bucket_count\":17,\"histogram_type\":1,\"sum\":2348,\"range\":[1,16],\"values\":{\"2\":0,\"3\":12,\"4\":578,\"5\":0}},\"SSL_HANDSHA"
		"KE_RESULT\":{\"bucket_count\":673,\"histogram_type\":1,\"sum\":1649,\"range\":[1,672],\"values\":{\"0\":479,\"12\":8,\"514\":2,\"525\":1,\"526\":0}},\"SSL_TIME_UNTIL_READY\":{\"bucket_count\":200,\"histogram_type\":0,\"sum\":2001038,\"range\":[1,60000],\"values\":{\"17\":0,\"18\":1,\"19\":3,\"20\":1,\"21\":2,\"22\":1,\"23\":1,\"24\":6,\"25\":5,\"26\":2,\"27\":3,\"28\":7,\"29\":6,\"30\":5,\"31\":9,\"32\":4,\"33\":15,\"35\":9,\"37\":13,\"39\":10,\"41\":12,\"43\":9,\"45\":10,\"47\":5,\"49\":5,\"51\":2,\"53\":4,\"55\":8,\"58\":4,\"61\":4,\"64\":5,\"67\":6,\"70\":4,\"73\":2,\"76\":7,\"80\":3,\"84\":3,\"88\":4,\"92\":3,\"96\":4,\"100\":2,\"105\":2,\"110\":3,\"115\":2,\"120\":3,\"126\":4,\"132\":2,\"138\":4,\"144\":2,\"151\":3,\"158\":1,\"165\":7,\"173\":2,\"181\":5,\"189\":4,\"198\":2,\"207\":1,\"217\":4,\"227\":3,\"237\":4,\"248\":5,\"259\":4,\"271\":1,\"283\":3,\"296\":3,\"310\":6,\"324\":6,\"339\":5,\"355\":6,\"371\":5,\"388\":7,\"406\":4,\"425\":4,\"445\":3,\"465\":3,\"486\":2,\"531\":1,\"581\":1,\"608\":1,\""
		"636\":1,\"728\":3,\"797\":1,\"834\":1,\"872\":3,\"912\":1,\"954\":2,\"1044\":4,\"1092\":2,\"1195\":2,\"1250\":5,\"1308\":3,\"1368\":1,\"1431\":2,\"1497\":7,\"1566\":3,\"1638\":1,\"2051\":2,\"2244\":1,\"2810\":1,\"4407\":4,\"4610\":49,\"4822\":22,\"5044\":17,\"5276\":4,\"5519\":7,\"5773\":3,\"6039\":5,\"6317\":6,\"6608\":2,\"6912\":2,\"9055\":15,\"9472\":12,\"9908\":3,\"10364\":13,\"10841\":2,\"11340\":1,\"13577\":4,\"14202\":3,\"14856\":4,\"15540\":5,\"17005\":1,\"17788\":1,\"18607\":5,\"19464\":7,\"22280\":1,\"24379\":4,\"29191\":1,\"33413\":3,\"50110\":1,\"52418\":0}},\"SSL_RESUMED_SESSION\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":371,\"range\":[1,2],\"values\":{\"0\":219,\"1\":371,\"2\":0}},\"HTTP_CHANNEL_DISPOSITION\":{\"bucket_count\":17,\"histogram_type\":1,\"sum\":19920,\"range\":[1,16],\"values\":{\"0\":4,\"2\":233,\"3\":6,\"8\":122,\"9\":423,\"10\":1452,\"11\":11,\"12\":1,\"13\":0}},\"HTTP_CHANNEL_ONSTART_SUCCESS\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2215,\"range\":[1,2],\"val"
		"ues\":{\"0\":91,\"1\":2215,\"2\":0}},\"TRANSACTION_WAIT_TIME_HTTP3\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":5128,\"range\":[1,5000],\"values\":{\"0\":38,\"1\":3,\"44\":1,\"5000\":1}},\"TRANSACTION_WAIT_TIME_HTTP2_SUP_HTTP3\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":5127,\"range\":[1,5000],\"values\":{\"0\":36,\"1\":2,\"44\":1,\"5000\":1}},\"HTTP3_0RTT_STATE\":{\"bucket_count\":6,\"histogram_type\":1,\"sum\":0,\"range\":[1,5],\"values\":{\"0\":41,\"1\":0}},\"DNS_LOOKUP_METHOD2\":{\"bucket_count\":17,\"histogram_type\":1,\"sum\":5981,\"range\":[1,16],\"values\":{\"0\":0,\"1\":2555,\"2\":104,\"3\":9,\"6\":526,\"7\":5,\"8\":0}},\"DNS_LOOKUP_TIME\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":2111,\"range\":[1,60000],\"values\":{\"0\":0,\"1\":2,\"2\":2,\"3\":1,\"4\":7,\"5\":4,\"6\":18,\"7\":28,\"9\":22,\"11\":19,\"14\":15,\"17\":17,\"21\":9,\"26\":4,\"32\":6,\"40\":1,\"50\":1,\"146\":1,\"181\":0}},\"DNS_NATIVE_LOOKUP_TIME\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":31425,\"rang"
		"e\":[1,60000],\"values\":{\"0\":4,\"1\":96,\"2\":101,\"3\":88,\"4\":66,\"5\":44,\"6\":91,\"7\":142,\"9\":92,\"11\":120,\"14\":71,\"17\":62,\"21\":43,\"26\":20,\"32\":20,\"40\":13,\"50\":7,\"62\":7,\"77\":1,\"95\":2,\"118\":3,\"146\":1,\"181\":1,\"345\":2,\"428\":1,\"531\":1,\"658\":2,\"4555\":2,\"5647\":1,\"7000\":0}},\"DNS_NATIVE_QUEUING\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":462,\"range\":[1,60000],\"values\":{\"0\":1094,\"1\":3,\"2\":1,\"3\":1,\"5\":1,\"6\":1,\"7\":3,\"9\":1,\"11\":3,\"14\":1,\"17\":3,\"21\":3,\"26\":2,\"32\":1,\"40\":3,\"50\":0}},\"DNS_FAILED_LOOKUP_TIME\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":2365,\"range\":[1,60000],\"values\":{\"0\":0,\"1\":7,\"2\":3,\"4\":1,\"6\":1,\"9\":1,\"17\":1,\"21\":1,\"1929\":1,\"2391\":0}},\"TAB_COUNT\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":5,\"range\":[1,1000],\"values\":{\"0\":0,\"1\":2,\"3\":1,\"4\":0}},\"LOADED_TAB_COUNT\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":5,\"range\":[1,1000],\"values\":{\"0\":0,\"1"
		"\":2,\"3\":1,\"4\":0}},\"STARTUP_CACHE_REQUESTS\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":381,\"range\":[1,50],\"values\":{\"0\":2,\"1\":137,\"2\":122,\"3\":0}},\"SCRIPT_PRELOADER_REQUESTS\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":529,\"range\":[1,50],\"values\":{\"0\":262,\"1\":19,\"2\":255,\"3\":0}},\"SCRIPT_PRELOADER_WAIT_TIME\":{\"bucket_count\":20,\"histogram_type\":0,\"sum\":0,\"range\":[1,10000],\"values\":{\"0\":1,\"1\":0}},\"NETWORK_ID_ONLINE\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":6,\"range\":[1,50],\"values\":{\"0\":0,\"1\":6,\"2\":0}},\"URLCLASSIFIER_LOOKUP_TIME_2\":{\"bucket_count\":30,\"histogram_type\":0,\"sum\":269,\"range\":[1,5000],\"values\":{\"0\":1668,\"1\":111,\"2\":12,\"3\":3,\"4\":4,\"9\":1,\"12\":1,\"16\":3,\"28\":1,\"37\":0}},\"URLCLASSIFIER_CL_CHECK_TIME\":{\"bucket_count\":10,\"histogram_type\":0,\"sum\":60,\"range\":[1,500],\"values\":{\"0\":1755,\"1\":41,\"2\":7,\"4\":1,\"9\":0}},\"URLCLASSIFIER_VLPS_FILELOAD_TIME\":{\"bucket_count\":10,\"histogr"
		"am_type\":0,\"sum\":150,\"range\":[1,1000],\"values\":{\"0\":21,\"1\":2,\"2\":3,\"5\":1,\"12\":1,\"29\":3,\"70\":0}},\"URLCLASSIFIER_VLPS_FALLOCATE_TIME\":{\"bucket_count\":10,\"histogram_type\":0,\"sum\":0,\"range\":[1,1000],\"values\":{\"0\":8,\"1\":0}},\"URLCLASSIFIER_VLPS_CONSTRUCT_TIME\":{\"bucket_count\":15,\"histogram_type\":0,\"sum\":100,\"range\":[1,5000],\"values\":{\"0\":4,\"2\":2,\"29\":2,\"55\":0}},\"URLCLASSIFIER_VLPS_METADATA_CORRUPT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":10,\"1\":0}},\"PLACES_AUTOCOMPLETE_6_FIRST_RESULTS_TIME_MS\":{\"bucket_count\":30,\"histogram_type\":0,\"sum\":2819,\"range\":[50,1000],\"values\":{\"50\":0,\"56\":1,\"69\":1,\"86\":1,\"96\":1,\"107\":1,\"119\":7,\"132\":2,\"182\":1,\"474\":1,\"527\":1,\"586\":0}},\"UPDATE_CHECK_NO_UPDATE_NOTIFY\":{\"bucket_count\":3,\"histogram_type\":4,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":1,\"1\":0}},\"UPDATE_LAST_NOTIFY_INTERVAL_DAYS_NOTIFY\":{\"bucket_count\":30,\"histogram_type\":0,"
		"\"sum\":1,\"range\":[1,180],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"UPDATE_PING_COUNT_NOTIFY\":{\"bucket_count\":3,\"histogram_type\":4,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":1,\"1\":0}},\"UPDATE_SERVICE_INSTALLED_NOTIFY\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"UPDATE_NOT_PREF_UPDATE_SERVICE_ENABLED_NOTIFY\":{\"bucket_count\":3,\"histogram_type\":4,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":1,\"1\":0}},\"UPDATE_CAN_USE_BITS_NOTIFY\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":1,\"1\":0}},\"FX_TAB_CLOSE_TIME_ANIM_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":120,\"range\":[1,10000],\"values\":{\"96\":0,\"114\":1,\"135\":0}},\"FX_TAB_SWITCH_UPDATE_MS\":{\"bucket_count\":20,\"histogram_type\":0,\"sum\":145,\"range\":[1,1000],\"values\":{\"3\":0,\"4\":11,\"6\":11,\"9\":2,\"13\":0}},\"FX_TAB_SWITCH_TOTAL_E10S_MS\":{\"bucket_count\":20,\"histogram_type\":0,\"sum\":36,\"range\":[1,1000],\"v"
		"alues\":{\"0\":0,\"1\":15,\"2\":6,\"3\":3,\"4\":0}},\"FX_TAB_SWITCH_COMPOSITE_E10S_MS\":{\"bucket_count\":20,\"histogram_type\":0,\"sum\":774,\"range\":[1,1000],\"values\":{\"13\":0,\"19\":2,\"27\":7,\"39\":11,\"56\":0}},\"FX_NUMBER_OF_UNIQUE_SITE_ORIGINS_ALL_TABS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":4,\"range\":[1,100],\"values\":{\"0\":0,\"1\":1,\"3\":1,\"4\":0}},\"FX_NUMBER_OF_UNIQUE_SITE_ORIGINS_PER_DOCUMENT\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":13,\"range\":[1,100],\"values\":{\"0\":0,\"1\":11,\"2\":1,\"3\":0}},\"FX_NUMBER_OF_UNIQUE_SITE_ORIGINS_PER_LOADED_TABS_1\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":200,\"range\":[1,5000],\"values\":{\"75\":0,\"88\":2,\"103\":0}},\"FX_NUMBER_OF_UNIQUE_SITE_ORIGINS_PER_LOADED_TABS_2_4\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":100,\"range\":[1,5000],\"values\":{\"75\":0,\"88\":1,\"103\":0}},\"FX_PAGE_LOAD_MS_2\":{\"bucket_count\":200,\"histogram_type\":1,\"sum\":457134,\"range\":[1,10000],\"values\":{\"0\":0,\"1\":1,"
		"\"910\":1,\"1718\":1,\"2122\":1,\"2930\":1,\"3233\":1,\"3435\":1,\"8334\":1,\"10000\":10}},\"INPUT_EVENT_RESPONSE_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":403145,\"range\":[1,10000],\"values\":{\"0\":2093,\"1\":2304,\"2\":2605,\"3\":2645,\"4\":2709,\"5\":2681,\"6\":2682,\"7\":2615,\"8\":5547,\"10\":5642,\"12\":5727,\"14\":6452,\"17\":771,\"20\":649,\"24\":332,\"29\":48,\"34\":6,\"40\":4,\"48\":2,\"68\":2,\"81\":3,\"268\":5,\"318\":3,\"378\":3,\"533\":4,\"633\":2,\"1782\":1,\"2516\":3,\"2990\":0}},\"INPUT_EVENT_RESPONSE_COALESCED_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":157765,\"range\":[1,10000],\"values\":{\"0\":732,\"1\":206,\"2\":239,\"3\":205,\"4\":224,\"5\":223,\"6\":253,\"7\":260,\"8\":1926,\"10\":2649,\"12\":2725,\"14\":2200,\"17\":34,\"20\":198,\"24\":124,\"29\":95,\"34\":92,\"40\":64,\"48\":54,\"57\":16,\"68\":36,\"81\":20,\"96\":7,\"114\":11,\"135\":8,\"160\":3,\"190\":3,\"226\":4,\"268\":7,\"318\":1,\"378\":2,\"533\":2,\"633\":1,\"1782\":1,\"2516\":1,\"2990\":0}},\"FX_"
		"SESSION_RESTORE_STARTUP_INIT_SESSION_MS\":{\"bucket_count\":20,\"histogram_type\":0,\"sum\":0,\"range\":[1,30000],\"values\":{\"0\":1,\"1\":0}},\"FX_SESSION_RESTORE_STARTUP_ONLOAD_INITIAL_WINDOW_MS\":{\"bucket_count\":20,\"histogram_type\":0,\"sum\":58,\"range\":[1,30000],\"values\":{\"21\":0,\"37\":1,\"65\":0}},\"FX_URLBAR_SELECTED_RESULT_INDEX\":{\"bucket_count\":18,\"histogram_type\":1,\"sum\":0,\"range\":[1,17],\"values\":{\"0\":2,\"1\":0}},\"FX_URLBAR_SELECTED_RESULT_TYPE_2\":{\"bucket_count\":33,\"histogram_type\":1,\"sum\":8,\"range\":[1,32],\"values\":{\"3\":0,\"4\":2,\"5\":0}},\"FX_URLBAR_SELECTED_RESULT_METHOD\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":2,\"1\":0}},\"MS_MESSAGE_REQUEST_TIME_MS\":{\"bucket_count\":20,\"histogram_type\":0,\"sum\":54,\"range\":[1,2000],\"values\":{\"0\":10,\"1\":3,\"2\":9,\"3\":5,\"5\":3,\"7\":0}},\"SEARCH_SERVICE_INIT_MS\":{\"bucket_count\":15,\"histogram_type\":0,\"sum\":702,\"range\":[1,1000],\"values\":{\"345\":0,\"587"
		"\":1,\"1000\":0}},\"TOUCH_ENABLED_DEVICE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":1,\"1\":0}},\"BROWSER_IS_USER_DEFAULT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":1,\"1\":0}},\"BROWSER_IS_USER_DEFAULT_ERROR\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":1,\"1\":0}},\"BROWSER_SET_DEFAULT_DIALOG_PROMPT_RAWCOUNT\":{\"bucket_count\":15,\"histogram_type\":0,\"sum\":3,\"range\":[1,250],\"values\":{\"2\":0,\"3\":1,\"4\":0}},\"BROWSER_SET_DEFAULT_ALWAYS_CHECK\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":1,\"1\":0}},\"NETWORK_CACHE_V2_MISS_TIME_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":0,\"range\":[1,10000],\"values\":{\"0\":1589,\"1\":0}},\"NETWORK_CACHE_V2_HIT_TIME_MS\":{\"bucket_count\":50,\"histogram_type\":0,\"sum\":409,\"range\":[1,10000],\"values\":{\"0\":237,\"1\":92,\"2\":17,\"3\":5,\"4\":3,\"5\":3,\"6\":2,\"7\":18,\"8\":10,"
		"\"10\":2,\"12\":0}},\"SSL_CERT_VERIFICATION_ERRORS\":{\"bucket_count\":101,\"histogram_type\":1,\"sum\":336,\"range\":[1,100],\"values\":{\"41\":0,\"42\":8,\"43\":0}},\"CERT_VALIDATION_SUCCESS_BY_CA\":{\"bucket_count\":257,\"histogram_type\":1,\"sum\":1064,\"range\":[1,256],\"values\":{\"2\":0,\"3\":222,\"7\":30,\"11\":8,\"50\":2,\"51\":0}},\"CRLITE_RESULT\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":270,\"1\":0}},\"MASTER_PASSWORD_ENABLED\":{\"bucket_count\":3,\"histogram_type\":3,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":1,\"1\":0}},\"COOKIE_BEHAVIOR\":{\"bucket_count\":16,\"histogram_type\":1,\"sum\":4,\"range\":[1,15],\"values\":{\"3\":0,\"4\":1,\"5\":0}},\"TRACKING_PROTECTION_ENABLED\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":1,\"1\":0}},\"TRACKING_PROTECTION_PBM_DISABLED\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":0,\"range\":[1,2],\"values\":{\"0\":1,\"1\":0}},\"FINGERPRINTERS_BLOCKED_COUNT\":{\"bucket_co"
		"unt\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":47,\"1\":0}},\"CRYPTOMINERS_BLOCKED_COUNT\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":47,\"1\":0}},\"TRACKING_PROTECTION_SHIELD\":{\"bucket_count\":5,\"histogram_type\":1,\"sum\":10,\"range\":[1,4],\"values\":{\"0\":47,\"2\":5,\"3\":0}},\"PWMGR_PROMPT_REMEMBER_ACTION\":{\"bucket_count\":6,\"histogram_type\":1,\"sum\":2,\"range\":[1,5],\"values\":{\"0\":1,\"2\":1,\"3\":0}},\"CONTENT_DOCUMENTS_DESTROYED\":{\"bucket_count\":3,\"histogram_type\":4,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":4,\"1\":0}},\"TOP_LEVEL_CONTENT_DOCUMENTS_DESTROYED\":{\"bucket_count\":3,\"histogram_type\":4,\"sum\":26,\"range\":[1,2],\"values\":{\"0\":26,\"1\":0}},\"TIME_TO_FIRST_CONTENTFUL_PAINT_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":1932,\"range\":[1,100000],\"values\":{\"1701\":0,\"1888\":1,\"2096\":0}},\"WEBEXT_BACKGROUND_PAGE_LOAD_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":7012,\"ra"
		"nge\":[1,60000],\"values\":{\"1577\":0,\"1740\":4,\"1920\":0}},\"WEBEXT_EXTENSION_STARTUP_MS\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":9138,\"range\":[1,50000],\"values\":{\"309\":0,\"340\":1,\"550\":11,\"2316\":1,\"2549\":0}},\"USE_COUNTER2_CONSOLE_WARN_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_DOCUMENTOPEN_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_HTMLDOCUMENT_WEBKITVISIBILITYSTATE_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":7,\"range\":[1,2],\"values\":{\"0\":0,\"1\":7,\"2\":0}},\"USE_COUNTER2_WINDOW_CHROME_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_WINDOW_PERFORMANCELONGTASKTIMING_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":5,\"range\":[1,2],\"values\":{\"0\":0,\"1\":5,\"2\":0}},\"USE_COUNTER2_WINDOW_TOUCHLIST_PAGE\":{"
		"\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_WINDOW_VISUALVIEWPORT_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":6,\"range\":[1,2],\"values\":{\"0\":0,\"1\":6,\"2\":0}},\"USE_COUNTER2_WINDOW_WEBKITREQUESTFILESYSTEM_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":6,\"range\":[1,2],\"values\":{\"0\":0,\"1\":6,\"2\":0}},\"USE_COUNTER2_DEPRECATED_FormSubmissionUntrustedEvent_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_AlignContent_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_AlignItems_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":9,\"range\":[1,2],\"values\":{\"0\":0,\"1\":9,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_AlignSelf_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":8,\"range\":[1,2],\"values\":{\"0\":0,\"1\":8,"
		"\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BackfaceVisibility_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":5,\"range\":[1,2],\"values\":{\"0\":0,\"1\":5,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderCollapse_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":5,\"range\":[1,2],\"values\":{\"0\":0,\"1\":5,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BoxSizing_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":11,\"range\":[1,2],\"values\":{\"0\":0,\"1\":11,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BreakInside_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Clear_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":11,\"range\":[1,2],\"values\":{\"0\":0,\"1\":11,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_ColorInterpolationFilters_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":3,\"range\":[1,2],\"values\":{\"0\":0,\"1\":3,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_ColumnCount_PAGE\":{\"bucket_count\":3,\"histogram_t"
		"ype\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Direction_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Display_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":11,\"range\":[1,2],\"values\":{\"0\":0,\"1\":11,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_FlexDirection_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":8,\"range\":[1,2],\"values\":{\"0\":0,\"1\":8,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_FlexWrap_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":8,\"range\":[1,2],\"values\":{\"0\":0,\"1\":8,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Float_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":11,\"range\":[1,2],\"values\":{\"0\":0,\"1\":11,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_FontSizeAdjust_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_FontStyle_PAGE\""
		":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":11,\"range\":[1,2],\"values\":{\"0\":0,\"1\":11,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_FontVariantNumeric_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_FontWeight_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":11,\"range\":[1,2],\"values\":{\"0\":0,\"1\":11,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Hyphens_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":7,\"range\":[1,2],\"values\":{\"0\":0,\"1\":7,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_ImageRendering_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":3,\"range\":[1,2],\"values\":{\"0\":0,\"1\":3,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_JustifyContent_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":9,\"range\":[1,2],\"values\":{\"0\":0,\"1\":9,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_JustifySelf_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\""
		"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_LineBreak_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_ListStylePosition_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":3,\"range\":[1,2],\"values\":{\"0\":0,\"1\":3,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_MixBlendMode_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_MozForceBrokenImageIcon_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_MozUserFocus_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":5,\"range\":[1,2],\"values\":{\"0\":0,\"1\":5,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_MozUserModify_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_ObjectFit_PAGE\":{\"bucket_count\":3,\"histogram_type"
		"\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_OutlineStyle_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":3,\"range\":[1,2],\"values\":{\"0\":0,\"1\":3,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_OverflowAnchor_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_OverflowWrap_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":6,\"range\":[1,2],\"values\":{\"0\":0,\"1\":6,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_PointerEvents_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":8,\"range\":[1,2],\"values\":{\"0\":0,\"1\":8,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Position_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":11,\"range\":[1,2],\"values\":{\"0\":0,\"1\":11,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Resize_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":9,\"range\":[1,2],\"values\":{\"0\":0,\"1\":9,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_ScrollSnapAl"
		"ign_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_ScrollSnapType_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_ScrollbarWidth_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_StrokeLinecap_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":6,\"range\":[1,2],\"values\":{\"0\":0,\"1\":6,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_StrokeLinejoin_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":5,\"range\":[1,2],\"values\":{\"0\":0,\"1\":5,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_TableLayout_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":10,\"range\":[1,2],\"values\":{\"0\":0,\"1\":10,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_TextAlign_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":11,\"range\":[1,2],\"values\":{\"0\":0,"
		"\"1\":11,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_TextRendering_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_TextTransform_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":11,\"range\":[1,2],\"values\":{\"0\":0,\"1\":11,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_TouchAction_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":7,\"range\":[1,2],\"values\":{\"0\":0,\"1\":7,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_TransformBox_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_UserSelect_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":11,\"range\":[1,2],\"values\":{\"0\":0,\"1\":11,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_VectorEffect_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Visibility_PAGE\":{\"bucket_count\":3,\"histogram_type"
		"\":2,\"sum\":11,\"range\":[1,2],\"values\":{\"0\":0,\"1\":11,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitLineClamp_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":6,\"range\":[1,2],\"values\":{\"0\":0,\"1\":6,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WhiteSpace_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":11,\"range\":[1,2],\"values\":{\"0\":0,\"1\":11,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WordBreak_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":5,\"range\":[1,2],\"values\":{\"0\":0,\"1\":5,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WritingMode_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_ZIndex_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":11,\"range\":[1,2],\"values\":{\"0\":0,\"1\":11,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Appearance_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":3,\"range\":[1,2],\"values\":{\"0\":0,\"1\":3,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_ClipRule_PAG"
		"E\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":7,\"range\":[1,2],\"values\":{\"0\":0,\"1\":7,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_FillRule_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":8,\"range\":[1,2],\"values\":{\"0\":0,\"1\":8,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_FillOpacity_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_FillOpacity_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_StrokeOpacity_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Order_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_FlexGrow_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":8,\"range\":[1,2],\"values\":{\"0\":0,\"1\":8,\"2\":0}},\"USE_C"
		"OUNTER2_CSS_PROPERTY_FlexShrink_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":8,\"range\":[1,2],\"values\":{\"0\":0,\"1\":8,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_StrokeMiterlimit_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":5,\"range\":[1,2],\"values\":{\"0\":0,\"1\":5,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_OverflowX_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":9,\"range\":[1,2],\"values\":{\"0\":0,\"1\":9,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_OverflowY_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":11,\"range\":[1,2],\"values\":{\"0\":0,\"1\":11,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_FloodOpacity_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":3,\"range\":[1,2],\"values\":{\"0\":0,\"1\":3,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Opacity_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":11,\"range\":[1,2],\"values\":{\"0\":0,\"1\":11,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_StopOpacity_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":3,\"range\":[1,2],\""
		"values\":{\"0\":0,\"1\":3,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderBottomStyle_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":5,\"range\":[1,2],\"values\":{\"0\":0,\"1\":5,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderRightStyle_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":3,\"range\":[1,2],\"values\":{\"0\":0,\"1\":3,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderTopStyle_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":3,\"range\":[1,2],\"values\":{\"0\":0,\"1\":3,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_AnimationDelay_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":8,\"range\":[1,2],\"values\":{\"0\":0,\"1\":8,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_AnimationDirection_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":5,\"range\":[1,2],\"values\":{\"0\":0,\"1\":5,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_AnimationDuration_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":11,\"range\":[1,2],\"values\":{\"0\":0,\"1\":11,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_AnimationFillM"
		"ode_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":10,\"range\":[1,2],\"values\":{\"0\":0,\"1\":10,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_AnimationIterationCount_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":8,\"range\":[1,2],\"values\":{\"0\":0,\"1\":8,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_AnimationName_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":11,\"range\":[1,2],\"values\":{\"0\":0,\"1\":11,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_AnimationTimingFunction_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":7,\"range\":[1,2],\"values\":{\"0\":0,\"1\":7,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BackgroundClip_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":7,\"range\":[1,2],\"values\":{\"0\":0,\"1\":7,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BackgroundImage_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":11,\"range\":[1,2],\"values\":{\"0\":0,\"1\":11,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BackgroundOrigin_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"ra"
		"nge\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BackgroundPositionX_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":7,\"range\":[1,2],\"values\":{\"0\":0,\"1\":7,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BackgroundPositionY_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":5,\"range\":[1,2],\"values\":{\"0\":0,\"1\":5,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BackgroundRepeat_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":11,\"range\":[1,2],\"values\":{\"0\":0,\"1\":11,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BackgroundSize_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":11,\"range\":[1,2],\"values\":{\"0\":0,\"1\":11,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderImageSlice_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderSpacing_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":10,\"range\":[1,2],\"values\":{\"0\":0,\"1\":10,\"2\":0}},\"USE_COUNTER2_CSS_PROP"
		"ERTY_BoxShadow_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":11,\"range\":[1,2],\"values\":{\"0\":0,\"1\":11,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_ClipPath_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":3,\"range\":[1,2],\"values\":{\"0\":0,\"1\":3,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Color_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":11,\"range\":[1,2],\"values\":{\"0\":0,\"1\":11,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_ColumnWidth_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Content_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":11,\"range\":[1,2],\"values\":{\"0\":0,\"1\":11,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_CounterIncrement_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Cursor_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":11,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1"
		"1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Filter_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":9,\"range\":[1,2],\"values\":{\"0\":0,\"1\":9,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_FlexBasis_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":7,\"range\":[1,2],\"values\":{\"0\":0,\"1\":7,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_FontFamily_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":11,\"range\":[1,2],\"values\":{\"0\":0,\"1\":11,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_FontSize_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":11,\"range\":[1,2],\"values\":{\"0\":0,\"1\":11,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_FontVariationSettings_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_LetterSpacing_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":10,\"range\":[1,2],\"values\":{\"0\":0,\"1\":10,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_LineHeight_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"su"
		"m\":11,\"range\":[1,2],\"values\":{\"0\":0,\"1\":11,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_ListStyleType_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_MaskImage_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":3,\"range\":[1,2],\"values\":{\"0\":0,\"1\":3,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_MozContextProperties_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_MozTabSize_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Perspective_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Scale_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_StrokeDasharray_PA"
		"GE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_StrokeDashoffset_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_StrokeWidth_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":8,\"range\":[1,2],\"values\":{\"0\":0,\"1\":8,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_TextOverflow_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":11,\"range\":[1,2],\"values\":{\"0\":0,\"1\":11,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_TextShadow_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":10,\"range\":[1,2],\"values\":{\"0\":0,\"1\":10,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_TransitionDelay_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_TransitionDuration_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":3,\"range\":[1,2],\"values\":{\"0\":"
		"0,\"1\":3,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_TransitionProperty_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":7,\"range\":[1,2],\"values\":{\"0\":0,\"1\":7,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_TransitionTimingFunction_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Translate_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_VerticalAlign_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":11,\"range\":[1,2],\"values\":{\"0\":0,\"1\":11,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WillChange_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":7,\"range\":[1,2],\"values\":{\"0\":0,\"1\":7,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WordSpacing_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Clip_PAGE\":{\"bucket_count\":3,\"histogr"
		"am_type\":2,\"sum\":3,\"range\":[1,2],\"values\":{\"0\":0,\"1\":3,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Fill_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Fill_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":8,\"range\":[1,2],\"values\":{\"0\":0,\"1\":8,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Stroke_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":8,\"range\":[1,2],\"values\":{\"0\":0,\"1\":8,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_TransformOrigin_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":7,\"range\":[1,2],\"values\":{\"0\":0,\"1\":7,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_CounterReset_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_GridTemplateColumns_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_ListStyl"
		"eImage_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Transform_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":10,\"range\":[1,2],\"values\":{\"0\":0,\"1\":10,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_GridColumnEnd_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_GridColumnStart_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_GridRowEnd_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_GridRowStart_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_MaxHeight_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":11,\"range\":[1,2],\"values\":{\"0\":0,\"1"
		"\":11,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_MaxWidth_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":11,\"range\":[1,2],\"values\":{\"0\":0,\"1\":11,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_TextIndent_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":11,\"range\":[1,2],\"values\":{\"0\":0,\"1\":11,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Height_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Height_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":11,\"range\":[1,2],\"values\":{\"0\":0,\"1\":11,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_MinHeight_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":11,\"range\":[1,2],\"values\":{\"0\":0,\"1\":11,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_MinWidth_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":11,\"range\":[1,2],\"values\":{\"0\":0,\"1\":11,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Width_DOCUMENT\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"r"
		"ange\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Width_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":11,\"range\":[1,2],\"values\":{\"0\":0,\"1\":11,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_OutlineOffset_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_PaddingBottom_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":11,\"range\":[1,2],\"values\":{\"0\":0,\"1\":11,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_PaddingInlineEnd_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_PaddingInlineStart_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_PaddingLeft_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":11,\"range\":[1,2],\"values\":{\"0\":0,\"1\":11,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_PaddingRight_PA"
		"GE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":11,\"range\":[1,2],\"values\":{\"0\":0,\"1\":11,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_PaddingTop_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":11,\"range\":[1,2],\"values\":{\"0\":0,\"1\":11,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderBottomWidth_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":10,\"range\":[1,2],\"values\":{\"0\":0,\"1\":10,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderLeftWidth_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":9,\"range\":[1,2],\"values\":{\"0\":0,\"1\":9,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderRightWidth_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":10,\"range\":[1,2],\"values\":{\"0\":0,\"1\":10,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderTopWidth_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":9,\"range\":[1,2],\"values\":{\"0\":0,\"1\":9,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_OutlineWidth_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{"
		"\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderBottomLeftRadius_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":8,\"range\":[1,2],\"values\":{\"0\":0,\"1\":8,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderBottomRightRadius_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":8,\"range\":[1,2],\"values\":{\"0\":0,\"1\":8,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderTopLeftRadius_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":8,\"range\":[1,2],\"values\":{\"0\":0,\"1\":8,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderTopRightRadius_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":8,\"range\":[1,2],\"values\":{\"0\":0,\"1\":8,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Bottom_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":11,\"range\":[1,2],\"values\":{\"0\":0,\"1\":11,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Left_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":11,\"range\":[1,2],\"values\":{\"0\":0,\"1\":11,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_MarginBottom_PAGE\":{\"b"
		"ucket_count\":3,\"histogram_type\":2,\"sum\":11,\"range\":[1,2],\"values\":{\"0\":0,\"1\":11,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_MarginInlineEnd_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_MarginInlineStart_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_MarginLeft_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":11,\"range\":[1,2],\"values\":{\"0\":0,\"1\":11,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_MarginRight_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":11,\"range\":[1,2],\"values\":{\"0\":0,\"1\":11,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_MarginTop_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":11,\"range\":[1,2],\"values\":{\"0\":0,\"1\":11,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Right_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":11,\"range\":[1,2],\"values\":{\"0\":0,\"1\":11,\"2\":0}"
		"},\"USE_COUNTER2_CSS_PROPERTY_Top_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":11,\"range\":[1,2],\"values\":{\"0\":0,\"1\":11,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BackgroundColor_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":11,\"range\":[1,2],\"values\":{\"0\":0,\"1\":11,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderBottomColor_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":10,\"range\":[1,2],\"values\":{\"0\":0,\"1\":10,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderLeftColor_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":9,\"range\":[1,2],\"values\":{\"0\":0,\"1\":9,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderRightColor_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":5,\"range\":[1,2],\"values\":{\"0\":0,\"1\":5,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderTopColor_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":11,\"range\":[1,2],\"values\":{\"0\":0,\"1\":11,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_StopColor_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,"
		"\"sum\":6,\"range\":[1,2],\"values\":{\"0\":0,\"1\":6,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitTextFillColor_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":6,\"range\":[1,2],\"values\":{\"0\":0,\"1\":6,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Background_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":11,\"range\":[1,2],\"values\":{\"0\":0,\"1\":11,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BackgroundPosition_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":11,\"range\":[1,2],\"values\":{\"0\":0,\"1\":11,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderColor_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":11,\"range\":[1,2],\"values\":{\"0\":0,\"1\":11,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderStyle_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":11,\"range\":[1,2],\"values\":{\"0\":0,\"1\":11,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderWidth_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":11,\"range\":[1,2],\"values\":{\"0\":0,\"1\":11,\"2\":0}},\"USE_COUNTER2_CSS_PRO"
		"PERTY_BorderTop_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":11,\"range\":[1,2],\"values\":{\"0\":0,\"1\":11,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderRight_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":10,\"range\":[1,2],\"values\":{\"0\":0,\"1\":10,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderBottom_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":11,\"range\":[1,2],\"values\":{\"0\":0,\"1\":11,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderLeft_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":8,\"range\":[1,2],\"values\":{\"0\":0,\"1\":8,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Border_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":11,\"range\":[1,2],\"values\":{\"0\":0,\"1\":11,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderRadius_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":11,\"range\":[1,2],\"values\":{\"0\":0,\"1\":11,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_BorderImage_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\""
		"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Overflow_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":11,\"range\":[1,2],\"values\":{\"0\":0,\"1\":11,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Transition_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":10,\"range\":[1,2],\"values\":{\"0\":0,\"1\":10,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Animation_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":11,\"range\":[1,2],\"values\":{\"0\":0,\"1\":11,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_OverscrollBehavior_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_PageBreakBefore_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_PageBreakAfter_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Zoom_PAGE\":{\"bucket_count\":3,\"histogram_"
		"type\":2,\"sum\":5,\"range\":[1,2],\"values\":{\"0\":0,\"1\":5,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Font_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":11,\"range\":[1,2],\"values\":{\"0\":0,\"1\":11,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_FontVariant_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitTextStroke_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_ListStyle_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":11,\"range\":[1,2],\"values\":{\"0\":0,\"1\":11,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Margin_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":11,\"range\":[1,2],\"values\":{\"0\":0,\"1\":11,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Outline_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":11,\"range\":[1,2],\"values\":{\"0\":0,\"1\":11,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_MozOutlineRadi"
		"us_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Padding_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":11,\"range\":[1,2],\"values\":{\"0\":0,\"1\":11,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_FlexFlow_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Flex_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":7,\"range\":[1,2],\"values\":{\"0\":0,\"1\":7,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Mask_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":3,\"range\":[1,2],\"values\":{\"0\":0,\"1\":3,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_TextDecoration_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":11,\"range\":[1,2],\"values\":{\"0\":0,\"1\":11,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitBackgroundClip_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},"
		"\"USE_COUNTER2_CSS_PROPERTY_WebkitBackgroundSize_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitBorderTopLeftRadius_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitBorderTopRightRadius_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitBorderBottomRightRadius_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitBorderBottomLeftRadius_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitTransitionDuration_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPE"
		"RTY_WebkitTransitionTimingFunction_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitTransitionProperty_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_MozAnimationName_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitAnimationName_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":6,\"range\":[1,2],\"values\":{\"0\":0,\"1\":6,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_MozAnimationDuration_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitAnimationDuration_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":6,\"range\":[1,2],\"values\":{\"0\":0,\"1\":6,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitAnimationTimingFunction_PAGE\":{\""
		"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitAnimationIterationCount_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":3,\"range\":[1,2],\"values\":{\"0\":0,\"1\":3,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_MozAnimationFillMode_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitAnimationFillMode_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":5,\"range\":[1,2],\"values\":{\"0\":0,\"1\":5,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitAnimationDelay_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_MozTransform_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":3,\"range\":[1,2],\"values\":{\"0\":0,\"1\":3,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitTransform_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":8,\"range\""
		":[1,2],\"values\":{\"0\":0,\"1\":8,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_PageBreakInside_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":5,\"range\":[1,2],\"values\":{\"0\":0,\"1\":5,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitPerspective_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitBackfaceVisibility_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":6,\"range\":[1,2],\"values\":{\"0\":0,\"1\":6,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitTransformOrigin_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_MozAppearance_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":3,\"range\":[1,2],\"values\":{\"0\":0,\"1\":3,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitAppearance_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":8,\"range\":[1,2],\"values\":{\"0\":0,\"1\":8,\"2\":0}},\"USE_COUNTER2_CSS_PROPER"
		"TY_WebkitBoxShadow_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":11,\"range\":[1,2],\"values\":{\"0\":0,\"1\":11,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitFilter_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":6,\"range\":[1,2],\"values\":{\"0\":0,\"1\":6,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_MozHyphens_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":3,\"range\":[1,2],\"values\":{\"0\":0,\"1\":3,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitTextSizeAdjust_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WordWrap_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":10,\"range\":[1,2],\"values\":{\"0\":0,\"1\":10,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_MozMarginStart_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":3,\"range\":[1,2],\"values\":{\"0\":0,\"1\":3,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitFlexDirection_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1"
		",2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitFlexWrap_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitJustifyContent_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitAlignItems_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitFlexGrow_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitFlexShrink_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitAlignSelf_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_MozBoxSizin"
		"g_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":6,\"range\":[1,2],\"values\":{\"0\":0,\"1\":6,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitBoxSizing_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":6,\"range\":[1,2],\"values\":{\"0\":0,\"1\":6,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitMaskImage_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":5,\"range\":[1,2],\"values\":{\"0\":0,\"1\":5,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_MozUserSelect_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":11,\"range\":[1,2],\"values\":{\"0\":0,\"1\":11,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitUserSelect_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":11,\"range\":[1,2],\"values\":{\"0\":0,\"1\":11,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitBoxAlign_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":3,\"range\":[1,2],\"values\":{\"0\":0,\"1\":3,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitBoxDirection_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"val"
		"ues\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitBoxFlex_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitBoxOrient_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":8,\"range\":[1,2],\"values\":{\"0\":0,\"1\":8,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitBoxPack_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":3,\"range\":[1,2],\"values\":{\"0\":0,\"1\":3,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitBorderRadius_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":6,\"range\":[1,2],\"values\":{\"0\":0,\"1\":6,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_MozTransition_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":3,\"range\":[1,2],\"values\":{\"0\":0,\"1\":3,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitTransition_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_MozAnimation_PAGE\":{\"buck"
		"et_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitAnimation_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":6,\"range\":[1,2],\"values\":{\"0\":0,\"1\":6,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitFlex_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitFontSmoothing_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":7,\"range\":[1,2],\"values\":{\"0\":0,\"1\":7,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitTapHighlightColor_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":8,\"range\":[1,2],\"values\":{\"0\":0,\"1\":8,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Speak_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitUserDrag_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\""
		"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Orphans_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_Widows_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitUserModify_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_TabSize_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitMarginStart_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitColumnBreakInside_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitPaddingStart_PAGE\":{\"bucket_count\":3,\"histogram_type\""
		":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitMarginEnd_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitPrintColorAdjust_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":5,\"range\":[1,2],\"values\":{\"0\":0,\"1\":5,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitColumnCount_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}},\"USE_COUNTER2_CSS_PROPERTY_WebkitColumnWidth_PAGE\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":4,\"range\":[1,2],\"values\":{\"0\":0,\"1\":4,\"2\":0}}},\"keyedHistograms\":{\"NETWORK_HTTP_REDIRECT_TO_SCHEME\":{\"https\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":47,\"range\":[1,50],\"values\":{\"0\":10,\"1\":47,\"2\":0}}},\"SSL_TIME_UNTIL_HANDSHAKE_FINISHED_KEYED_BY_KA\":{\"none\":{\"bucket_count\":200,\"histogram_type\":0,\"sum\":12266,\"range\":[1,60000],\"v"
		"alues\":{\"43\":0,\"45\":1,\"608\":1,\"912\":1,\"5044\":1,\"5276\":1,\"5519\":0}},\"x25519\":{\"bucket_count\":200,\"histogram_type\":0,\"sum\":1988775,\"range\":[1,60000],\"values\":{\"17\":0,\"18\":1,\"19\":3,\"20\":1,\"21\":2,\"22\":1,\"23\":1,\"24\":6,\"25\":5,\"26\":2,\"27\":3,\"28\":7,\"29\":6,\"30\":5,\"31\":9,\"32\":4,\"33\":15,\"35\":9,\"37\":13,\"39\":10,\"41\":12,\"43\":9,\"45\":9,\"47\":5,\"49\":5,\"51\":2,\"53\":4,\"55\":8,\"58\":4,\"61\":4,\"64\":5,\"67\":6,\"70\":4,\"73\":2,\"76\":7,\"80\":3,\"84\":3,\"88\":4,\"92\":3,\"96\":4,\"100\":2,\"105\":2,\"110\":3,\"115\":2,\"120\":3,\"126\":4,\"132\":2,\"138\":4,\"144\":2,\"151\":3,\"158\":1,\"165\":7,\"173\":2,\"181\":5,\"189\":4,\"198\":2,\"207\":1,\"217\":4,\"227\":3,\"237\":4,\"248\":5,\"259\":4,\"271\":1,\"283\":3,\"296\":3,\"310\":6,\"324\":6,\"339\":5,\"355\":6,\"371\":5,\"388\":7,\"406\":4,\"425\":4,\"445\":3,\"465\":3,\"486\":2,\"531\":1,\"581\":1,\"636\":1,\"728\":3,\"797\":1,\"834\":1,\"872\":3,\"954\":2,\"1044\":4,\"1092\":2,\"1195\":2,"
		"\"1250\":5,\"1308\":3,\"1368\":1,\"1431\":2,\"1497\":7,\"1566\":3,\"1638\":1,\"2051\":2,\"2244\":1,\"2810\":1,\"4407\":4,\"4610\":49,\"4822\":22,\"5044\":16,\"5276\":3,\"5519\":7,\"5773\":3,\"6039\":5,\"6317\":6,\"6608\":2,\"6912\":2,\"9055\":15,\"9472\":12,\"9908\":3,\"10364\":13,\"10841\":2,\"11340\":1,\"13577\":4,\"14202\":3,\"14856\":4,\"15540\":5,\"17005\":1,\"17788\":1,\"18607\":5,\"19464\":7,\"22280\":1,\"24379\":4,\"29191\":1,\"33413\":3,\"50110\":1,\"52418\":0}}},\"HTTP_CHANNEL_DISPOSITION_UPGRADE\":{\"disabledNoReason\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":3364,\"range\":[1,50],\"values\":{\"0\":122,\"1\":423,\"2\":1452,\"3\":11,\"4\":1,\"5\":0}},\"disabledWont\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":484,\"range\":[1,50],\"values\":{\"0\":4,\"2\":233,\"3\":6,\"4\":0}}},\"HTTP3_CONNECTION_CLOSE_CODE_3\":{\"transport_closed\":{\"bucket_count\":101,\"histogram_type\":1,\"sum\":0,\"range\":[1,100],\"values\":{\"0\":33,\"1\":0}}},\"HTTP3_CHANNEL_ONSTART_SUCCESS\":{\"http3\":{\""
		"bucket_count\":3,\"histogram_type\":2,\"sum\":41,\"range\":[1,2],\"values\":{\"0\":1,\"1\":41,\"2\":0}},\"no_http3\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1697,\"range\":[1,2],\"values\":{\"0\":90,\"1\":1697,\"2\":0}}},\"DNS_LOOKUP_DISPOSITION3\":{\"mozilla.cloudflare-dns.com\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":6736,\"range\":[1,50],\"values\":{\"5\":0,\"6\":1104,\"7\":16,\"8\":0}}},\"URLCLASSIFIER_CL_KEYED_UPDATE_TIME\":{\"google4\":{\"bucket_count\":30,\"histogram_type\":0,\"sum\":2512,\"range\":[20,120000],\"values\":{\"821\":0,\"1121\":2,\"1531\":0}}},\"URLCLASSIFIER_UPDATE_REMOTE_NETWORK_ERROR\":{\"google4\":{\"bucket_count\":31,\"histogram_type\":1,\"sum\":0,\"range\":[1,30],\"values\":{\"0\":2,\"1\":0}},\"mozilla\":{\"bucket_count\":31,\"histogram_type\":1,\"sum\":0,\"range\":[1,30],\"values\":{\"0\":1,\"1\":0}}},\"URLCLASSIFIER_UPDATE_REMOTE_STATUS2\":{\"google4\":{\"bucket_count\":17,\"histogram_type\":1,\"sum\":2,\"range\":[1,16],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"m"
		"ozilla\":{\"bucket_count\":17,\"histogram_type\":1,\"sum\":1,\"range\":[1,16],\"values\":{\"0\":0,\"1\":1,\"2\":0}}},\"URLCLASSIFIER_UPDATE_SERVER_RESPONSE_TIME\":{\"google4\":{\"bucket_count\":30,\"histogram_type\":0,\"sum\":28508,\"range\":[1,100000],\"values\":{\"2601\":0,\"3902\":1,\"19753\":1,\"29630\":0}},\"mozilla\":{\"bucket_count\":30,\"histogram_type\":0,\"sum\":13572,\"range\":[1,100000],\"values\":{\"8779\":0,\"13169\":1,\"19753\":0}}},\"URLCLASSIFIER_UPDATE_TIMEOUT\":{\"google4\":{\"bucket_count\":5,\"histogram_type\":1,\"sum\":0,\"range\":[1,4],\"values\":{\"0\":2,\"1\":0}},\"mozilla\":{\"bucket_count\":5,\"histogram_type\":1,\"sum\":0,\"range\":[1,4],\"values\":{\"0\":1,\"1\":0}}},\"URLCLASSIFIER_COMPLETE_REMOTE_STATUS2\":{\"google4\":{\"bucket_count\":17,\"histogram_type\":1,\"sum\":13,\"range\":[1,16],\"values\":{\"12\":0,\"13\":1,\"14\":0}}},\"URLCLASSIFIER_COMPLETE_TIMEOUT2\":{\"google4\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":1,\"1\":1,\"2\":"
		"0}}},\"URLCLASSIFIER_COMPLETE_SERVER_RESPONSE_TIME\":{\"google4\":{\"bucket_count\":15,\"histogram_type\":0,\"sum\":5025,\"range\":[1,5000],\"values\":{\"2627\":0,\"5000\":1}}},\"URLCLASSIFIER_UPDATE_ERROR\":{\"google4\":{\"bucket_count\":17,\"histogram_type\":1,\"sum\":0,\"range\":[1,16],\"values\":{\"0\":2,\"1\":0}},\"mozilla\":{\"bucket_count\":17,\"histogram_type\":1,\"sum\":0,\"range\":[1,16],\"values\":{\"0\":1,\"1\":0}}},\"UPTAKE_REMOTE_CONTENT_RESULT_1\":{\"normandy/recipe/786\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":4,\"range\":[1,50],\"values\":{\"1\":0,\"2\":2,\"3\":0}},\"normandy/action/PreferenceExperimentAction\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":1,\"range\":[1,50],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"normandy/action/ShowHeartbeatAction\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":1,\"range\":[1,50],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"normandy/action/MessagingExperimentAction\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":1,\"range\":[1,50],\"value"
		"s\":{\"0\":0,\"1\":1,\"2\":0}},\"normandy/recipe/1109\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":4,\"range\":[1,50],\"values\":{\"1\":0,\"2\":2,\"3\":0}},\"normandy/recipe/929\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":4,\"range\":[1,50],\"values\":{\"1\":0,\"2\":2,\"3\":0}},\"normandy/recipe/661\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":4,\"range\":[1,50],\"values\":{\"1\":0,\"2\":2,\"3\":0}},\"main/search-config\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":1,\"1\":0}},\"normandy/recipe/917\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":4,\"range\":[1,50],\"values\":{\"1\":0,\"2\":2,\"3\":0}},\"normandy/recipe/1084\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":4,\"range\":[1,50],\"values\":{\"1\":0,\"2\":2,\"3\":0}},\"normandy/recipe/1091\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":4,\"range\":[1,50],\"values\":{\"1\":0,\"2\":2,\"3\":0}},\"normandy/recipe/839\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":4,\"ra"
		"nge\":[1,50],\"values\":{\"1\":0,\"2\":2,\"3\":0}},\"normandy/recipe/1082\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":4,\"range\":[1,50],\"values\":{\"1\":0,\"2\":2,\"3\":0}},\"main/hijack-blocklists\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":1,\"1\":0}},\"main/websites-with-shared-credential-backends\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":1,\"1\":0}},\"normandy/recipe/1156\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":4,\"range\":[1,50],\"values\":{\"1\":0,\"2\":2,\"3\":0}},\"normandy/recipe/1107\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":4,\"range\":[1,50],\"values\":{\"1\":0,\"2\":2,\"3\":0}},\"main/normandy-recipes-capabilities\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":1,\"1\":0}},\"normandy/recipe/767\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":2,\"range\":[1,50],\"values\":{\"1\":0,\"2\":1,\"3\":0}},\"normandy/recipe/840\":{\"buck"
		"et_count\":51,\"histogram_type\":5,\"sum\":4,\"range\":[1,50],\"values\":{\"1\":0,\"2\":2,\"3\":0}},\"main/search-telemetry\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":1,\"1\":0}},\"main/whats-new-panel\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":1,\"1\":0}},\"normandy/action/PreferenceRollbackAction\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":1,\"range\":[1,50],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"normandy/recipe/931\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":4,\"range\":[1,50],\"values\":{\"1\":0,\"2\":2,\"3\":0}},\"normandy/recipe/1147\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":1,\"range\":[1,50],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"normandy/recipe/1138\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":1,\"range\":[1,50],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"normandy/recipe/1080\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":4,\"range\":[1,50],\"values\":{\"1\":0,\"2\":2,\"3"
		"\":0}},\"main/anti-tracking-url-decoration\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":1,\"1\":0}},\"normandy/recipe/1010\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":4,\"range\":[1,50],\"values\":{\"1\":0,\"2\":2,\"3\":0}},\"main/top-sites\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":1,\"1\":0}},\"normandy/recipe/689\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":2,\"range\":[1,50],\"values\":{\"1\":0,\"2\":1,\"3\":0}},\"normandy/recipe/691\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":2,\"range\":[1,50],\"values\":{\"1\":0,\"2\":1,\"3\":0}},\"main/sites-classification\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":1,\"1\":0}},\"normandy/recipe/875\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":4,\"range\":[1,50],\"values\":{\"1\":0,\"2\":2,\"3\":0}},\"main/cfr-fxa\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":1,"
		"\"1\":0}},\"blocklists/addons-bloomfilters\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":1,\"range\":[1,50],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"normandy/recipe/553\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":4,\"range\":[1,50],\"values\":{\"1\":0,\"2\":2,\"3\":0}},\"main/pioneer-study-addons-v1\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":1,\"1\":0}},\"main/message-groups\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":1,\"1\":0}},\"normandy/action/ConsoleLogAction\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":1,\"range\":[1,50],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"normandy/recipe/1110\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":4,\"range\":[1,50],\"values\":{\"1\":0,\"2\":2,\"3\":0}},\"main/url-classifier-skip-urls\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":1,\"1\":0}},\"normandy/recipe/1141\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":"
		"10,\"range\":[1,50],\"values\":{\"9\":0,\"10\":1,\"11\":0}},\"main/language-dictionaries\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":1,\"1\":0}},\"main/search-default-override-allowlist\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":1,\"1\":0}},\"pinning/pins\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":1,\"1\":0}},\"security-state/cert-revocations\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":1,\"range\":[1,50],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"normandy/recipe/1072\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":4,\"range\":[1,50],\"values\":{\"1\":0,\"2\":2,\"3\":0}},\"normandy/action/AddonRolloutAction\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":1,\"range\":[1,50],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"normandy/recipe/909\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":4,\"range\":[1,50],\"values\":{\"1\":0,\"2\":2,\"3\":0}},\"main/cfr\":{\"bucket"
		"_count\":51,\"histogram_type\":5,\"sum\":1,\"range\":[1,50],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"normandy/recipe/1111\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":4,\"range\":[1,50],\"values\":{\"1\":0,\"2\":2,\"3\":0}},\"normandy/recipe/1096\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":4,\"range\":[1,50],\"values\":{\"1\":0,\"2\":2,\"3\":0}},\"main/fxmonitor-breaches\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":1,\"1\":0}},\"main/nimbus-desktop-experiments\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":1,\"1\":0}},\"normandy/recipe/1153\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":4,\"range\":[1,50],\"values\":{\"1\":0,\"2\":2,\"3\":0}},\"main/password-recipes\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":1,\"1\":0}},\"normandy/recipe/1106\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":4,\"range\":[1,50],\"values\":{\"1\":0,\"2\":2,\"3\":0}},\"normand"
		"y/recipe/690\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":2,\"range\":[1,50],\"values\":{\"1\":0,\"2\":1,\"3\":0}},\"normandy/recipe/1105\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":4,\"range\":[1,50],\"values\":{\"1\":0,\"2\":2,\"3\":0}},\"normandy/recipe/721\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":2,\"range\":[1,50],\"values\":{\"1\":0,\"2\":1,\"3\":0}},\"security-state/intermediates\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":1,\"range\":[1,50],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"normandy/action/PreferenceRolloutAction\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":1,\"range\":[1,50],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"settings-changes-monitoring\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":1,\"range\":[1,50],\"values\":{\"0\":1,\"1\":1,\"2\":0}},\"main/partitioning-exempt-urls\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":1,\"1\":0}},\"normandy/recipe/719\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":"
		"4,\"range\":[1,50],\"values\":{\"1\":0,\"2\":2,\"3\":0}},\"normandy/recipe/1014\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":4,\"range\":[1,50],\"values\":{\"1\":0,\"2\":2,\"3\":0}},\"normandy/recipe/918\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":4,\"range\":[1,50],\"values\":{\"1\":0,\"2\":2,\"3\":0}},\"main/public-suffix-list\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":1,\"1\":0}},\"security-state/onecrl\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":1,\"range\":[1,50],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"normandy/recipe/720\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":4,\"range\":[1,50],\"values\":{\"1\":0,\"2\":2,\"3\":0}},\"normandy/recipe/259\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":2,\"range\":[1,50],\"values\":{\"1\":0,\"2\":1,\"3\":0}},\"normandy/runner\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":1,\"range\":[1,50],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"normandy/recipe/531\":{\"bucket_count\":51,\"histog"
		"ram_type\":5,\"sum\":4,\"range\":[1,50],\"values\":{\"1\":0,\"2\":2,\"3\":0}},\"settings-sync\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":2,\"range\":[1,50],\"values\":{\"0\":0,\"1\":2,\"2\":0}},\"normandy/recipe/1149\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":4,\"range\":[1,50],\"values\":{\"1\":0,\"2\":2,\"3\":0}},\"normandy/action/AddonRollbackAction\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":1,\"range\":[1,50],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"blocklists/gfx\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":1,\"1\":0}},\"normandy/recipe/910\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":4,\"range\":[1,50],\"values\":{\"1\":0,\"2\":2,\"3\":0}},\"normandy/recipe/1124\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":4,\"range\":[1,50],\"values\":{\"1\":0,\"2\":2,\"3\":0}},\"normandy/recipe/1095\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":4,\"range\":[1,50],\"values\":{\"1\":0,\"2\":2,\"3\":0}},\"blocklists/plugins\":{\"b"
		"ucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":1,\"1\":0}},\"normandy/action/BranchedAddonStudyAction\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":1,\"range\":[1,50],\"values\":{\"0\":0,\"1\":1,\"2\":0}}},\"FX_URLBAR_SELECTED_RESULT_INDEX_BY_TYPE_2\":{\"searchengine\":{\"bucket_count\":33,\"histogram_type\":1,\"sum\":0,\"range\":[1,32],\"values\":{\"0\":2,\"1\":0}}},\"SEARCH_COUNTS\":{\"yandex-ru.urlbar\":{\"bucket_count\":3,\"histogram_type\":4,\"sum\":2,\"range\":[1,2],\"values\":{\"0\":2,\"1\":0}}},\"POPUP_NOTIFICATION_STATS\":{\"password\":{\"bucket_count\":41,\"histogram_type\":1,\"sum\":2,\"range\":[1,40],\"values\":{\"0\":1,\"2\":1,\"3\":0}},\"(all)\":{\"bucket_count\":41,\"histogram_type\":1,\"sum\":2,\"range\":[1,40],\"values\":{\"0\":1,\"2\":1,\"3\":0}}},\"WEBEXT_BACKGROUND_PAGE_LOAD_MS_BY_ADDONID\":{\"pictureinpicture@mozilla.org\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":1748,\"range\":[1,60000],\"values\":{\"1577\":0,\"1740\":1,\"1920\":0}},"
		"\"screenshots@mozilla.org\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":1753,\"range\":[1,60000],\"values\":{\"1577\":0,\"1740\":1,\"1920\":0}},\"webcompat@mozilla.org\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":1760,\"range\":[1,60000],\"values\":{\"1577\":0,\"1740\":1,\"1920\":0}},\"formautofill@mozilla.org\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":1751,\"range\":[1,60000],\"values\":{\"1577\":0,\"1740\":1,\"1920\":0}}},\"WEBEXT_EXTENSION_STARTUP_MS_BY_ADDONID\":{\"default-theme@mozilla.org\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":595,\"range\":[1,50000],\"values\":{\"500\":0,\"550\":1,\"605\":0}},\"yandex@search.mozilla.org\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":564,\"range\":[1,50000],\"values\":{\"500\":0,\"550\":1,\"605\":0}},\"google@search.mozilla.org\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":569,\"range\":[1,50000],\"values\":{\"500\":0,\"550\":1,\"605\":0}},\"ddg@search.mozilla.org\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":"
		"577,\"range\":[1,50000],\"values\":{\"500\":0,\"550\":1,\"605\":0}},\"doh-rollout@mozilla.org\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":361,\"range\":[1,50000],\"values\":{\"309\":0,\"340\":1,\"374\":0}},\"screenshots@mozilla.org\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":2437,\"range\":[1,50000],\"values\":{\"2104\":0,\"2316\":1,\"2549\":0}},\"pictureinpicture@mozilla.org\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":590,\"range\":[1,50000],\"values\":{\"500\":0,\"550\":1,\"605\":0}},\"webcompat@mozilla.org\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":587,\"range\":[1,50000],\"values\":{\"500\":0,\"550\":1,\"605\":0}},\"mailru@search.mozilla.org\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":568,\"range\":[1,50000],\"values\":{\"500\":0,\"550\":1,\"605\":0}},\"wikipedia@search.mozilla.org\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":564,\"range\":[1,50000],\"values\":{\"500\":0,\"550\":1,\"605\":0}},\"formautofill@mozilla.org\":{\"bucket_count\":100,\"histo"
		"gram_type\":0,\"sum\":592,\"range\":[1,50000],\"values\":{\"500\":0,\"550\":1,\"605\":0}},\"ozonru@search.mozilla.org\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":568,\"range\":[1,50000],\"values\":{\"500\":0,\"550\":1,\"605\":0}},\"priceru@search.mozilla.org\":{\"bucket_count\":100,\"histogram_type\":0,\"sum\":567,\"range\":[1,50000],\"values\":{\"500\":0,\"550\":1,\"605\":0}}},\"QM_FIRST_INITIALIZATION_ATTEMPT\":{\"Storage\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}},\"PersistentOrigin\":{\"bucket_count\":3,\"histogram_type\":2,\"sum\":1,\"range\":[1,2],\"values\":{\"0\":0,\"1\":1,\"2\":0}}},\"HTTP_TRAFFIC_ANALYSIS_3\":{\"Connection\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":868,\"range\":[1,50],\"values\":{\"0\":120,\"1\":226,\"2\":190,\"4\":10,\"5\":30,\"8\":9,\"9\":0}},\"Transaction\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":2603,\"range\":[1,50],\"values\":{\"0\":221,\"1\":1113,\"2\":318,\"4\":82,\"5\":71,\"6\":2,"
		"\"7\":1,\"8\":19,\"9\":0}}},\"SQLITE_STORE_OPEN\":{\"permissions.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":1,\"1\":0}},\":memory:\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":2,\"1\":0}},\"2918063365piupsah.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":4,\"1\":0}},\"3561288849sdhlie.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":3,\"1\":0}},\"2823318777ntouromlalnodry--naod.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":3,\"1\":0}},\"content-prefs.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":1,\"1\":0}},\"1657114595AmcateirvtiSty.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":13,\"1\":0}},\"1451318868ntouromlalnodry--epcr.sqlite\":{\"bucket_count\":51,\"histogram_type"
		"\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":3,\"1\":0}},\"protections.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":1,\"1\":0}},\"storage.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":1,\"1\":0}},\"places.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":4,\"1\":0}},\"3870112724rsegmnoittet-es.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":7,\"1\":0}},\"webappsstore.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":2,\"1\":0}},\"cookies.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":2,\"1\":0}},\"formhistory.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":1,\"1\":0}}},\"SQLITE_STORE_QUERY\":{\"permissions.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"ra"
		"nge\":[1,50],\"values\":{\"0\":21,\"1\":0}},\":memory:\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":24,\"1\":0}},\"2918063365piupsah.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":59,\"1\":0}},\"3561288849sdhlie.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":36,\"1\":0}},\"2823318777ntouromlalnodry--naod.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":32,\"1\":0}},\"content-prefs.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":65,\"1\":0}},\"1657114595AmcateirvtiSty.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":239,\"1\":0}},\"1451318868ntouromlalnodry--epcr.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":51,\"1\":0}},\"protections.sqlite\":{\"bucket_count\":51,\"histogram_type"
		"\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":89,\"1\":0}},\"storage.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":6,\"1\":0}},\"places.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":3107,\"1\":0}},\"3870112724rsegmnoittet-es.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":523,\"1\":0}},\"webappsstore.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":592,\"1\":0}},\"cookies.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":793,\"1\":0}},\"formhistory.sqlite\":{\"bucket_count\":51,\"histogram_type\":5,\"sum\":0,\"range\":[1,50],\"values\":{\"0\":70,\"1\":0}}}},\"info\":{\"reason\":\"aborted-session\",\"revision\":\"https://hg.mozilla.org/releases/mozilla-release/rev/179e1482851c07d65bf29a21c9e42ea312fc87fa\",\"timezoneOffset\":180,\"previousBuildId\":null,\"sessionId\":"
		"\"2c75f0ca-09ba-4979-96ec-4e540a500427\",\"subsessionId\":\"a5c9a354-8f33-4513-a476-0955cdb2ba05\",\"previousSessionId\":\"c58b249e-e81f-4e5c-b344-0adbf033b9f8\",\"previousSubsessionId\":\"107e62e6-175e-47a5-8dff-3ee9d4e21096\",\"subsessionCounter\":1,\"profileSubsessionCounter\":9,\"sessionStartDate\":\"2021-06-03T09:00:00.0+03:00\",\"subsessionStartDate\":\"2021-06-03T09:00:00.0+03:00\",\"sessionLength\":2162,\"subsessionLength\":2160,\"addons\":\"doh-rollout%40mozilla.org:2.0.0,formautofill%40mozilla.org:1.0,pictureinpicture%40mozilla.org:1.0.0,screenshots%40mozilla.org:39.0.0,webcompat%40mozilla.org:21.0.0,default-theme%40mozilla.org:1.1,google%40search.mozilla.org:1.1,wikipedia%40search.mozilla.org:1.1,yandex%40search.mozilla.org:1.1,ddg%40search.mozilla.org:1.1,priceru%40search.mozilla.org:1.0,mailru%40search.mozilla.org:1.0,ozonru%40search.mozilla.org:1.2\"}},\"clientId\":\"6f375794-79e5-4070-8b47-ae5f290622f0\",\"environment\":{\"build\":{\"applicationId\":\"{ec8030f7-c20a-464f-9b0e-13a3a9e97384}\","
		"\"applicationName\":\"Firefox\",\"architecture\":\"x86-64\",\"buildId\":\"20210504152106\",\"version\":\"88.0.1\",\"vendor\":\"Mozilla\",\"displayVersion\":\"88.0.1\",\"platformVersion\":\"88.0.1\",\"xpcomAbi\":\"x86_64-msvc\",\"updaterAvailable\":true},\"partner\":{\"distributionId\":null,\"distributionVersion\":null,\"partnerId\":null,\"distributor\":null,\"distributorChannel\":null,\"partnerNames\":[]},\"system\":{\"memoryMB\":8089,\"virtualMaxMB\":134217728,\"cpu\":{\"count\":4,\"cores\":2,\"vendor\":\"GenuineIntel\",\"family\":6,\"model\":142,\"stepping\":9,\"l2cacheKB\":256,\"l3cacheKB\":3072,\"speedMHz\":2712,\"extensions\":[\"hasMMX\",\"hasSSE\",\"hasSSE2\",\"hasSSE3\",\"hasSSSE3\",\"hasSSE4_1\",\"hasSSE4_2\",\"hasAVX\",\"hasAVX2\",\"hasAES\"]},\"os\":{\"installYear\":2021,\"hasSuperfetch\":true,\"hasPrefetch\":true,\"name\":\"Windows_NT\",\"version\":\"10.0\",\"locale\":\"ru-RU\",\"servicePackMajor\":0,\"servicePackMinor\":0,\"windowsBuildNumber\":19042,\"windowsUBR\":985},\"hdd\":{\"binary\":{\"mo"
		"del\":\"SanDisk SD8SN8U-128G-1006\",\"revision\":\"X4120006\",\"type\":\"SSD\"},\"profile\":{\"model\":\"SanDisk SD8SN8U-128G-1006\",\"revision\":\"X4120006\",\"type\":\"SSD\"},\"system\":{\"model\":\"SanDisk SD8SN8U-128G-1006\",\"revision\":\"X4120006\",\"type\":\"SSD\"}},\"gfx\":{\"D2DEnabled\":true,\"DWriteEnabled\":true,\"ContentBackend\":\"Skia\",\"Headless\":false,\"EmbeddedInFirefoxReality\":false,\"adapters\":[{\"description\":\"Intel(R) HD Graphics 620\",\"vendorID\":\"0x8086\",\"deviceID\":\"0x5916\",\"subsysID\":\"00000000\",\"RAM\":0,\"driver\":\"igdumdim64 igd10iumd64 igd10iumd64 igd12umd64 igdumdim32 igd10iumd32 igd10iumd32 igd12umd32\",\"driverVendor\":null,\"driverVersion\":\"27.20.100.8854\",\"driverDate\":\"10-14-2020\",\"GPUActive\":true}],\"monitors\":[{\"screenWidth\":1920,\"screenHeight\":1080,\"refreshRate\":60,\"pseudoDisplay\":false}],\"features\":{\"compositor\":\"webrender\",\"hwCompositing\":{\"status\":\"available\"},\"gpuProcess\":{\"status\":\"available\"},\"wrQualified\":{\"s"
		"tatus\":\"available\"},\"webrender\":{\"status\":\"available\"},\"wrCompositor\":{\"status\":\"available\"},\"wrSoftware\":{\"status\":\"unavailable:FEATURE_FAILURE_RELEASE_D3D11_SUPPORTED\"},\"openglCompositing\":{\"status\":\"unused\"},\"omtp\":{\"status\":\"disabled:FEATURE_FAILURE_DISABLED\"},\"d3d11\":{\"status\":\"available\",\"version\":45312,\"warp\":false,\"textureSharing\":true,\"blocklisted\":false},\"d2d\":{\"status\":\"available\",\"version\":\"1.1\"}}},\"appleModelId\":null,\"sec\":{\"antivirus\":[\"Антивирусная программа Microsoft Defender\"],\"antispyware\":null,\"firewall\":[\"Брандмауэр Windows\"]},\"isWow64\":false,\"isWowARM64\":false},\"settings\":{\"blocklistEnabled\":true,\"e10sEnabled\":true,\"e10sMultiProcesses\":8,\"fissionEnabled\":false,\"telemetryEnabled\":false,\"locale\":\"ru\",\"intl\":{\"requestedLocales\":[\"ru\"],\"availableLocales\":[\"ru\",\"en-US\"],\"appLocales\":[\"ru\",\"en-US\"],\"systemLocales\":[\"ru-RU\",\"en-US\"],\"regionalPrefsLo"
		"cales\":[\"ru-RU\"],\"acceptLanguages\":[\"ru-RU\",\"ru\",\"en-US\",\"en\"]},\"update\":{\"channel\":\"release\",\"enabled\":true,\"autoDownload\":true},\"userPrefs\":{\"browser.shell.checkDefaultBrowser\":false,\"browser.search.region\":\"RU\",\"browser.search.widget.inNavBar\":false,\"security.enterprise_roots.auto-enabled\":true,\"security.enterprise_roots.enabled\":true,\"widget.content.allow-gtk-dark-theme\":false,\"widget.content.gtk-high-contrast.enabled\":true},\"sandbox\":{\"effectiveContentProcessLevel\":6},\"launcherProcessState\":0,\"addonCompatibilityCheckEnabled\":true,\"isDefaultBrowser\":false,\"attribution\":{\"campaign\":\"%2528not%2Bset%2529\",\"content\":\"%2528not%2Bset%2529\",\"dltoken\":\"ece63bbb-e8a7-4e8f-9a32-93f8c1aad9c6\",\"experiment\":\"%2528not%2Bset%2529\",\"medium\":\"referral\",\"source\":\"www.google.com\",\"ua\":\"chrome\",\"variation\":\"%2528not%2Bset%2529\"},\"defaultSearchEngine\":\"yandex-ru\",\"defaultSearchEngineData\":{\"loadPath\":\"[other]addEngineWithDetails:ya"
		"ndex@search.mozilla.org\",\"name\":\"Яндекс\",\"origin\":\"default\",\"submissionURL\":\"https://yandex.ru/search?clid=2186618&text=\"}},\"profile\":{\"creationDate\":18779,\"firstUseDate\":18779},\"addons\":{\"activeAddons\":{\"doh-rollout@mozilla.org\":{\"version\":\"2.0.0\",\"scope\":1,\"type\":\"extension\",\"updateDay\":18751,\"isSystem\":true,\"isWebExtension\":true,\"multiprocessCompatible\":true,\"blocklisted\":false,\"description\":\"This used to be a Mozilla add-on that supported the roll-out of DoH, but now only exists as a stub t\",\"name\":\"DoH Roll-Out\",\"userDisabled\":false,\"appDisabled\":false,\"foreignInstall\":false,\"hasBinaryComponents\":false,\"installDay\":18751},\"formautofill@mozilla.org\":{\"version\":\"1.0\",\"scope\":1,\"type\":\"extension\",\"updateDay\":18751,\"isSystem\":true,\"isWebExtension\":true,\"multiprocessCompatible\":true,\"blocklisted\":false,\"description\":null,\"name\":\"Form Autofill\",\"userDisabled\":false,\"appDisabled\":false,\"foreignInstall\":false"
		",\"hasBinaryComponents\":false,\"installDay\":18751},\"pictureinpicture@mozilla.org\":{\"version\":\"1.0.0\",\"scope\":1,\"type\":\"extension\",\"updateDay\":18751,\"isSystem\":true,\"isWebExtension\":true,\"multiprocessCompatible\":true,\"blocklisted\":false,\"description\":\"Fixes for web compatibility with Picture-in-Picture\",\"name\":\"Picture-In-Picture\",\"userDisabled\":false,\"appDisabled\":false,\"foreignInstall\":false,\"hasBinaryComponents\":false,\"installDay\":18751},\"screenshots@mozilla.org\":{\"version\":\"39.0.0\",\"scope\":1,\"type\":\"extension\",\"updateDay\":18751,\"isSystem\":true,\"isWebExtension\":true,\"multiprocessCompatible\":true,\"blocklisted\":false,\"description\":\"Take clips and screenshots from the Web and save them temporarily or permanently.\",\"name\":\"Firefox Screenshots\",\"userDisabled\":false,\"appDisabled\":false,\"foreignInstall\":false,\"hasBinaryComponents\":false,\"installDay\":18751},\"webcompat@mozilla.org\":{\"version\":\"21.0.0\",\"scope\":1,\"type\":\"ext"
		"ension\",\"updateDay\":18751,\"isSystem\":true,\"isWebExtension\":true,\"multiprocessCompatible\":true,\"blocklisted\":false,\"description\":\"Urgent post-release fixes for web compatibility.\",\"name\":\"Web Compatibility Interventions\",\"userDisabled\":false,\"appDisabled\":false,\"foreignInstall\":false,\"hasBinaryComponents\":false,\"installDay\":18751}},\"theme\":{\"id\":\"default-theme@mozilla.org\",\"blocklisted\":false,\"description\":\"Тема с цветовой гаммой операционной системы.\",\"name\":\"Стандартная\",\"userDisabled\":false,\"appDisabled\":false,\"version\":\"1.1\",\"scope\":4,\"foreignInstall\":false,\"hasBinaryComponents\":false,\"installDay\":18779,\"updateDay\":18779},\"activePlugins\":[],\"activeGMPlugins\":{\"gmp-gmpopenh264\":{\"version\":\"1.8.1.1\",\"userDisabled\":false,\"applyBackgroundUpdates\":1},\"gmp-widevinecdm\":{\"version\":\"4.10.1582.2\",\"userDisabled\":false,\"applyBackgroundUpdates\":1}}},\"experiments\":{\"bug-1690367-ro"
		"llout-moving-webrtc-networking-functionality-into-i-release-87-100\":{\"branch\":\"active\",\"type\":\"normandy-prefrollout\",\"enrollmentId\":\"d91702fa-eba7-49ad-8d49-11a3add1163c\"},\"bug-1703186-rollout-http3-support-release-88-89\":{\"branch\":\"active\",\"type\":\"normandy-prefrollout\",\"enrollmentId\":\"a5d2d1db-9812-4555-ac4c-b0ca07b89ce1\"}}}}" ;


# 8 "globals.h" 2

# 1 "WebSocketCB.c" 1
void OnOpenCB0 (const char* connectionID,
				  const char * AccumulatedHeadersStr,
				  int AccumulatedHeadersLen)
{
	
 
 
 
 
 
 
 
 

}

void OnMessageCB0 (const char* connectionID,
				  int isbinary,
				  const char * data,
				  int length)
{
	
 
 
 
 
 
 
}

void OnErrorCB0 (const char* connectionID,
				  const char * message,
				  int length)
{
	
 
}

void OnCloseCB0 (const char* connectionID,
				  int isClosedByClient,
				  int code,
				  const char* reason,
				  int length)
{
	
 
}

# 9 "globals.h" 2

# 1 "WebSocketBuffer.h" 1



 

char WebSocketReceive0[] = "{\"messageType\":\"hello\",\"uaid\":\"b21874114df4428e910a9d8a3cb2c35b\",\"statu"
                        "s\":200,\"use_webpush\":true,\"broadcasts\":{}}";
long WebSocketReceiveLen0   = sizeof(WebSocketReceive0) - 1;	 


# 10 "globals.h" 2

# 1 "RandomText.c" 1
# 1 "D:\\LoadRunner\\include/stdlib.h" 1
 





# 1 "D:\\LoadRunner\\include/stddef.h" 1













typedef unsigned int uintptr_t;








typedef int intptr_t;








typedef int ptrdiff_t;





typedef unsigned short wchar_t;




typedef long time_t;




typedef long clock_t;




typedef wchar_t wint_t;
typedef wchar_t wctype_t;




typedef char *	va_list;



 





# 7 "D:\\LoadRunner\\include/stdlib.h" 2

typedef struct
{
  int quot;  
  int rem;  
} div_t;

typedef struct
{
  long quot;  
  long rem;  
} ldiv_t;
















void	abort(void);
int	abs(int);
double	atof(const char *_nptr);
int	atoi(const char *_nptr);
long	atol(const char *_nptr);
void *	bsearch(const void * _key,
		       const void * _base,
		       size_t _nmemb,
		       size_t _size,
		       int (*_compar)(const void *, const void *));
void *	calloc(size_t _nmemb, size_t _size);
div_t	div(int _numer, int _denom);
void	exit(int _status);
void	free(void *);
char *  getenv(const char *_string);
long	labs(long);
ldiv_t	ldiv(long _numer, long _denom);
void *	malloc(size_t _size);
void	qsort(void * _base, size_t _nmemb, size_t _size, int(*_compar)(const void *, const void *));
int	rand(void);
void *	realloc(void * _r, size_t _size);
void	srand(unsigned _seed);
double	strtod(const char *_n, char **_endvoid);
long	strtol(const char *_n, char **_endvoid, int _base);
unsigned long strtoul(const char *_n, char **_end, int _base);
int	system(const char *_string);

int	putenv(const char *_string);

char *	_gcvt(double,int,char *);
char *	_fcvt(double,int,int *,int *);
char *	_ecvt(double,int,int *,int *);


# 1 "RandomText.c" 2

# 1 "D:\\LoadRunner\\include/string.h" 1
 








# 1 "D:\\LoadRunner\\include/stddef.h" 1






























































 





# 10 "D:\\LoadRunner\\include/string.h" 2










void *	 memchr(const void *, int, size_t);
int 	 memcmp(const void *, const void *, size_t);
void * 	 memcpy(void *, const void *, size_t);
void *	 memmove(void *, const void *, size_t);
void *	 memset(void *, int, size_t);

char 	*strcat(char *, const char *);
char 	*strchr(const char *, int);
int	 strcmp(const char *, const char *);
int	 strcoll(const char *, const char *);
char 	*strcpy(char *, const char *);
size_t	 strcspn(const char *, const char *);
char 	*strerror(int);
size_t	 strlen(const char *);
char 	*strncat(char *, const char *, size_t);
int	 strncmp(const char *, const char *, size_t);
char 	*strncpy(char *, const char *, size_t);
char 	*strpbrk(const char *, const char *);
char 	*strrchr(const char *, int);
size_t	 strspn(const char *, const char *);
char 	*strstr(const char *, const char *);
char 	*strtok(char *, const char *);

void *	 memccpy(void *, const void *, int, size_t);
int	 strcmpi(const char *, const char *);
char 	*strdup(const char *);
int	 strnicmp(const char *, const char *, size_t);
void	 swab(const char *, char *, size_t);

# 2 "RandomText.c" 2



void GenerateRandomText( const char* VariableName)
{
	char bufer[200];
	unsigned int len = rand()%200;
	int pos;
	memset (bufer,0, 200);

	
	for(pos = 0; pos < len; pos++ )
	{
		bufer[pos] = 0x20+( rand()%94);	
		
	}
	
	lr_save_string(bufer,VariableName);
}
# 11 "globals.h" 2

# 1 "GenerateTema.c" 1




void GenerateTema( const char* VariableName)
{
	char bufer[50];
	unsigned int len = rand()%50;
	int pos;
	memset (bufer,0, 50);

	
	for(pos = 0; pos < len; pos++ )
	{
		bufer[pos] = rand();	
		
	}
	
	lr_save_string(bufer,VariableName);
}
# 12 "globals.h" 2


 
 



# 3 "d:\\loadrunner\\hw_!_lightmail\\\\combined_HW_!_Lightmail.c" 2

# 1 "vuser_init.c" 1
vuser_init()
{
	return 0;
}
# 4 "d:\\loadrunner\\hw_!_lightmail\\\\combined_HW_!_Lightmail.c" 2

# 1 "Action.c" 1
Action()
{
	int iter;
lr_start_transaction("action_1");
 
 

	web_set_sockets_option("SSL_VERSION", "AUTO");

	
	web_reg_find("Text=Авторизация", 
		"LAST");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_reg_save_param_regexp(
		"ParamName=act_token",
		"RegExp=act=(.*?);",
		"SEARCH_FILTERS",
		"Scope=Cookies",
		"IgnoreRedirections=No",
		"RequestUrl=*/inbox*",
		"LAST");

	web_url("light.mail.ru", 
		"URL=https://light.mail.ru/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t139.inf", 
		"Mode=HTML", 
		"LAST");

	
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
		"ITEMDATA", 
		"Name=login", "Value=test_nt_1@mail.ru", "ENDITEM", 
		"Name=htmlencoded", "Value=false", "ENDITEM", 
		"Name=email", "Value=test_nt_1@mail.ru", "ENDITEM", 
		"LAST");

			
	(web_remove_auto_header("Origin", "ImplicitGen=Yes", "LAST"));

	
	web_submit_data("auth",
		"Action=https://auth.mail.ru/cgi-bin/auth",
		"Method=POST",
		"EncodeAtSign=YES",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=https://account.mail.ru/",
		"Snapshot=t174.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=username", "Value=test_nt_1@mail.ru", "ENDITEM",
		"Name=Login", "Value=test_nt_1@mail.ru", "ENDITEM",
		"Name=password", "Value=F5g784r3", "ENDITEM",
		"Name=Password", "Value=F5g784r3", "ENDITEM",
		"Name=saveauth", "Value=1", "ENDITEM",
		"Name=new_auth_form", "Value=1", "ENDITEM",
		"Name=FromAccount", "Value=opener=account&allow_external=1&twoSteps=1", "ENDITEM",
		"Name=act_token", "Value={act_token}", "ENDITEM",
		"Name=page", "Value=https://light.mail.ru/messages/inbox?authid=kpgj5prz.fko&dwhsplit=s10273.b1s&from=login", "ENDITEM",
		"Name=lang", "Value=ru_RU", "ENDITEM",
		"LAST");

			
	lr_end_transaction("LOG_IN",2);


	lr_start_transaction("CREATE_LETTER");
	

for (iter=0;iter<3;iter++)
{
	web_reg_save_param_attrib(
		"ParamName=form_token",
		"TagName=input",
		"Extract=value",
		"Name=form_token",
		"Type=hidden",
		"SEARCH_FILTERS",
		"IgnoreRedirections=No",
		"LAST");

 
	web_reg_save_param_attrib(
		"ParamName=form_sign",
		"TagName=input",
		"Extract=value",
		"Name=form_sign",
		"Type=hidden",
		"SEARCH_FILTERS",
		"IgnoreRedirections=No",
		"LAST");
		

	web_reg_save_param_attrib(
		"ParamName=message",
		"TagName=input",
		"Extract=value",
		"Name=message",
		"Type=hidden",
		"SEARCH_FILTERS",
		"IgnoreRedirections=No",
		"LAST");

	web_url("compose", 
		"URL=https://light.mail.ru/compose/?folder=0", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://light.mail.ru/messages/inbox?authid=kpgj5prz.fko&dwhsplit=s10273.b1s&from=login", 
		"Snapshot=t191.inf", 
		"Mode=HTML", 
		"LAST");

	
	
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
		"ITEMDATA",
		"Name=form_sign", "Value={form_sign}", "ENDITEM",
		"Name=form_token", "Value={form_token}", "ENDITEM",
		"Name=message", "Value={message}", "ENDITEM",
		"Name=old_charset", "Value=", "ENDITEM",
		"Name=draft_msg", "Value=", "ENDITEM",
		"Name=text", "Value=", "ENDITEM",
		"Name=HTMLMessage", "Value=0", "ENDITEM",
		"Name=htmlencoded", "Value=0", "ENDITEM",
		"Name=template_id", "Value=", "ENDITEM",
		"Name=direction", "Value=re", "ENDITEM",
		"Name=orfo", "Value=rus", "ENDITEM",
		"Name=formessage", "Value=1", "ENDITEM",
		"Name=last_msg_id", "Value=", "ENDITEM",
		"Name=sendauto", "Value=0", "ENDITEM",
		"Name=draftauto", "Value=0", "ENDITEM",
		"Name=as_msg", "Value=", "ENDITEM",
		"Name=clickFrom", "Value=", "ENDITEM",
		"Name=copy", "Value=yes", "ENDITEM",
		"Name=RealName", "Value=0", "ENDITEM",
		"Name=attached_ids", "Value=", "ENDITEM",
		"Name=send", "Value=Отправить", "ENDITEM",
		"Name=To", "Value=test_nt_2@mail.ru", "ENDITEM",
		"Name=CC", "Value=", "ENDITEM",
		"Name=BCC", "Value=", "ENDITEM",
		"Name=Subject", "Value={Tema}", "ENDITEM",
		"Name=File", "Value=", "File=yes", "ENDITEM",
		"Name=Body", "Value={MyMessage}", "ENDITEM",
		"Name=captcha", "Value=", "ENDITEM",
		"LAST");

}
	lr_end_transaction("CREATE_LETTER",2);

	
	lr_start_transaction("LOG_OUT");
			
	web_url("logout", 
		"URL=https://auth.mail.ru/cgi-bin/logout?page=https%3A%2F%2Fmail.ru%2F%3Ffrom%3Dlogout", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://light.mail.ru/", 
		"Snapshot=t247.inf", 
		"Mode=HTML", 
		"LAST");


		lr_end_transaction("LOG_OUT",2);
		lr_end_transaction("action_1", 2);


	return 0;
}
# 5 "d:\\loadrunner\\hw_!_lightmail\\\\combined_HW_!_Lightmail.c" 2

# 1 "vuser_end.c" 1
vuser_end()
{
	return 0;
}
# 6 "d:\\loadrunner\\hw_!_lightmail\\\\combined_HW_!_Lightmail.c" 2

