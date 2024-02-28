(declare-fun x () Int)
(declare-fun y () Int)

(assert (> x 0))
(assert (= y (+ x 2)))

(check-sat)
(get-model)
