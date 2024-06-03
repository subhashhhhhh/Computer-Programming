CREATE TABLE Users (
    user_id NUMBER PRIMARY KEY,
    username VARCHAR2(50) UNIQUE NOT NULL,
    email VARCHAR2(100) UNIQUE NOT NULL,
    created_at DATE DEFAULT SYSDATE NOT NULL
);

CREATE TABLE Budgets (
    budget_id NUMBER PRIMARY KEY,
    user_id NUMBER NOT NULL,
    budget_name VARCHAR2(100),
    total_budget DECIMAL(10, 2),
    start_date DATE,
    end_date DATE,
    CONSTRAINT fk_budgets_users FOREIGN KEY (user_id) REFERENCES Users(user_id)
);

CREATE TABLE Categories (
    category_id NUMBER PRIMARY KEY,
    category_name VARCHAR2(50) NOT NULL
);

CREATE TABLE Expenses (
    expense_id NUMBER PRIMARY KEY,
    budget_id NUMBER NOT NULL,
    category_id NUMBER NOT NULL,
    amount DECIMAL(10, 2),
    expense_date DATE DEFAULT SYSDATE NOT NULL,
    description VARCHAR2(255),
    CONSTRAINT fk_expenses_budgets FOREIGN KEY (budget_id) REFERENCES Budgets(budget_id),
    CONSTRAINT fk_expenses_categories FOREIGN KEY (category_id) REFERENCES Categories(category_id)
);
