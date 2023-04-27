class Blurb
    attr_accessor :content, :time, :mood
  
    def initialize(mood, content="")
      @time    = Time.now
      @content = content[0..39]
      @mood    = mood
    end
  
    def moodify
      if    @mood == :sad
        return ":-("
      elsif @mood == :happy
        return ":-)"
      # Add other moods here
      end
  
      # The default mood
      ":-|"
    end
  end
  
  class Blurbalizer
    def initialize(title)
      @title  = title
      @blurbs = []
    end
  
    def add_a_blurb(mood, content)
      @blurbs << Blurb.new(mood, content)
    end
  
    def show_timeline
      puts "Blurbalizer: #{@title} has #{@blurbs.count} Blurbs"
  
      @blurbs.sort_by { |t|
        t.time
      }.reverse.each { |t|
        puts "#{t.content.ljust(40)} #{t.time}"
      }
    end
  end
  
  myapp.show_timeline