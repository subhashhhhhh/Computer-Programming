CREATE OR REPLACE PROCEDURE List_Expenses_By_Budget (
    p_budget_id IN Expenses.budget_id%TYPE
) AS
    CURSOR c_expenses IS
        SELECT e.amount, e.description, e.expense_date, c.category_name
        FROM Expenses e
        JOIN Categories c ON e.category_id = c.category_id
        WHERE e.budget_id = p_budget_id
        ORDER BY e.expense_date DESC;

    l_amount Expenses.amount%TYPE;
    l_description Expenses.description%TYPE;
    l_expense_date Expenses.expense_date%TYPE;
    l_category_name Categories.category_name%TYPE;
BEGIN
    OPEN c_expenses;
    LOOP
        FETCH c_expenses INTO l_amount, l_description, l_expense_date, l_category_name;
        EXIT WHEN c_expenses%NOTFOUND;
        DBMS_OUTPUT.PUT_LINE('Amount: ' || l_amount || ' Description: ' || l_description || Date: ' || l_expense_date || ' Category: ' || l_category_name);
    END LOOP;
    CLOSE c_expenses;
EXCEPTION
    WHEN OTHERS THEN
        DBMS_OUTPUT.PUT_LINE('Error retrieving expenses: ' || SQLERRM);
        CLOSE c_expenses;
END;
