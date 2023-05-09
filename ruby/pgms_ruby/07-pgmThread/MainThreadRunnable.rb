require 'securerandom'
require 'thread'
require_relative 'ThreadRunnable'

def main
  runnable = ThreadRunnable.new
  runnable.setTimes(SecureRandom.random_number(50))
  # initializing Thread Object
  thread = Thread.new { runnable.run }
  thread.start
end

if __FILE__ == $0
  main
end