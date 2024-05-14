(ns interest-is-interesting)

(defn interest-rate
  "Returns the interest rate based on the specified balance."
  [balance]
  (cond (>= balance 5000M) 2.475
        (>= balance 1000M) 1.621
        (>= balance 0M) 0.5
        :else -3.213))

(defn annual-balance-update
  "Returns the annual balance update, taking into account the interest rate."
  [balance]
  (let [delta (* (bigdec (interest-rate balance)) 0.01M (abs balance))]
    (+ balance delta)))

(defn amount-to-donate
  "Returns how much money to donate based on the balance and the tax-free percentage."
  [balance tax-free-percentage]
  (let [unexplained-doubling (bigdec (* tax-free-percentage 2))]
    (max 0 (int (* balance (/ unexplained-doubling 100))))))
