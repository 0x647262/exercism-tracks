(ns bird-watcher)

(def last-week [0 2 5 3 7 8 4])

(defn today
  [birds]
  (last birds))

(defn inc-bird
  [birds]
  (let [index (- (count birds) 1)]
    (update birds index inc)))

(defn day-without-birds?
  [birds]
  (boolean (some #{0} birds)))

(defn n-days-count
  [birds n]
  (reduce + (take n birds)))

(defn busy-days
  [birds]
  (count (filter #(<= 5 %) birds)))

(defn week-pattern
  [pattern]
  (take 7 (cycle pattern)))

(defn odd-week?
  [birds]
  (or
   (= birds (week-pattern [0 1]))
   (= birds (week-pattern [1 0]))))
