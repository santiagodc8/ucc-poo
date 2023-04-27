def print_plays(year_from, year_to)
    get_shakey["William Shakespeare"]
      .select { |k, v|
        year_from <= v["finished"] &&
        year_to   >= v["finished"]
      }.each { |k, v|
        puts "#{v["title"].ljust(30)} #{v["finished"]}"
      }
  end
  print_plays(1600, 1605)