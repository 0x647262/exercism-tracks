(ns cars-assemble)

(defn return-success-rate
  "Returns the assembly line's success rate passed its
  speed"
  [speed]
  (cond (> speed 9) 0.77
        (> speed 8) 0.80
        (> speed 4) 0.90
        (> speed 0) 1.00
        :else 0.00))

(defn production-rate
  "Returns the assembly line's production rate per hour,
   taking into account its success rate"
  [speed]
  (let [cars-per-hour 221
        success-rate (return-success-rate speed)]
    (* cars-per-hour speed success-rate)))

(defn working-items
  "Calculates how many working cars are produced per minute"
  [speed]
  (let [cars-per-hour (int (production-rate speed))] (quot cars-per-hour 60)))
