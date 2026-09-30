select W1.id from Weather W1
join Weather W2
on datediff(W1.recordDate,W2.recordDate) = 1
and w1.temperature > w2.temperature
