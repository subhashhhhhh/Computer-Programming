-- ADD A NEW USER

CREATE OR REPLACE PROCEDURE Add_User (
    p_username IN Users.username%TYPE,
    p_email IN Users.email%TYPE
)
AS
    l_user_id Users.user_id%TYPE;
BEGIN
    SELECT user_id_seq.NEXTVAL INTO l_user_id FROM DUAL;
    INSERT INTO Users (user_id, username, email)
    VALUES (l_user_id, p_username, p_email);
    COMMIT;
    DBMS_OUTPUT.PUT_LINE('New user added with ID: ' || l_user_id);
EXCEPTION
    WHEN OTHERS THEN
        DBMS_OUTPUT.PUT_LINE('Error: ' || SQLERRM);
END;

-- CREATE A NEW BUDGET

CREATE OR REPLACE PROCEDURE Create_Budget (
    p_user_id IN Budgets.user_id%TYPE,
    p_budget_name IN Budgets.budget_name%TYPE,
    p_total_budget IN Budgets.total_budget%TYPE,
    p_start_date IN Budgets.start_date%TYPE,
    p_end_date IN Budgets.end_date%TYPE
)
AS
    l_budget_id Budgets.budget_id%TYPE;
BEGIN
    SELECT budget_id_seq.NEXTVAL INTO l_budget_id FROM DUAL;
    INSERT INTO Budgets (budget_id, user_id, budget_name, total_budget, start_date, end_date)
    VALUES (l_budget_id, p_user_id, p_budget_name, p_total_budget, p_start_date, p_end_date);
    COMMIT;
    DBMS_OUTPUT.PUT_LINE('Budget created successfully with ID: ' || l_budget_id);
EXCEPTION
    WHEN OTHERS THEN
        DBMS_OUTPUT.PUT_LINE('Error: ' || SQLERRM);
END;

-- RECORD AN EXPENSE

CREATE OR REPLACE PROCEDURE Record_Expense (
    p_budget_id IN Expenses.budget_id%TYPE,
    p_category_id IN Expenses.category_id%TYPE,
    p_amount IN Expenses.amount%TYPE,
    p_description IN Expenses.description%TYPE
)
AS
BEGIN
    INSERT INTO Expenses (expense_id, budget_id, category_id, amount, description)
    VALUES (expense_id_seq.NEXTVAL, p_budget_id, p_category_id, p_amount, p_description);
    COMMIT;
    DBMS_OUTPUT.PUT_LINE('Expense recorded successfully.');
EXCEPTION
    WHEN OTHERS THEN
        DBMS_OUTPUT.PUT_LINE('Error: ' || SQLERRM);
END;
