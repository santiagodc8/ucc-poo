require 'securerandom'
require_relative 'ThreadExtends'

def main
  thread = ThreadExtends.new
  thread.setTimes(SecureRandom.random_number(50))
  # Invoking Thread using start() method
  thread.start
end

if __FILE__ == $0
  main
end