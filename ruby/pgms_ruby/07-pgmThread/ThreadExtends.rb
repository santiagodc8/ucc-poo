require 'thread'

class ThreadExtends < Thread
  def initialize
    super
    @times = 0
  end

  def run
    puts "Thread Started Running...on UCC University"
    puts "Random Times: #{@times}"
    printlTimes
  end

  # Defined Behavior
  def printlTimes
    timesCount = 0
    while timesCount <= @times
      print "-"
      timesCount += 1
      sleep(0.05)
    end
    puts "> OK"
  end

  # Getters and Setters
  def getTimes
    @times
  end

  def setTimes(times)
    @times = times
  end
end