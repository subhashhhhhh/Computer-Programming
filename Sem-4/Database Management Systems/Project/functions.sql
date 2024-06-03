-- CALCULATE TOTAL EXPENSES

CREATE OR REPLACE FUNCTION Total_Expenses (
    p_budget_id IN Expenses.budget_id%TYPE
) RETURN DECIMAL
AS
    l_total DECIMAL(10, 2) := 0;
BEGIN
    SELECT SUM(amount) INTO l_total FROM Expenses WHERE budget_id = p_budget_id;
    RETURN l_total;
EXCEPTION
    WHEN NO_DATA_FOUND THEN
        RETURN 0;
    WHEN OTHERS THEN
        RAISE_APPLICATION_ERROR(-20001, 'An error occurred calculating total expenses: ' || SQLERRM);
END;
