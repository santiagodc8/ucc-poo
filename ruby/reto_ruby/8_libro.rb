:splendid → a masterpiece
:quite_good → enjoyed, sure, yes
:mediocre → equal parts great and terrible
:quite_not_good → notably bad
:abysmal → steaming wreck

books["Gravitys Rainbow"] = :splendid
books["The deep end"]  = :abysmal
books["Living colors"] = :mediocre

puts books

puts books.length

puts books["Gravitys Rainbow"]

books.keys

ratings = Hash.new {0}

books.values.each { |rate|
  ratings[rate] += 1
}

puts ratings