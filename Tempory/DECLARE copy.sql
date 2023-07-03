DECLARE
  v_username VARCHAR2(100);
  v_user_id NUMBER;
BEGIN
  -- Get the current user ID and name
  SELECT USERENV('SESSIONID'), USER INTO v_user_id, v_username FROM DUAL;

  -- Prompt the user for the table name to be altered/dropped
  DECLARE
    v_table_name VARCHAR2(100);
  BEGIN
    DBMS_OUTPUT.PUT_LINE('Please enter the name of the table to be altered or dropped:');
    DBMS_OUTPUT.GET_LINE(v_table_name, TRUE);

    -- Check if the table exists
    DECLARE
      v_table_count NUMBER;
    BEGIN
      SELECT COUNT(*) INTO v_table_count FROM USER_TABLES WHERE TABLE_NAME = v_table_name;

      -- If the table exis
      IF v_table_count > 0 THEN
        RAISE_APPLICATION_ERROR(-20001, 'This incident is reported to the administrator');
        INSERT INTO unauthorized_event_by (user_id, username, table_name) VALUES (v_user_id, v_username, v_table_name);
        DBMS_OUTPUT.PUT_LINE('Warning: You are not authorized to alter or drop the table "' || v_table_name || '".');
      ELSE
        DBMS_OUTPUT.PUT_LINE('Error: The table "' || v_table_name || '" does not exist.');
      END IF;
    END;
  END;
END;