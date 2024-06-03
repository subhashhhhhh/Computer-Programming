CREATE OR REPLACE TRIGGER Update_Budget_Last_Modified
AFTER INSERT OR UPDATE ON Expenses
FOR EACH ROW
BEGIN
    UPDATE Budgets
    SET last_modified = SYSDATE
    WHERE budget_id = :NEW.budget_id;
END;