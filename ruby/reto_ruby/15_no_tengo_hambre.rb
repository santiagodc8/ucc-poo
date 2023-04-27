def hungry?(time_of_day_in_hours)
    if time_of_day_in_hours < 12
      puts "Me not hungry"
      false
    else
      puts "Me hungry"
      true
    end
  end
  
  def eat_an(what)
    puts "Me eat #{what}\n"
  end
  eat_an('apple') if hungry?(14)
  eat_an('apple') if hungry?(10)