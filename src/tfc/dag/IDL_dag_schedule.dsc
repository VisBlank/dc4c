STRUCT	dag_schedule
{
	INT	4	order_index	NOTNULL
	STRING	64	schedule_name	NOTNULL
	STRING	256	schedule_desc
	STRING	19	begin_datetime
	STRING	19	end_datetime
	INT	4	progress
	
	SQLCONN
	
	CREATE_SQL	"CREATE UNIQUE INDEX dag_schedule_idx1 ON dag_schedule ( order_index ) ;"
	CREATE_SQL	"CREATE UNIQUE INDEX dag_schedule_idx2 ON dag_schedule ( schedule_name ) ;"
	DROP_SQL	"DROP INDEX dag_schedule_idx1 ;"
	DROP_SQL	"DROP INDEX dag_schedule_idx2 ;"
	
	SQLACTION	"SELECT * FROM dag_schedule WHERE schedule_name ="
	SQLACTION	"UPDATE dag_schedule SET begin_datetime,progress WHERE schedule_name ="
	SQLACTION	"UPDATE dag_schedule SET end_datetime,progress WHERE schedule_name ="
	SQLACTION	"CURSOR dag_schedule_cursor1 SELECT * FROM dag_schedule ORDER BY order_index"
}

