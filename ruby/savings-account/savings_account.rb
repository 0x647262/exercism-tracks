# frozen_string_literal: true

# SavingsAccount module:
module SavingsAccount
  def self.interest_rate(balance)
    if balance.negative?
      3.213
    elsif balance < 1000
      0.50
    elsif balance < 5000
      1.621
    else
      2.475
    end
  end

  def self.annual_balance_update(balance)
    balance * (1 + (interest_rate(balance) / 100))
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
