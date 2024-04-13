module SavingsAccount
  def self.interest_rate(balance)
    case
      when balance < 0 then 3.213
      when balance < 1000 then 0.50
      when balance < 5000 then 1.621
      else 2.475
    end
  end

  def self.annual_balance_update(balance)
    return balance * (1 + (interest_rate(balance) / 100))
  end

  def self.years_before_desired_balance(current_balance, desired_balance)
    balance = current_balance
    count = 0
    until balance >= desired_balance
      balance = annual_balance_update(balance)
      count += 1
    end
    
    count
  end
end
